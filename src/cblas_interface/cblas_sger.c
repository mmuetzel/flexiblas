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

static TLS_STORE uint8_t hook_cblas_sger_pos = 0;

void cblas_sger(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
        const float alpha, const float  *X, const CBLAS_INT incX,
        const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda)
{
    void (*fn)(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
            const float alpha, const float  *X, const CBLAS_INT incX,
            const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda);
    CBLAS_BACKEND_INIT();
    CBLAS_HOOK_SELECT(sger);
    fn(layout,M,N,alpha,X,incX,Y,incY,A,lda);

}

void flexiblas_chain_cblas_sger(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
        const float alpha, const float  *X, const CBLAS_INT incX,
        const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda)
{
    void (*fn)(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
            const float alpha, const float  *X, const CBLAS_INT incX,
            const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda);
    CBLAS_HOOK_ADVANCE(sger);
    fn(layout,M,N,alpha,X,incX,Y,incY,A,lda);


}

void flexiblas_real_cblas_sger(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
        const float alpha, const float  *X, const CBLAS_INT incX,
        const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda)
{
#ifdef F77_INT
    F77_INT F77_M=M, F77_N=N, F77_lda=lda, F77_incX=incX, F77_incY=incY;
#else
#define F77_M M
#define F77_N N
#define F77_incX incX
#define F77_incY incY
#define F77_lda lda
#endif
    current_backend->blas.sger.calls[POS_CBLAS] ++;

    if ( current_backend->blas.sger.cblas_function != NULL ) {
        void (*fn)(const CBLAS_LAYOUT layout, const CBLAS_INT M, const CBLAS_INT N,
                const float alpha, const float  *X, const CBLAS_INT incX,
                const float  *Y, const CBLAS_INT incY, float  *A, const CBLAS_INT lda);
        *(void **) & fn = current_backend->blas.sger.cblas_function;
        fn(layout,M,N,alpha,X,incX,Y,incY,A,lda);
    } else {
        extern int CBLAS_CallFromC;
        extern int RowMajorStrg;
        RowMajorStrg = 0;

        CBLAS_CallFromC = 1;
        if (layout == CblasColMajor)
        {
            FC_GLOBAL(sger,SGER)( (blasint *)(uintptr_t)&F77_M, (blasint *)(uintptr_t)&F77_N, (float *)(uintptr_t) &alpha, (float *)(uintptr_t) X, (blasint *)(uintptr_t)&F77_incX, (float *)(uintptr_t) Y, (blasint *)(uintptr_t)&F77_incY, A, (blasint *)(uintptr_t)&F77_lda);
        }
        else if (layout == CblasRowMajor)
        {
            RowMajorStrg = 1;
            FC_GLOBAL(sger,SGER)( (blasint *)(uintptr_t)&F77_N, (blasint *)(uintptr_t)&F77_M , (float *)(uintptr_t) &alpha,  (float *)(uintptr_t) Y, (blasint *)(uintptr_t)&F77_incY,  (float *)(uintptr_t) X, (blasint *)(uintptr_t)&F77_incX, A,
                    (blasint *)(uintptr_t)&F77_lda);

        }
        else cblas_xerbla(1, "cblas_sger", "Illegal layout setting, %d\n", layout);
        CBLAS_CallFromC = 0;
        RowMajorStrg = 0;
    }
    return;
}
