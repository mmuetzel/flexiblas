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



static TLS_STORE uint8_t hook_pos_dlarfb = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlarfb,DLARFB)(char* side, char* trans, char* direct, char* storev, blasint* m, blasint* n, blasint* k, double* v, blasint* ldv, double* t, blasint* ldt, double* c, blasint* ldc, double* work, blasint* ldwork)
#else
void FC_GLOBAL(dlarfb,DLARFB)(char* side, char* trans, char* direct, char* storev, blasint* m, blasint* n, blasint* k, double* v, blasint* ldv, double* t, blasint* ldt, double* c, blasint* ldc, double* work, blasint* ldwork)
#endif
{
	void (*fn) (void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork);
	void (*fn_hook) (void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dlarfb.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dlarfb.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork); 
		return;
	} else {
		hook_pos_dlarfb = 0;
		fn_hook((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlarfb_(char* side, char* trans, char* direct, char* storev, blasint* m, blasint* n, blasint* k, double* v, blasint* ldv, double* t, blasint* ldt, double* c, blasint* ldc, double* work, blasint* ldwork) __attribute__((alias(MTS(FC_GLOBAL(dlarfb,DLARFB)))));
#else
#ifndef __APPLE__
void dlarfb(char* side, char* trans, char* direct, char* storev, blasint* m, blasint* n, blasint* k, double* v, blasint* ldv, double* t, blasint* ldt, double* c, blasint* ldc, double* work, blasint* ldwork) __attribute__((alias(MTS(FC_GLOBAL(dlarfb,DLARFB)))));
#else
void dlarfb(char* side, char* trans, char* direct, char* storev, blasint* m, blasint* n, blasint* k, double* v, blasint* ldv, double* t, blasint* ldt, double* c, blasint* ldc, double* work, blasint* ldwork){ FC_GLOBAL(dlarfb,DLARFB)((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlarfb_(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork)
{
	void (*fn) (void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork);

	*(void **) & fn = current_backend->lapack.dlarfb.f77_blas_function; 

		fn((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dlarfb(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork) __attribute__((alias("flexiblas_real_dlarfb_")));
#else
void flexiblas_real_dlarfb(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork){flexiblas_real_dlarfb_((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlarfb_(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork)
{
	void (*fn) (void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork);
	void (*fn_hook) (void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork);

	*(void **) &fn      = current_backend->lapack.dlarfb.f77_blas_function; 

    hook_pos_dlarfb ++;
    if( hook_pos_dlarfb < __flexiblas_hooks->dlarfb.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlarfb.f77_hook_function[hook_pos_dlarfb];
        fn_hook((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork);
    } else {
        hook_pos_dlarfb = 0;
		fn((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dlarfb(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork) __attribute__((alias("flexiblas_chain_dlarfb_")));
#else
void flexiblas_chain_dlarfb(void* side, void* trans, void* direct, void* storev, void* m, void* n, void* k, void* v, void* ldv, void* t, void* ldt, void* c, void* ldc, void* work, void* ldwork){flexiblas_chain_dlarfb_((void*) side, (void*) trans, (void*) direct, (void*) storev, (void*) m, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) t, (void*) ldt, (void*) c, (void*) ldc, (void*) work, (void*) ldwork);}
#endif



