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



static TLS_STORE uint8_t hook_pos_zlaqhb = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zlaqhb,ZLAQHB)(char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* s, double* scond, double* amax, char* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed)
#else
void FC_GLOBAL(zlaqhb,ZLAQHB)(char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* s, double* scond, double* amax, char* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed)
#endif
{
	void (*fn) (void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed);
	void (*fn_hook) (void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zlaqhb.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zlaqhb.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_equed); 
		return;
	} else {
		hook_pos_zlaqhb = 0;
		fn_hook((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_equed);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zlaqhb_(char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* s, double* scond, double* amax, char* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed) __attribute__((alias(MTS(FC_GLOBAL(zlaqhb,ZLAQHB)))));
#else
#ifndef __APPLE__
void zlaqhb(char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* s, double* scond, double* amax, char* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed) __attribute__((alias(MTS(FC_GLOBAL(zlaqhb,ZLAQHB)))));
#else
void zlaqhb(char* uplo, blasint* n, blasint* kd, double complex* ab, blasint* ldab, double* s, double* scond, double* amax, char* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed){ FC_GLOBAL(zlaqhb,ZLAQHB)((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_equed); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zlaqhb_(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed)
{
	void (*fn) (void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed);

	*(void **) & fn = current_backend->lapack.zlaqhb.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_equed); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_zlaqhb(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed) __attribute__((alias("flexiblas_real_zlaqhb_")));
#else
void flexiblas_real_zlaqhb(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed){flexiblas_real_zlaqhb_((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_equed);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zlaqhb_(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed)
{
	void (*fn) (void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed);
	void (*fn_hook) (void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed);

	*(void **) &fn      = current_backend->lapack.zlaqhb.f77_blas_function; 

    hook_pos_zlaqhb ++;
    if( hook_pos_zlaqhb < __flexiblas_hooks->zlaqhb.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zlaqhb.f77_hook_function[hook_pos_zlaqhb];
        fn_hook((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_equed);
    } else {
        hook_pos_zlaqhb = 0;
		fn((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_equed); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_zlaqhb(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed) __attribute__((alias("flexiblas_chain_zlaqhb_")));
#else
void flexiblas_chain_zlaqhb(void* uplo, void* n, void* kd, void* ab, void* ldab, void* s, void* scond, void* amax, void* equed, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_equed){flexiblas_chain_zlaqhb_((void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) s, (void*) scond, (void*) amax, (void*) equed, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_equed);}
#endif



