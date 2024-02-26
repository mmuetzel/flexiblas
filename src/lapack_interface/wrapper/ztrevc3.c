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



static TLS_STORE uint8_t hook_pos_ztrevc3 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ztrevc3,ZTREVC3)(char* side, char* howmny, blasint* select, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny)
#else
void FC_GLOBAL(ztrevc3,ZTREVC3)(char* side, char* howmny, blasint* select, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny)
#endif
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny);
	void (*fn_hook) (void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.ztrevc3.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->ztrevc3.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_howmny); 
		return;
	} else {
		hook_pos_ztrevc3 = 0;
		fn_hook((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_howmny);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ztrevc3_(char* side, char* howmny, blasint* select, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny) __attribute__((alias(MTS(FC_GLOBAL(ztrevc3,ZTREVC3)))));
#else
#ifndef __APPLE__
void ztrevc3(char* side, char* howmny, blasint* select, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny) __attribute__((alias(MTS(FC_GLOBAL(ztrevc3,ZTREVC3)))));
#else
void ztrevc3(char* side, char* howmny, blasint* select, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny){ FC_GLOBAL(ztrevc3,ZTREVC3)((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_howmny); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ztrevc3_(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny)
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny);

	*(void **) & fn = current_backend->lapack.ztrevc3.f77_blas_function; 

		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_howmny); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_ztrevc3(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny) __attribute__((alias("flexiblas_real_ztrevc3_")));
#else
void flexiblas_real_ztrevc3(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny){flexiblas_real_ztrevc3_((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_howmny);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_ztrevc3_(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny)
{
	void (*fn) (void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny);
	void (*fn_hook) (void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny);

	*(void **) &fn      = current_backend->lapack.ztrevc3.f77_blas_function; 

    hook_pos_ztrevc3 ++;
    if( hook_pos_ztrevc3 < __flexiblas_hooks->ztrevc3.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->ztrevc3.f77_hook_function[hook_pos_ztrevc3];
        fn_hook((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_howmny);
    } else {
        hook_pos_ztrevc3 = 0;
		fn((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_howmny); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_ztrevc3(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny) __attribute__((alias("flexiblas_chain_ztrevc3_")));
#else
void flexiblas_chain_ztrevc3(void* side, void* howmny, void* select, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_howmny){flexiblas_chain_ztrevc3_((void*) side, (void*) howmny, (void*) select, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_howmny);}
#endif



