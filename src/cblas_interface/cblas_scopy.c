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
#include "../flexiblas.h"
#include "cblas_flexiblas.h"

static TLS_STORE uint8_t hook_cblas_scopy_pos = 0;


void cblas_scopy( const CBLAS_INT N, const float *X,const CBLAS_INT incX, float *Y, const CBLAS_INT incY)
{
    void (*fn)  ( const CBLAS_INT N, const float *X, const CBLAS_INT incX, float *Y, const CBLAS_INT incY);

    CBLAS_BACKEND_INIT();
    CBLAS_HOOK_SELECT(scopy);
    fn(N,X,incX,Y,incY);
}

void flexiblas_real_cblas_scopy( const CBLAS_INT N, const float *X,const CBLAS_INT incX, float *Y, const CBLAS_INT incY)
{
    void (*fn)  ( const CBLAS_INT N, const float *X, const CBLAS_INT incX, float *Y, const CBLAS_INT incY);

    if ( current_backend->blas.scopy.cblas_function != NULL ) {
        *(void **) &fn = current_backend->blas.scopy.cblas_function;
        fn(N,X,incX,Y,incY);
    } else {
        Int F77_N=N, F77_incX=incX, F77_incY=incY;
        FC_GLOBAL(scopy,SCOPY)( (blasint *)(uintptr_t)&F77_N, (float *)(uintptr_t) X, (blasint *)(uintptr_t)&F77_incX, Y, (blasint *)(uintptr_t)&F77_incY);
    }
}

void flexiblas_chain_cblas_scopy( const CBLAS_INT N, const float *X,const CBLAS_INT incX, float *Y, const CBLAS_INT incY)
{

    void (*fn)  ( const CBLAS_INT N, const float *X, const CBLAS_INT incX, float *Y, const CBLAS_INT incY);
    CBLAS_HOOK_ADVANCE(scopy);
    fn(N,X,incX,Y,incY);

}

