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



static TLS_STORE uint8_t hook_pos_zunbdb1 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zunbdb1,ZUNBDB1)(blasint* m, blasint* p, blasint* q, double complex* x11, blasint* ldx11, double complex* x21, blasint* ldx21, double* theta, double* phi, double complex* taup1, double complex* taup2, double complex* tauq1, double complex* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(zunbdb1,ZUNBDB1)(blasint* m, blasint* p, blasint* q, double complex* x11, blasint* ldx11, double complex* x21, blasint* ldx21, double* theta, double* phi, double complex* taup1, double complex* taup2, double complex* tauq1, double complex* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zunbdb1.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zunbdb1.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_zunbdb1 = 0;
		fn_hook((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zunbdb1_(blasint* m, blasint* p, blasint* q, double complex* x11, blasint* ldx11, double complex* x21, blasint* ldx21, double* theta, double* phi, double complex* taup1, double complex* taup2, double complex* tauq1, double complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zunbdb1,ZUNBDB1)))));
#else
#ifndef __APPLE__
void zunbdb1(blasint* m, blasint* p, blasint* q, double complex* x11, blasint* ldx11, double complex* x21, blasint* ldx21, double* theta, double* phi, double complex* taup1, double complex* taup2, double complex* tauq1, double complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zunbdb1,ZUNBDB1)))));
#else
void zunbdb1(blasint* m, blasint* p, blasint* q, double complex* x11, blasint* ldx11, double complex* x21, blasint* ldx21, double* theta, double* phi, double complex* taup1, double complex* taup2, double complex* tauq1, double complex* work, blasint* lwork, blasint* info){ FC_GLOBAL(zunbdb1,ZUNBDB1)((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zunbdb1_(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info);

	*(void **) & fn = current_backend->lapack.zunbdb1.f77_blas_function; 

		fn((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_zunbdb1(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info) __attribute__((alias("flexiblas_real_zunbdb1_")));
#else
void flexiblas_real_zunbdb1(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info){flexiblas_real_zunbdb1_((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zunbdb1_(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info);

	*(void **) &fn      = current_backend->lapack.zunbdb1.f77_blas_function; 

    hook_pos_zunbdb1 ++;
    if( hook_pos_zunbdb1 < __flexiblas_hooks->zunbdb1.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zunbdb1.f77_hook_function[hook_pos_zunbdb1];
        fn_hook((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_zunbdb1 = 0;
		fn((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_zunbdb1(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info) __attribute__((alias("flexiblas_chain_zunbdb1_")));
#else
void flexiblas_chain_zunbdb1(void* m, void* p, void* q, void* x11, void* ldx11, void* x21, void* ldx21, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* work, void* lwork, void* info){flexiblas_chain_zunbdb1_((void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x21, (void*) ldx21, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) work, (void*) lwork, (void*) info);}
#endif



