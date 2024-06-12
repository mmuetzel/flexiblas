//  SPDX-License-Identifier: LGPL-3.0-or-later
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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "flexiblas_fortran_mangle.h"

#include "flexiblas.h"

#include "flexiblas_fortran_char_len.h"


static TLS_STORE uint8_t hook_pos_dlaed5 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlaed5,DLAED5)(blasint* i, double* d, double* z, double* delta, double* rho, double* dlam)
#else
void FC_GLOBAL(dlaed5,DLAED5)(blasint* i, double* d, double* z, double* delta, double* rho, double* dlam)
#endif
{
    void (*fn) (void* i, void* d, void* z, void* delta, void* rho, void* dlam);
    void (*fn_hook) (void* i, void* d, void* z, void* delta, void* rho, void* dlam);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.dlaed5.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->dlaed5.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);
        return;
    } else {
        hook_pos_dlaed5 = 0;
        fn_hook((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);
        return;
    }
}
#ifdef FLEXIBLAS_ABI_IBM
void dlaed5_(blasint* i, double* d, double* z, double* delta, double* rho, double* dlam) __attribute__((alias(MTS(FC_GLOBAL(dlaed5,DLAED5)))));
#else
#ifndef __APPLE__
void dlaed5(blasint* i, double* d, double* z, double* delta, double* rho, double* dlam) __attribute__((alias(MTS(FC_GLOBAL(dlaed5,DLAED5)))));
#else
void dlaed5(blasint* i, double* d, double* z, double* delta, double* rho, double* dlam){ FC_GLOBAL(dlaed5,DLAED5)((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlaed5_(void* i, void* d, void* z, void* delta, void* rho, void* dlam)
{
    void (*fn) (void* i, void* d, void* z, void* delta, void* rho, void* dlam);

    *(void **) & fn = current_backend->lapack.dlaed5.f77_blas_function;

    fn((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dlaed5(void* i, void* d, void* z, void* delta, void* rho, void* dlam) __attribute__((alias("flexiblas_real_dlaed5_")));
#else
void flexiblas_real_dlaed5(void* i, void* d, void* z, void* delta, void* rho, void* dlam){flexiblas_real_dlaed5_((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlaed5_(void* i, void* d, void* z, void* delta, void* rho, void* dlam)
{
    void (*fn) (void* i, void* d, void* z, void* delta, void* rho, void* dlam);
    void (*fn_hook) (void* i, void* d, void* z, void* delta, void* rho, void* dlam);

    *(void **) &fn      = current_backend->lapack.dlaed5.f77_blas_function;

    hook_pos_dlaed5 ++;
    if( hook_pos_dlaed5 < __flexiblas_hooks->dlaed5.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlaed5.f77_hook_function[hook_pos_dlaed5];
        fn_hook((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);
    } else {
        hook_pos_dlaed5 = 0;
        fn((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_dlaed5(void* i, void* d, void* z, void* delta, void* rho, void* dlam) __attribute__((alias("flexiblas_chain_dlaed5_")));
#else
void flexiblas_chain_dlaed5(void* i, void* d, void* z, void* delta, void* rho, void* dlam){flexiblas_chain_dlaed5_((void*) i, (void*) d, (void*) z, (void*) delta, (void*) rho, (void*) dlam);}
#endif



