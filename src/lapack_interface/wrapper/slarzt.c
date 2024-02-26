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



static TLS_STORE uint8_t hook_pos_slarzt = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slarzt,SLARZT)(char* direct, char* storev, blasint* n, blasint* k, float* v, blasint* ldv, float* tau, float* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
#else
void FC_GLOBAL(slarzt,SLARZT)(char* direct, char* storev, blasint* n, blasint* k, float* v, blasint* ldv, float* tau, float* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
#endif
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);
	void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.slarzt.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->slarzt.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev); 
		return;
	} else {
		hook_pos_slarzt = 0;
		fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slarzt_(char* direct, char* storev, blasint* n, blasint* k, float* v, blasint* ldv, float* tau, float* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias(MTS(FC_GLOBAL(slarzt,SLARZT)))));
#else
#ifndef __APPLE__
void slarzt(char* direct, char* storev, blasint* n, blasint* k, float* v, blasint* ldv, float* tau, float* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias(MTS(FC_GLOBAL(slarzt,SLARZT)))));
#else
void slarzt(char* direct, char* storev, blasint* n, blasint* k, float* v, blasint* ldv, float* tau, float* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){ FC_GLOBAL(slarzt,SLARZT)((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slarzt_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

	*(void **) & fn = current_backend->lapack.slarzt.f77_blas_function; 

		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_slarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias("flexiblas_real_slarzt_")));
#else
void flexiblas_real_slarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){flexiblas_real_slarzt_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slarzt_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
{
	void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);
	void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

	*(void **) &fn      = current_backend->lapack.slarzt.f77_blas_function; 

    hook_pos_slarzt ++;
    if( hook_pos_slarzt < __flexiblas_hooks->slarzt.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slarzt.f77_hook_function[hook_pos_slarzt];
        fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
    } else {
        hook_pos_slarzt = 0;
		fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_slarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias("flexiblas_chain_slarzt_")));
#else
void flexiblas_chain_slarzt(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){flexiblas_chain_slarzt_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev);}
#endif



