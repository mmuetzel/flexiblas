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



static TLS_STORE uint8_t hook_pos_dgegv = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dgegv,DGEGV)(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr)
#else
void FC_GLOBAL(dgegv,DGEGV)(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr)
#endif
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr);
	void (*fn_hook) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dgegv.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dgegv.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_jobvl, ( flexiblas_fortran_charlen_t ) len_jobvr); 
		return;
	} else {
		hook_pos_dgegv = 0;
		fn_hook((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_jobvl, ( flexiblas_fortran_charlen_t ) len_jobvr);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dgegv_(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr) __attribute__((alias(MTS(FC_GLOBAL(dgegv,DGEGV)))));
#else
#ifndef __APPLE__
void dgegv(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr) __attribute__((alias(MTS(FC_GLOBAL(dgegv,DGEGV)))));
#else
void dgegv(char* jobvl, char* jobvr, blasint* n, double* a, blasint* lda, double* b, blasint* ldb, double* alphar, double* alphai, double* beta, double* vl, blasint* ldvl, double* vr, blasint* ldvr, double* work, blasint* lwork, blasint* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr){ FC_GLOBAL(dgegv,DGEGV)((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, (flexiblas_fortran_charlen_t) len_jobvl, (flexiblas_fortran_charlen_t) len_jobvr); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dgegv_(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr)
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr);

	*(void **) & fn = current_backend->lapack.dgegv.f77_blas_function; 

		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_jobvl, ( flexiblas_fortran_charlen_t ) len_jobvr); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr) __attribute__((alias("flexiblas_real_dgegv_")));
#else
void flexiblas_real_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr){flexiblas_real_dgegv_((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, (flexiblas_fortran_charlen_t) len_jobvl, (flexiblas_fortran_charlen_t) len_jobvr);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dgegv_(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr)
{
	void (*fn) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr);
	void (*fn_hook) (void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr);

	*(void **) &fn      = current_backend->lapack.dgegv.f77_blas_function; 

    hook_pos_dgegv ++;
    if( hook_pos_dgegv < __flexiblas_hooks->dgegv.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dgegv.f77_hook_function[hook_pos_dgegv];
        fn_hook((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_jobvl, ( flexiblas_fortran_charlen_t ) len_jobvr);
    } else {
        hook_pos_dgegv = 0;
		fn((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_jobvl, ( flexiblas_fortran_charlen_t ) len_jobvr); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr) __attribute__((alias("flexiblas_chain_dgegv_")));
#else
void flexiblas_chain_dgegv(void* jobvl, void* jobvr, void* n, void* a, void* lda, void* b, void* ldb, void* alphar, void* alphai, void* beta, void* vl, void* ldvl, void* vr, void* ldvr, void* work, void* lwork, void* info, flexiblas_fortran_charlen_t len_jobvl, flexiblas_fortran_charlen_t len_jobvr){flexiblas_chain_dgegv_((void*) jobvl, (void*) jobvr, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) alphar, (void*) alphai, (void*) beta, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) work, (void*) lwork, (void*) info, (flexiblas_fortran_charlen_t) len_jobvl, (flexiblas_fortran_charlen_t) len_jobvr);}
#endif



