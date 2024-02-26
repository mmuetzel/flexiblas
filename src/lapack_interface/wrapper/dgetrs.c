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



static TLS_STORE uint8_t hook_pos_dgetrs = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dgetrs,DGETRS)(char* trans, blasint* n, blasint* nrhs, double* a, blasint* lda, blasint* ipiv, double* b, blasint* ldb, blasint* info, flexiblas_fortran_charlen_t len_trans)
#else
void FC_GLOBAL(dgetrs,DGETRS)(char* trans, blasint* n, blasint* nrhs, double* a, blasint* lda, blasint* ipiv, double* b, blasint* ldb, blasint* info, flexiblas_fortran_charlen_t len_trans)
#endif
{
	void (*fn) (void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dgetrs.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dgetrs.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, ( flexiblas_fortran_charlen_t ) len_trans); 
		return;
	} else {
		hook_pos_dgetrs = 0;
		fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, ( flexiblas_fortran_charlen_t ) len_trans);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dgetrs_(char* trans, blasint* n, blasint* nrhs, double* a, blasint* lda, blasint* ipiv, double* b, blasint* ldb, blasint* info, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgetrs,DGETRS)))));
#else
#ifndef __APPLE__
void dgetrs(char* trans, blasint* n, blasint* nrhs, double* a, blasint* lda, blasint* ipiv, double* b, blasint* ldb, blasint* info, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgetrs,DGETRS)))));
#else
void dgetrs(char* trans, blasint* n, blasint* nrhs, double* a, blasint* lda, blasint* ipiv, double* b, blasint* ldb, blasint* info, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dgetrs,DGETRS)((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dgetrs_(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans);

	*(void **) & fn = current_backend->lapack.dgetrs.f77_blas_function; 

		fn((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, ( flexiblas_fortran_charlen_t ) len_trans); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dgetrs(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dgetrs_")));
#else
void flexiblas_real_dgetrs(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dgetrs_((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, (flexiblas_fortran_charlen_t) len_trans);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dgetrs_(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans);

	*(void **) &fn      = current_backend->lapack.dgetrs.f77_blas_function; 

    hook_pos_dgetrs ++;
    if( hook_pos_dgetrs < __flexiblas_hooks->dgetrs.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dgetrs.f77_hook_function[hook_pos_dgetrs];
        fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        hook_pos_dgetrs = 0;
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, ( flexiblas_fortran_charlen_t ) len_trans); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dgetrs(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dgetrs_")));
#else
void flexiblas_chain_dgetrs(void* trans, void* n, void* nrhs, void* a, void* lda, void* ipiv, void* b, void* ldb, void* info, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dgetrs_((void*) trans, (void*) n, (void*) nrhs, (void*) a, (void*) lda, (void*) ipiv, (void*) b, (void*) ldb, (void*) info, (flexiblas_fortran_charlen_t) len_trans);}
#endif



