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


#if __GNUC__ > 7
typedef size_t fortran_charlen_t;
#else
typedef int fortran_charlen_t;
#endif

#ifdef INTEGER8
#define blasint int64_t
#else
#define blasint int
#endif



static TLS_STORE uint8_t hook_pos_clarzt = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(clarzt,CLARZT)(char* direct, char* storev, blasint* n, blasint* k, float complex* v, blasint* ldv, float complex* tau, float complex* t, blasint* ldt)
#else
void FC_GLOBAL(clarzt,CLARZT)(char* direct, char* storev, blasint* n, blasint* k, float complex* v, blasint* ldv, float complex* tau, float complex* t, blasint* ldt)
#endif
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt);
	void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.clarzt.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->clarzt.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt); 
		return;
	} else {
		hook_pos_clarzt = 0;
		fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void clarzt_(char* direct, char* storev, blasint* n, blasint* k, float complex* v, blasint* ldv, float complex* tau, float complex* t, blasint* ldt) __attribute__((alias(MTS(FC_GLOBAL(clarzt,CLARZT)))));
#else
#ifndef __APPLE__
void clarzt(char* direct, char* storev, blasint* n, blasint* k, float complex* v, blasint* ldv, float complex* tau, float complex* t, blasint* ldt) __attribute__((alias(MTS(FC_GLOBAL(clarzt,CLARZT)))));
#else
void clarzt(char* direct, char* storev, blasint* n, blasint* k, float complex* v, blasint* ldv, float complex* tau, float complex* t, blasint* ldt){ FC_GLOBAL(clarzt,CLARZT)((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_clarzt_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt)
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt);

	*(void **) & fn = current_backend->lapack.clarzt.f77_blas_function; 

		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_clarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt) __attribute__((alias("flexiblas_real_clarzt_")));
#else
void flexiblas_real_clarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt){flexiblas_real_clarzt_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_clarzt_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt)
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt);
	void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt);

	*(void **) &fn      = current_backend->lapack.clarzt.f77_blas_function; 

    hook_pos_clarzt ++;
    if( hook_pos_clarzt < __flexiblas_hooks->clarzt.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->clarzt.f77_hook_function[hook_pos_clarzt];
        fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt);
    } else {
        hook_pos_clarzt = 0;
		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_clarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt) __attribute__((alias("flexiblas_chain_clarzt_")));
#else
void flexiblas_chain_clarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt){flexiblas_chain_clarzt_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt);}
#endif



