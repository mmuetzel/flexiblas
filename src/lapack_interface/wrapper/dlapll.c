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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "flexiblas_config.h"

#include "flexiblas_fortran_mangle.h"

#include "flexiblas.h"

#include "flexiblas_fortran_char_len.h"


static TLS_STORE uint8_t hook_pos_dlapll = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin)
#else
void FC_GLOBAL(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin)
#endif
{
    void (*fn) (void* n, void* x, void* incx, void* y, void* incy, void* ssmin);
    void (*fn_hook) (void* n, void* x, void* incx, void* y, void* incy, void* ssmin);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.dlapll.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->dlapll.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);
        return;
    } else {
        hook_pos_dlapll = 0;
        fn_hook((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);
        return;
    }
}
#ifndef __APPLE__
void FC_GLOBAL2(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin) __attribute__((alias(MTS(FC_GLOBAL(dlapll,DLAPLL)))));
void FC_GLOBAL3(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin) __attribute__((alias(MTS(FC_GLOBAL(dlapll,DLAPLL)))));
#else
void FC_GLOBAL2(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin){ FC_GLOBAL(dlapll,DLAPLL)((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin); }
void FC_GLOBAL3(dlapll,DLAPLL)(blasint* n, double* x, blasint* incx, double* y, blasint* incy, double* ssmin){ FC_GLOBAL(dlapll,DLAPLL)((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin); }
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlapll_(void* n, void* x, void* incx, void* y, void* incy, void* ssmin)
{
    void (*fn) (void* n, void* x, void* incx, void* y, void* incy, void* ssmin);

    *(void **) & fn = current_backend->lapack.dlapll.f77_blas_function;

    fn((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dlapll(void* n, void* x, void* incx, void* y, void* incy, void* ssmin) __attribute__((alias("flexiblas_real_dlapll_")));
#else
void flexiblas_real_dlapll(void* n, void* x, void* incx, void* y, void* incy, void* ssmin){flexiblas_real_dlapll_((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlapll_(void* n, void* x, void* incx, void* y, void* incy, void* ssmin)
{
    void (*fn) (void* n, void* x, void* incx, void* y, void* incy, void* ssmin);
    void (*fn_hook) (void* n, void* x, void* incx, void* y, void* incy, void* ssmin);

    *(void **) &fn      = current_backend->lapack.dlapll.f77_blas_function;

    hook_pos_dlapll ++;
    if( hook_pos_dlapll < __flexiblas_hooks->dlapll.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlapll.f77_hook_function[hook_pos_dlapll];
        fn_hook((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);
    } else {
        hook_pos_dlapll = 0;
        fn((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_dlapll(void* n, void* x, void* incx, void* y, void* incy, void* ssmin) __attribute__((alias("flexiblas_chain_dlapll_")));
#else
void flexiblas_chain_dlapll(void* n, void* x, void* incx, void* y, void* incy, void* ssmin){flexiblas_chain_dlapll_((void*) n, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ssmin);}
#endif



