//    SPDX-License-Identifier: LGPL-3.0-or-later
/*
    This file is part of FlexiBLAS, a BLAS/LAPACK interface wrapper library.
    Copyright (C) 2013-2025 Martin Koehler

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/






#include "cblas.h"
#include "cblas_f77.h"
#include "../flexiblas.h"
#include "cblas_flexiblas.h"

static TLS_STORE uint8_t hook_cblas_zher2_pos = 0;

void cblas_zher2(const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
        const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
        const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda)
{
    void (*fn)
        (const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
         const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
         const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda);

    CBLAS_BACKEND_INIT();
    CBLAS_HOOK_SELECT(zher2);
    fn(layout,Uplo,N,alpha,X,incX,Y,incY,A,lda);


}

void flexiblas_chain_cblas_zher2(const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
        const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
        const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda)
{
    void (*fn)
        (const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
         const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
         const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda);
    CBLAS_HOOK_ADVANCE(zher2);
    fn(layout,Uplo,N,alpha,X,incX,Y,incY,A,lda);

}

void flexiblas_real_cblas_zher2(const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
        const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
        const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda)
{
    char UL;
#define F77_UL &UL

#ifdef F77_INT
    F77_INT F77_N=N, F77_lda=lda, F77_incX=incX, F77_incY=incY;
#else
#define F77_N N
#define F77_lda lda
#define F77_incX incx
#define F77_incY incy

    CBLAS_INT incx=incX;
    CBLAS_INT incy=incY;

#endif
    if ( current_backend->blas.zher2.cblas_function != NULL ) {
        void (*fn)
            (const CBLAS_LAYOUT layout, const CBLAS_UPLO Uplo,
             const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX,
             const void *Y, const CBLAS_INT incY, void *A, const CBLAS_INT lda);
        *(void **) & fn = current_backend->blas.zher2.cblas_function;
        fn(layout,Uplo,N,alpha,X,incX,Y,incY,A,lda);
    } else {
        CBLAS_INT n, i, j, tincx, tincy;
        double *x, *xx, *y, *yy, *tx, *ty, *stx, *sty;

        extern int CBLAS_CallFromC;
        extern int RowMajorStrg;
        RowMajorStrg = 0;

        COPY_CONST_PTR(x,X);
        COPY_CONST_PTR(xx,X);
        COPY_CONST_PTR(y,Y);
        COPY_CONST_PTR(yy,Y);

        CBLAS_CallFromC = 1;
        if (layout == CblasColMajor)
        {
            if (Uplo == CblasLower) UL = 'L';
            else if (Uplo == CblasUpper) UL = 'U';
            else
            {
                cblas_xerbla(2, "cblas_zher2","Illegal Uplo setting, %d\n",Uplo );
                CBLAS_CallFromC = 0;
                RowMajorStrg = 0;
                return;
            }
#ifdef F77_CHAR
            F77_UL = C2F_CHAR(&UL);
#endif

            FC_GLOBAL(zher2,ZHER2)(F77_UL, (blasint *)(uintptr_t)&F77_N, (void *)(uintptr_t) alpha, (void *)(uintptr_t) X, (blasint *)(uintptr_t)&F77_incX,
                    (void *)(uintptr_t) Y, (blasint *)(uintptr_t)&F77_incY, A, (blasint *)(uintptr_t)&F77_lda, 1);

        }  else if (layout == CblasRowMajor)
        {
            RowMajorStrg = 1;
            if (Uplo == CblasUpper) UL = 'L';
            else if (Uplo == CblasLower) UL = 'U';
            else
            {
                cblas_xerbla(2, "cblas_zher2","Illegal Uplo setting, %d\n", Uplo);
                CBLAS_CallFromC = 0;
                RowMajorStrg = 0;
                return;
            }
#ifdef F77_CHAR
            F77_UL = C2F_CHAR(&UL);
#endif
            if (N > 0)
            {
                n = N << 1;
                x = malloc(n*sizeof(double));
                y = malloc(n*sizeof(double));
                tx = x;
                ty = y;
                if( incX > 0 ) {
                    i = incX << 1 ;
                    tincx = 2;
                    stx= x+n;
                } else {
                    i = incX *(-2);
                    tincx = -2;
                    stx = x-2;
                    x +=(n-2);
                }

                if( incY > 0 ) {
                    j = incY << 1;
                    tincy = 2;
                    sty= y+n;
                } else {
                    j = incY *(-2);
                    tincy = -2;
                    sty = y-2;
                    y +=(n-2);
                }

                do
                {
                    *x = *xx;
                    x[1] = -xx[1];
                    x += tincx ;
                    xx += i;
                }
                while (x != stx);

                do
                {
                    *y = *yy;
                    y[1] = -yy[1];
                    y += tincy ;
                    yy += j;
                }
                while (y != sty);

                x=tx;
                y=ty;

#ifdef F77_INT
                F77_incX = 1;
                F77_incY = 1;
#else
                incx = 1;
                incy = 1;
#endif
            }  else
            {
                COPY_CONST_PTR(x,X);
                COPY_CONST_PTR(y,Y);
            }
            FC_GLOBAL(zher2,ZHER2)(F77_UL, (blasint *)(uintptr_t)&F77_N, (void *)(uintptr_t) alpha, (void *)(uintptr_t) y, (blasint *)(uintptr_t)&F77_incY, (void *)(uintptr_t) x,
                    (blasint *)(uintptr_t)&F77_incX, A, (blasint *)(uintptr_t)&F77_lda, 1);
        } else
        {
            cblas_xerbla(1, "cblas_zher2","Illegal layout setting, %d\n", layout);
            CBLAS_CallFromC = 0;
            RowMajorStrg = 0;
            return;
        }
        if(X!=x)
            free(x);
        if(Y!=y)
            free(y);

        CBLAS_CallFromC = 0;
        RowMajorStrg = 0;

    }
    return;
}
