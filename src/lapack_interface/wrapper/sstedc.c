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



static TLS_STORE uint8_t hook_pos_sstedc = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(sstedc,SSTEDC)(char* compz, blasint* n, float* d, float* e, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info, flexiblas_fortran_charlen_t len_compz)
#else
void FC_GLOBAL(sstedc,SSTEDC)(char* compz, blasint* n, float* d, float* e, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info, flexiblas_fortran_charlen_t len_compz)
#endif
{
	void (*fn) (void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz);
	void (*fn_hook) (void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.sstedc.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->sstedc.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_compz); 
		return;
	} else {
		hook_pos_sstedc = 0;
		fn_hook((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_compz);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void sstedc_(char* compz, blasint* n, float* d, float* e, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info, flexiblas_fortran_charlen_t len_compz) __attribute__((alias(MTS(FC_GLOBAL(sstedc,SSTEDC)))));
#else
#ifndef __APPLE__
void sstedc(char* compz, blasint* n, float* d, float* e, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info, flexiblas_fortran_charlen_t len_compz) __attribute__((alias(MTS(FC_GLOBAL(sstedc,SSTEDC)))));
#else
void sstedc(char* compz, blasint* n, float* d, float* e, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info, flexiblas_fortran_charlen_t len_compz){ FC_GLOBAL(sstedc,SSTEDC)((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, (flexiblas_fortran_charlen_t) len_compz); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_sstedc_(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz)
{
	void (*fn) (void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz);

	*(void **) & fn = current_backend->lapack.sstedc.f77_blas_function; 

		fn((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_compz); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_sstedc(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz) __attribute__((alias("flexiblas_real_sstedc_")));
#else
void flexiblas_real_sstedc(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz){flexiblas_real_sstedc_((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, (flexiblas_fortran_charlen_t) len_compz);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_sstedc_(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz)
{
	void (*fn) (void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz);
	void (*fn_hook) (void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz);

	*(void **) &fn      = current_backend->lapack.sstedc.f77_blas_function; 

    hook_pos_sstedc ++;
    if( hook_pos_sstedc < __flexiblas_hooks->sstedc.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->sstedc.f77_hook_function[hook_pos_sstedc];
        fn_hook((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_compz);
    } else {
        hook_pos_sstedc = 0;
		fn((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_compz); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_sstedc(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz) __attribute__((alias("flexiblas_chain_sstedc_")));
#else
void flexiblas_chain_sstedc(void* compz, void* n, void* d, void* e, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info, flexiblas_fortran_charlen_t len_compz){flexiblas_chain_sstedc_((void*) compz, (void*) n, (void*) d, (void*) e, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info, (flexiblas_fortran_charlen_t) len_compz);}
#endif



