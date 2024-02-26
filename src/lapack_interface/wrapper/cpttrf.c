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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "flexiblas_fortran_mangle.h"

#include "flexiblas.h"


#ifndef FLEXIBLAS_CHARLEN_T
#define FLEXIBLAS_CHARLEN_T
#if __GNUC__ > 7
typedef size_t flexiblas_fortran_charlen_t;
#else
typedef int flexiblas_fortran_charlen_t;
#endif
#endif

#ifndef blasint
#ifdef FLEXIBLAS_INTEGER8
#define blasint int64_t
#else
#define blasint int
#endif
#endif



static TLS_STORE uint8_t hook_pos_cpttrf = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(cpttrf,CPTTRF)(blasint* n, float* d, float complex* e, blasint* info)
#else
void FC_GLOBAL(cpttrf,CPTTRF)(blasint* n, float* d, float complex* e, blasint* info)
#endif
{
	void (*fn) (void* n, void* d, void* e, void* info);
	void (*fn_hook) (void* n, void* d, void* e, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.cpttrf.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->cpttrf.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) n, (void*) d, (void*) e, (void*) info); 
		return;
	} else {
		hook_pos_cpttrf = 0;
		fn_hook((void*) n, (void*) d, (void*) e, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void cpttrf_(blasint* n, float* d, float complex* e, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cpttrf,CPTTRF)))));
#else
#ifndef __APPLE__
void cpttrf(blasint* n, float* d, float complex* e, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cpttrf,CPTTRF)))));
#else
void cpttrf(blasint* n, float* d, float complex* e, blasint* info){ FC_GLOBAL(cpttrf,CPTTRF)((void*) n, (void*) d, (void*) e, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_cpttrf_(void* n, void* d, void* e, void* info)
{
	void (*fn) (void* n, void* d, void* e, void* info);

	*(void **) & fn = current_backend->lapack.cpttrf.f77_blas_function; 

		fn((void*) n, (void*) d, (void*) e, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_cpttrf(void* n, void* d, void* e, void* info) __attribute__((alias("flexiblas_real_cpttrf_")));
#else
void flexiblas_real_cpttrf(void* n, void* d, void* e, void* info){flexiblas_real_cpttrf_((void*) n, (void*) d, (void*) e, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_cpttrf_(void* n, void* d, void* e, void* info)
{
	void (*fn) (void* n, void* d, void* e, void* info);
	void (*fn_hook) (void* n, void* d, void* e, void* info);

	*(void **) &fn      = current_backend->lapack.cpttrf.f77_blas_function; 

    hook_pos_cpttrf ++;
    if( hook_pos_cpttrf < __flexiblas_hooks->cpttrf.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->cpttrf.f77_hook_function[hook_pos_cpttrf];
        fn_hook((void*) n, (void*) d, (void*) e, (void*) info);
    } else {
        hook_pos_cpttrf = 0;
		fn((void*) n, (void*) d, (void*) e, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_cpttrf(void* n, void* d, void* e, void* info) __attribute__((alias("flexiblas_chain_cpttrf_")));
#else
void flexiblas_chain_cpttrf(void* n, void* d, void* e, void* info){flexiblas_chain_cpttrf_((void*) n, (void*) d, (void*) e, (void*) info);}
#endif



