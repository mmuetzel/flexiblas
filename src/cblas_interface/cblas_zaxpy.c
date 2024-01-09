//    SPDX-License-Identifier: LGPL-3.0-or-later
/*
    This file is part of FlexiBLAS, a BLAS/LAPACK interface wrapper library.
    Copyright (C) 2013-2024 Martin Koehler

    This program is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
    more details.

    You should have received a copy of the GNU General Public License along
    with this program. If not, see <https://www.gnu.org/licenses/>.
 */




#include "cblas.h"
#include "cblas_f77.h"
#include "cblas_flexiblas.h"

#include "../flexiblas.h"


static TLS_STORE uint8_t hook_cblas_zaxpy_pos = 0;


void flexiblas_real_cblas_zaxpy( const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX, void *Y, const CBLAS_INT incY)
{
    void (*fn)  ( const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX, void *Y, const CBLAS_INT incY);
    if ( current_backend->blas.zaxpy.cblas_function != NULL ) {
        *(void **) &fn = current_backend->blas.zaxpy.cblas_function;
        fn(N,alpha,X,incX,Y,incY);
    } else {
        Int F77_N=N, F77_incX=incX, F77_incY=incY;
        FC_GLOBAL(zaxpy,ZAXPY)( &F77_N, alpha, X, &F77_incX, Y, &F77_incY);
    }
    return;
}

void flexiblas_chain_cblas_zaxpy( const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX, void *Y, const CBLAS_INT incY)
{
    void (*fn)  ( const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX, void *Y, const CBLAS_INT incY);
    hook_cblas_zaxpy_pos ++;
    if ( hook_cblas_zaxpy_pos < __flexiblas_hooks->zaxpy.cblas_nhook) {
        *(void **) &fn = __flexiblas_hooks->zaxpy.cblas_hook_function[hook_cblas_zaxpy_pos];
    } else {
        hook_cblas_zaxpy_pos = 0;
        fn = flexiblas_chain_cblas_zaxpy;
    }
    fn(N,alpha,X,incX,Y,incY);
}

void cblas_zaxpy( const CBLAS_INT N, const void *alpha, const void *X,
        const CBLAS_INT incX, void *Y, const CBLAS_INT incY)
{

    void (*fn)  ( const CBLAS_INT N, const void *alpha, const void *X, const CBLAS_INT incX, void *Y, const CBLAS_INT incY);

    CBLAS_BACKEND_INIT();
    CBLAS_HOOK_SELECT(zaxpy);

    fn(N,alpha,X,incX,Y,incY);

    return;


}



