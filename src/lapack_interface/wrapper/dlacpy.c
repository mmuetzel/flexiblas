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



static TLS_STORE uint8_t hook_pos_dlacpy = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlacpy,DLACPY)(char* uplo, blasint* m, blasint* n, double* a, blasint* lda, double* b, blasint* ldb)
#else
void FC_GLOBAL(dlacpy,DLACPY)(char* uplo, blasint* m, blasint* n, double* a, blasint* lda, double* b, blasint* ldb)
#endif
{
	void (*fn) (void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb);
	void (*fn_hook) (void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dlacpy.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dlacpy.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb); 
		return;
	} else {
		hook_pos_dlacpy = 0;
		fn_hook((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlacpy_(char* uplo, blasint* m, blasint* n, double* a, blasint* lda, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dlacpy,DLACPY)))));
#else
#ifndef __APPLE__
void dlacpy(char* uplo, blasint* m, blasint* n, double* a, blasint* lda, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dlacpy,DLACPY)))));
#else
void dlacpy(char* uplo, blasint* m, blasint* n, double* a, blasint* lda, double* b, blasint* ldb){ FC_GLOBAL(dlacpy,DLACPY)((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlacpy_(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb)
{
	void (*fn) (void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb);

	*(void **) & fn = current_backend->lapack.dlacpy.f77_blas_function; 

		fn((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dlacpy(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb) __attribute__((alias("flexiblas_real_dlacpy_")));
#else
void flexiblas_real_dlacpy(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb){flexiblas_real_dlacpy_((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlacpy_(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb)
{
	void (*fn) (void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb);
	void (*fn_hook) (void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb);

	*(void **) &fn      = current_backend->lapack.dlacpy.f77_blas_function; 

    hook_pos_dlacpy ++;
    if( hook_pos_dlacpy < __flexiblas_hooks->dlacpy.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlacpy.f77_hook_function[hook_pos_dlacpy];
        fn_hook((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb);
    } else {
        hook_pos_dlacpy = 0;
		fn((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dlacpy(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb) __attribute__((alias("flexiblas_chain_dlacpy_")));
#else
void flexiblas_chain_dlacpy(void* uplo, void* m, void* n, void* a, void* lda, void* b, void* ldb){flexiblas_chain_dlacpy_((void*) uplo, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb);}
#endif



