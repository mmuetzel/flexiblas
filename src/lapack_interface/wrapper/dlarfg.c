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


static TLS_STORE uint8_t hook_pos_dlarfg = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau)
#else
void FC_GLOBAL(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau)
#endif
{
    void (*fn) (void* n, void* alpha, void* x, void* incx, void* tau);
    void (*fn_hook) (void* n, void* alpha, void* x, void* incx, void* tau);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.dlarfg.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->dlarfg.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);
        return;
    } else {
        hook_pos_dlarfg = 0;
        fn_hook((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);
        return;
    }
}
#ifndef __APPLE__
void FC_GLOBAL2(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau) __attribute__((alias(MTS(FC_GLOBAL(dlarfg,DLARFG)))));
void FC_GLOBAL3(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau) __attribute__((alias(MTS(FC_GLOBAL(dlarfg,DLARFG)))));
#else
void FC_GLOBAL2(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau){ FC_GLOBAL(dlarfg,DLARFG)((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau); }
void FC_GLOBAL3(dlarfg,DLARFG)(blasint* n, double* alpha, double* x, blasint* incx, double* tau){ FC_GLOBAL(dlarfg,DLARFG)((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau); }
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlarfg_(void* n, void* alpha, void* x, void* incx, void* tau)
{
    void (*fn) (void* n, void* alpha, void* x, void* incx, void* tau);

    *(void **) & fn = current_backend->lapack.dlarfg.f77_blas_function;

    fn((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dlarfg(void* n, void* alpha, void* x, void* incx, void* tau) __attribute__((alias("flexiblas_real_dlarfg_")));
#else
void flexiblas_real_dlarfg(void* n, void* alpha, void* x, void* incx, void* tau){flexiblas_real_dlarfg_((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlarfg_(void* n, void* alpha, void* x, void* incx, void* tau)
{
    void (*fn) (void* n, void* alpha, void* x, void* incx, void* tau);
    void (*fn_hook) (void* n, void* alpha, void* x, void* incx, void* tau);

    *(void **) &fn      = current_backend->lapack.dlarfg.f77_blas_function;

    hook_pos_dlarfg ++;
    if( hook_pos_dlarfg < __flexiblas_hooks->dlarfg.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlarfg.f77_hook_function[hook_pos_dlarfg];
        fn_hook((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);
    } else {
        hook_pos_dlarfg = 0;
        fn((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_dlarfg(void* n, void* alpha, void* x, void* incx, void* tau) __attribute__((alias("flexiblas_chain_dlarfg_")));
#else
void flexiblas_chain_dlarfg(void* n, void* alpha, void* x, void* incx, void* tau){flexiblas_chain_dlarfg_((void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) tau);}
#endif



