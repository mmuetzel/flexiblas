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



static TLS_STORE uint8_t hook_pos_clatbs = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(clatbs,CLATBS)(char* uplo, char* trans, char* diag, char* normin, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float complex* x, float* scale, float* cnorm, blasint* info)
#else
void FC_GLOBAL(clatbs,CLATBS)(char* uplo, char* trans, char* diag, char* normin, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float complex* x, float* scale, float* cnorm, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info);
	void (*fn_hook) (void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.clatbs.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->clatbs.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info); 
		return;
	} else {
		hook_pos_clatbs = 0;
		fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void clatbs_(char* uplo, char* trans, char* diag, char* normin, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float complex* x, float* scale, float* cnorm, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(clatbs,CLATBS)))));
#else
#ifndef __APPLE__
void clatbs(char* uplo, char* trans, char* diag, char* normin, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float complex* x, float* scale, float* cnorm, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(clatbs,CLATBS)))));
#else
void clatbs(char* uplo, char* trans, char* diag, char* normin, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float complex* x, float* scale, float* cnorm, blasint* info){ FC_GLOBAL(clatbs,CLATBS)((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_clatbs_(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info)
{
	void (*fn) (void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info);

	*(void **) & fn = current_backend->lapack.clatbs.f77_blas_function; 

		fn((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_clatbs(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info) __attribute__((alias("flexiblas_real_clatbs_")));
#else
void flexiblas_real_clatbs(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info){flexiblas_real_clatbs_((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_clatbs_(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info)
{
	void (*fn) (void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info);
	void (*fn_hook) (void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info);

	*(void **) &fn      = current_backend->lapack.clatbs.f77_blas_function; 

    hook_pos_clatbs ++;
    if( hook_pos_clatbs < __flexiblas_hooks->clatbs.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->clatbs.f77_hook_function[hook_pos_clatbs];
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info);
    } else {
        hook_pos_clatbs = 0;
		fn((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_clatbs(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info) __attribute__((alias("flexiblas_chain_clatbs_")));
#else
void flexiblas_chain_clatbs(void* uplo, void* trans, void* diag, void* normin, void* n, void* kd, void* ab, void* ldab, void* x, void* scale, void* cnorm, void* info){flexiblas_chain_clatbs_((void*) uplo, (void*) trans, (void*) diag, (void*) normin, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) x, (void*) scale, (void*) cnorm, (void*) info);}
#endif



