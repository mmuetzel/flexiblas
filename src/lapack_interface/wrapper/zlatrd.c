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



static TLS_STORE uint8_t hook_pos_zlatrd = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zlatrd,ZLATRD)(char* uplo, blasint* n, blasint* nb, double complex* a, blasint* lda, double* e, double complex* tau, double complex* w, blasint* ldw)
#else
void FC_GLOBAL(zlatrd,ZLATRD)(char* uplo, blasint* n, blasint* nb, double complex* a, blasint* lda, double* e, double complex* tau, double complex* w, blasint* ldw)
#endif
{
	void (*fn) (void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw);
	void (*fn_hook) (void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zlatrd.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zlatrd.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw); 
		return;
	} else {
		hook_pos_zlatrd = 0;
		fn_hook((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zlatrd_(char* uplo, blasint* n, blasint* nb, double complex* a, blasint* lda, double* e, double complex* tau, double complex* w, blasint* ldw) __attribute__((alias(MTS(FC_GLOBAL(zlatrd,ZLATRD)))));
#else
#ifndef __APPLE__
void zlatrd(char* uplo, blasint* n, blasint* nb, double complex* a, blasint* lda, double* e, double complex* tau, double complex* w, blasint* ldw) __attribute__((alias(MTS(FC_GLOBAL(zlatrd,ZLATRD)))));
#else
void zlatrd(char* uplo, blasint* n, blasint* nb, double complex* a, blasint* lda, double* e, double complex* tau, double complex* w, blasint* ldw){ FC_GLOBAL(zlatrd,ZLATRD)((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zlatrd_(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw)
{
	void (*fn) (void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw);

	*(void **) & fn = current_backend->lapack.zlatrd.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_zlatrd(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw) __attribute__((alias("flexiblas_real_zlatrd_")));
#else
void flexiblas_real_zlatrd(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw){flexiblas_real_zlatrd_((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zlatrd_(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw)
{
	void (*fn) (void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw);
	void (*fn_hook) (void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw);

	*(void **) &fn      = current_backend->lapack.zlatrd.f77_blas_function; 

    hook_pos_zlatrd ++;
    if( hook_pos_zlatrd < __flexiblas_hooks->zlatrd.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zlatrd.f77_hook_function[hook_pos_zlatrd];
        fn_hook((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw);
    } else {
        hook_pos_zlatrd = 0;
		fn((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_zlatrd(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw) __attribute__((alias("flexiblas_chain_zlatrd_")));
#else
void flexiblas_chain_zlatrd(void* uplo, void* n, void* nb, void* a, void* lda, void* e, void* tau, void* w, void* ldw){flexiblas_chain_zlatrd_((void*) uplo, (void*) n, (void*) nb, (void*) a, (void*) lda, (void*) e, (void*) tau, (void*) w, (void*) ldw);}
#endif



