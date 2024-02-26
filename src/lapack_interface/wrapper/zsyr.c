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



static TLS_STORE uint8_t hook_pos_zsyr = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zsyr,ZSYR)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
#else
void FC_GLOBAL(zsyr,ZSYR)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
#endif
{
	void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
	void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zsyr.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zsyr.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo); 
		return;
	} else {
		hook_pos_zsyr = 0;
		fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zsyr_(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsyr,ZSYR)))));
#else
#ifndef __APPLE__
void zsyr(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsyr,ZSYR)))));
#else
void zsyr(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zsyr,ZSYR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zsyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
	void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

	*(void **) & fn = current_backend->lapack.zsyr.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_zsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zsyr_")));
#else
void flexiblas_real_zsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zsyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zsyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
	void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
	void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

	*(void **) &fn      = current_backend->lapack.zsyr.f77_blas_function; 

    hook_pos_zsyr ++;
    if( hook_pos_zsyr < __flexiblas_hooks->zsyr.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zsyr.f77_hook_function[hook_pos_zsyr];
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        hook_pos_zsyr = 0;
		fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_zsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zsyr_")));
#else
void flexiblas_chain_zsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zsyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif



