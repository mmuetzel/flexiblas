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



static TLS_STORE uint8_t hook_pos_dsbtrd = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dsbtrd,DSBTRD)(char* vect, char* uplo, blasint* n, blasint* kd, double* ab, blasint* ldab, double* d, double* e, double* q, blasint* ldq, double* work, blasint* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo)
#else
void FC_GLOBAL(dsbtrd,DSBTRD)(char* vect, char* uplo, blasint* n, blasint* kd, double* ab, blasint* ldab, double* d, double* e, double* q, blasint* ldq, double* work, blasint* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo)
#endif
{
	void (*fn) (void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo);
	void (*fn_hook) (void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dsbtrd.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dsbtrd.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_vect, ( flexiblas_fortran_charlen_t ) len_uplo); 
		return;
	} else {
		hook_pos_dsbtrd = 0;
		fn_hook((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_vect, ( flexiblas_fortran_charlen_t ) len_uplo);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dsbtrd_(char* vect, char* uplo, blasint* n, blasint* kd, double* ab, blasint* ldab, double* d, double* e, double* q, blasint* ldq, double* work, blasint* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbtrd,DSBTRD)))));
#else
#ifndef __APPLE__
void dsbtrd(char* vect, char* uplo, blasint* n, blasint* kd, double* ab, blasint* ldab, double* d, double* e, double* q, blasint* ldq, double* work, blasint* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbtrd,DSBTRD)))));
#else
void dsbtrd(char* vect, char* uplo, blasint* n, blasint* kd, double* ab, blasint* ldab, double* d, double* e, double* q, blasint* ldq, double* work, blasint* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsbtrd,DSBTRD)((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_vect, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dsbtrd_(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo)
{
	void (*fn) (void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo);

	*(void **) & fn = current_backend->lapack.dsbtrd.f77_blas_function; 

		fn((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_vect, ( flexiblas_fortran_charlen_t ) len_uplo); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dsbtrd(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsbtrd_")));
#else
void flexiblas_real_dsbtrd(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsbtrd_((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_vect, (flexiblas_fortran_charlen_t) len_uplo);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dsbtrd_(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo)
{
	void (*fn) (void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo);
	void (*fn_hook) (void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo);

	*(void **) &fn      = current_backend->lapack.dsbtrd.f77_blas_function; 

    hook_pos_dsbtrd ++;
    if( hook_pos_dsbtrd < __flexiblas_hooks->dsbtrd.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dsbtrd.f77_hook_function[hook_pos_dsbtrd];
        fn_hook((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_vect, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        hook_pos_dsbtrd = 0;
		fn((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_vect, ( flexiblas_fortran_charlen_t ) len_uplo); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dsbtrd(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsbtrd_")));
#else
void flexiblas_chain_dsbtrd(void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* q, void* ldq, void* work, void* info, flexiblas_fortran_charlen_t len_vect, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsbtrd_((void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) q, (void*) ldq, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_vect, (flexiblas_fortran_charlen_t) len_uplo);}
#endif



