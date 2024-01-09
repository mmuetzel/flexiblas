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



static TLS_STORE uint8_t hook_pos_ctpmlqt = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ctpmlqt,CTPMLQT)(char* side, char* trans, blasint* m, blasint* n, blasint* k, blasint* l, blasint* mb, float complex* v, blasint* ldv, float complex* t, blasint* ldt, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* work, blasint* info)
#else
void FC_GLOBAL(ctpmlqt,CTPMLQT)(char* side, char* trans, blasint* m, blasint* n, blasint* k, blasint* l, blasint* mb, float complex* v, blasint* ldv, float complex* t, blasint* ldt, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* work, blasint* info)
#endif
{
	void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info);
	void (*fn_hook) (void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.ctpmlqt.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->ctpmlqt.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info); 
		return;
	} else {
		hook_pos_ctpmlqt = 0;
		fn_hook((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ctpmlqt_(char* side, char* trans, blasint* m, blasint* n, blasint* k, blasint* l, blasint* mb, float complex* v, blasint* ldv, float complex* t, blasint* ldt, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ctpmlqt,CTPMLQT)))));
#else
#ifndef __APPLE__
void ctpmlqt(char* side, char* trans, blasint* m, blasint* n, blasint* k, blasint* l, blasint* mb, float complex* v, blasint* ldv, float complex* t, blasint* ldt, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ctpmlqt,CTPMLQT)))));
#else
void ctpmlqt(char* side, char* trans, blasint* m, blasint* n, blasint* k, blasint* l, blasint* mb, float complex* v, blasint* ldv, float complex* t, blasint* ldt, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* work, blasint* info){ FC_GLOBAL(ctpmlqt,CTPMLQT)((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ctpmlqt_(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info)
{
	void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info);

	*(void **) & fn = current_backend->lapack.ctpmlqt.f77_blas_function; 

		fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_ctpmlqt(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info) __attribute__((alias("flexiblas_real_ctpmlqt_")));
#else
void flexiblas_real_ctpmlqt(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info){flexiblas_real_ctpmlqt_((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_ctpmlqt_(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info)
{
	void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info);
	void (*fn_hook) (void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info);

	*(void **) &fn      = current_backend->lapack.ctpmlqt.f77_blas_function; 

    hook_pos_ctpmlqt ++;
    if( hook_pos_ctpmlqt < __flexiblas_hooks->ctpmlqt.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->ctpmlqt.f77_hook_function[hook_pos_ctpmlqt];
        fn_hook((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info);
    } else {
        hook_pos_ctpmlqt = 0;
		fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_ctpmlqt(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info) __attribute__((alias("flexiblas_chain_ctpmlqt_")));
#else
void flexiblas_chain_ctpmlqt(void* side, void* trans, void* m, void* n, void* k, void* l, void* mb, void* v, void* ldv, void* t, void* ldt, void* a, void* lda, void* b, void* ldb, void* work, void* info){flexiblas_chain_ctpmlqt_((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) l, (void*) mb, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) work, (void*) info);}
#endif



