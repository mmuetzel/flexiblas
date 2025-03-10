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

static TLS_STORE uint8_t hook_cblas_idamax_pos = 0;

CBLAS_INDEX cblas_idamax( const CBLAS_INT N, const double *X, const CBLAS_INT incX)
{
    CBLAS_INDEX iamax;
    CBLAS_INDEX (*fn) ( const CBLAS_INT N, const double *X, const CBLAS_INT incX);
    CBLAS_BACKEND_INIT();
    CBLAS_HOOK_SELECT(idamax);

    iamax = fn(N,X,incX);
    return iamax;
}

CBLAS_INDEX flexiblas_chain_cblas_idamax( const CBLAS_INT N, const double *X, const CBLAS_INT incX)
{
    CBLAS_INDEX iamax;
    CBLAS_INDEX (*fn) ( const CBLAS_INT N, const double *X, const CBLAS_INT incX);
    CBLAS_HOOK_ADVANCE(idamax);
    iamax = fn(N,X,incX);
    return iamax;
}


CBLAS_INDEX flexiblas_real_cblas_idamax( const CBLAS_INT N, const double *X, const CBLAS_INT incX)
{
    CBLAS_INDEX iamax;
#ifdef F77_INT
    F77_INT F77_N=N, F77_incX=incX;
#else
#define F77_N N
#define F77_incX incX
#endif
    if ( current_backend->blas.idamax.cblas_function != NULL ) {
        CBLAS_INDEX (*fn) ( const CBLAS_INT N, const double *X, const CBLAS_INT incX);
        *(void **) &fn = current_backend->blas.idamax.cblas_function;
        iamax = fn(N,X,incX);
    } else {
        iamax = FC_GLOBAL(idamax,IDAMAX)( (blasint *)(uintptr_t)&F77_N, (double *)(uintptr_t) X, (blasint *)(uintptr_t)&F77_incX);
        iamax = iamax ? iamax-1 : 0;
    }
    return iamax;
}
