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



static TLS_STORE uint8_t hook_pos_ztgevc = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ztgevc,ZTGEVC)(char* side, char* howmny, blasint* select, blasint* n, double complex* s, blasint* lds, double complex* p, blasint* ldp, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, double* rwork, blasint* info)
#else
void FC_GLOBAL(ztgevc,ZTGEVC)(char* side, char* howmny, blasint* select, blasint* n, double complex* s, blasint* lds, double complex* p, blasint* ldp, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, double* rwork, blasint* info)
#endif
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info);
	void (*fn_hook) (void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.ztgevc.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->ztgevc.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info); 
		return;
	} else {
		hook_pos_ztgevc = 0;
		fn_hook((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ztgevc_(char* side, char* howmny, blasint* select, blasint* n, double complex* s, blasint* lds, double complex* p, blasint* ldp, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztgevc,ZTGEVC)))));
#else
#ifndef __APPLE__
void ztgevc(char* side, char* howmny, blasint* select, blasint* n, double complex* s, blasint* lds, double complex* p, blasint* ldp, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztgevc,ZTGEVC)))));
#else
void ztgevc(char* side, char* howmny, blasint* select, blasint* n, double complex* s, blasint* lds, double complex* p, blasint* ldp, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, double* rwork, blasint* info){ FC_GLOBAL(ztgevc,ZTGEVC)((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ztgevc_(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info)
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info);

	*(void **) & fn = current_backend->lapack.ztgevc.f77_blas_function; 

		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_ztgevc(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info) __attribute__((alias("flexiblas_real_ztgevc_")));
#else
void flexiblas_real_ztgevc(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info){flexiblas_real_ztgevc_((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_ztgevc_(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info)
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info);
	void (*fn_hook) (void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info);

	*(void **) &fn      = current_backend->lapack.ztgevc.f77_blas_function; 

    hook_pos_ztgevc ++;
    if( hook_pos_ztgevc < __flexiblas_hooks->ztgevc.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->ztgevc.f77_hook_function[hook_pos_ztgevc];
        fn_hook((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info);
    } else {
        hook_pos_ztgevc = 0;
		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_ztgevc(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info) __attribute__((alias("flexiblas_chain_ztgevc_")));
#else
void flexiblas_chain_ztgevc(void* side, void* howmny, void* select, void* n, void* s, void* lds, void* p, void* ldp, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* rwork, void* info){flexiblas_chain_ztgevc_((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) s, (void*) lds, (void*) p, (void*) ldp, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) rwork, (void*) info);}
#endif



