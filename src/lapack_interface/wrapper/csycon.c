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



static TLS_STORE uint8_t hook_pos_csycon = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(csycon,CSYCON)(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* ipiv, float* anorm, float* rcond, float complex* work, blasint* info)
#else
void FC_GLOBAL(csycon,CSYCON)(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* ipiv, float* anorm, float* rcond, float complex* work, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.csycon.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->csycon.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info); 
		return;
	} else {
		hook_pos_csycon = 0;
		fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void csycon_(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* ipiv, float* anorm, float* rcond, float complex* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(csycon,CSYCON)))));
#else
#ifndef __APPLE__
void csycon(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* ipiv, float* anorm, float* rcond, float complex* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(csycon,CSYCON)))));
#else
void csycon(char* uplo, blasint* n, float complex* a, blasint* lda, blasint* ipiv, float* anorm, float* rcond, float complex* work, blasint* info){ FC_GLOBAL(csycon,CSYCON)((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_csycon_(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info);

	*(void **) & fn = current_backend->lapack.csycon.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_csycon(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info) __attribute__((alias("flexiblas_real_csycon_")));
#else
void flexiblas_real_csycon(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info){flexiblas_real_csycon_((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_csycon_(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info)
{
	void (*fn) (void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info);
	void (*fn_hook) (void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info);

	*(void **) &fn      = current_backend->lapack.csycon.f77_blas_function; 

    hook_pos_csycon ++;
    if( hook_pos_csycon < __flexiblas_hooks->csycon.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->csycon.f77_hook_function[hook_pos_csycon];
        fn_hook((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info);
    } else {
        hook_pos_csycon = 0;
		fn((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_csycon(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info) __attribute__((alias("flexiblas_chain_csycon_")));
#else
void flexiblas_chain_csycon(void* uplo, void* n, void* a, void* lda, void* ipiv, void* anorm, void* rcond, void* work, void* info){flexiblas_chain_csycon_((void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) info);}
#endif



