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



static TLS_STORE uint8_t hook_pos_slanv2 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slanv2,SLANV2)(float* a, float* b, float* c, float* d, float* rt1r, float* rt1i, float* rt2r, float* rt2i, float* cs, float* sn)
#else
void FC_GLOBAL(slanv2,SLANV2)(float* a, float* b, float* c, float* d, float* rt1r, float* rt1i, float* rt2r, float* rt2i, float* cs, float* sn)
#endif
{
	void (*fn) (void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn);
	void (*fn_hook) (void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.slanv2.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->slanv2.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn); 
		return;
	} else {
		hook_pos_slanv2 = 0;
		fn_hook((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slanv2_(float* a, float* b, float* c, float* d, float* rt1r, float* rt1i, float* rt2r, float* rt2i, float* cs, float* sn) __attribute__((alias(MTS(FC_GLOBAL(slanv2,SLANV2)))));
#else
#ifndef __APPLE__
void slanv2(float* a, float* b, float* c, float* d, float* rt1r, float* rt1i, float* rt2r, float* rt2i, float* cs, float* sn) __attribute__((alias(MTS(FC_GLOBAL(slanv2,SLANV2)))));
#else
void slanv2(float* a, float* b, float* c, float* d, float* rt1r, float* rt1i, float* rt2r, float* rt2i, float* cs, float* sn){ FC_GLOBAL(slanv2,SLANV2)((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slanv2_(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn)
{
	void (*fn) (void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn);

	*(void **) & fn = current_backend->lapack.slanv2.f77_blas_function; 

		fn((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_slanv2(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn) __attribute__((alias("flexiblas_real_slanv2_")));
#else
void flexiblas_real_slanv2(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn){flexiblas_real_slanv2_((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slanv2_(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn)
{
	void (*fn) (void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn);
	void (*fn_hook) (void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn);

	*(void **) &fn      = current_backend->lapack.slanv2.f77_blas_function; 

    hook_pos_slanv2 ++;
    if( hook_pos_slanv2 < __flexiblas_hooks->slanv2.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slanv2.f77_hook_function[hook_pos_slanv2];
        fn_hook((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn);
    } else {
        hook_pos_slanv2 = 0;
		fn((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_slanv2(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn) __attribute__((alias("flexiblas_chain_slanv2_")));
#else
void flexiblas_chain_slanv2(void* a, void* b, void* c, void* d, void* rt1r, void* rt1i, void* rt2r, void* rt2i, void* cs, void* sn){flexiblas_chain_slanv2_((void*) a, (void*) b, (void*) c, (void*) d, (void*) rt1r, (void*) rt1i, (void*) rt2r, (void*) rt2i, (void*) cs, (void*) sn);}
#endif



