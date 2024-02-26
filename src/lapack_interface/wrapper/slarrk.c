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



static TLS_STORE uint8_t hook_pos_slarrk = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slarrk,SLARRK)(blasint* n, blasint* iw, float* gl, float* gu, float* d, float* e2, float* pivmin, float* reltol, float* w, float* werr, blasint* info)
#else
void FC_GLOBAL(slarrk,SLARRK)(blasint* n, blasint* iw, float* gl, float* gu, float* d, float* e2, float* pivmin, float* reltol, float* w, float* werr, blasint* info)
#endif
{
	void (*fn) (void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info);
	void (*fn_hook) (void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.slarrk.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->slarrk.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info); 
		return;
	} else {
		hook_pos_slarrk = 0;
		fn_hook((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slarrk_(blasint* n, blasint* iw, float* gl, float* gu, float* d, float* e2, float* pivmin, float* reltol, float* w, float* werr, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarrk,SLARRK)))));
#else
#ifndef __APPLE__
void slarrk(blasint* n, blasint* iw, float* gl, float* gu, float* d, float* e2, float* pivmin, float* reltol, float* w, float* werr, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarrk,SLARRK)))));
#else
void slarrk(blasint* n, blasint* iw, float* gl, float* gu, float* d, float* e2, float* pivmin, float* reltol, float* w, float* werr, blasint* info){ FC_GLOBAL(slarrk,SLARRK)((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slarrk_(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info)
{
	void (*fn) (void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info);

	*(void **) & fn = current_backend->lapack.slarrk.f77_blas_function; 

		fn((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_slarrk(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info) __attribute__((alias("flexiblas_real_slarrk_")));
#else
void flexiblas_real_slarrk(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info){flexiblas_real_slarrk_((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slarrk_(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info)
{
	void (*fn) (void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info);
	void (*fn_hook) (void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info);

	*(void **) &fn      = current_backend->lapack.slarrk.f77_blas_function; 

    hook_pos_slarrk ++;
    if( hook_pos_slarrk < __flexiblas_hooks->slarrk.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slarrk.f77_hook_function[hook_pos_slarrk];
        fn_hook((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info);
    } else {
        hook_pos_slarrk = 0;
		fn((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_slarrk(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info) __attribute__((alias("flexiblas_chain_slarrk_")));
#else
void flexiblas_chain_slarrk(void* n, void* iw, void* gl, void* gu, void* d, void* e2, void* pivmin, void* reltol, void* w, void* werr, void* info){flexiblas_chain_slarrk_((void*) n, (void*) iw, (void*) gl, (void*) gu, (void*) d, (void*) e2, (void*) pivmin, (void*) reltol, (void*) w, (void*) werr, (void*) info);}
#endif



