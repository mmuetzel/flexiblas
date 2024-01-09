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



static TLS_STORE uint8_t hook_pos_zlanht = 0;
#ifdef FLEXIBLAS_ABI_INTEL
double FC_GLOBAL(zlanht,ZLANHT)(char* norm, blasint* n, double* d, double complex* e)
#else
double FC_GLOBAL(zlanht,ZLANHT)(char* norm, blasint* n, double* d, double complex* e)
#endif
{
	double (*fn) (void* norm, void* n, void* d, void* e);
	double (*fn_hook) (void* norm, void* n, void* d, void* e);
	double ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zlanht.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zlanht.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 
		return ret; 
	} else {
		hook_pos_zlanht = 0;
		ret=fn_hook((void*) norm, (void*) n, (void*) d, (void*) e);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
double zlanht_(char* norm, blasint* n, double* d, double complex* e) __attribute__((alias(MTS(FC_GLOBAL(zlanht,ZLANHT)))));
#else
#ifndef __APPLE__
double zlanht(char* norm, blasint* n, double* d, double complex* e) __attribute__((alias(MTS(FC_GLOBAL(zlanht,ZLANHT)))));
#else
double zlanht(char* norm, blasint* n, double* d, double complex* e){ return FC_GLOBAL(zlanht,ZLANHT)((void*) norm, (void*) n, (void*) d, (void*) e); }
#endif
#endif




/* Real Implementation for Hooks */


double flexiblas_real_zlanht_(void* norm, void* n, void* d, void* e)
{
	double (*fn) (void* norm, void* n, void* d, void* e);
	double ret;

	*(void **) & fn = current_backend->lapack.zlanht.f77_blas_function; 

		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 

	return ret ;
}
#ifndef __APPLE__
double flexiblas_real_zlanht(void* norm, void* n, void* d, void* e) __attribute__((alias("flexiblas_real_zlanht_")));
#else
double flexiblas_real_zlanht(void* norm, void* n, void* d, void* e){return flexiblas_real_zlanht_((void*) norm, (void*) n, (void*) d, (void*) e);}
#endif




/* Chainloader for Hooks */


double flexiblas_chain_zlanht_(void* norm, void* n, void* d, void* e)
{
	double (*fn) (void* norm, void* n, void* d, void* e);
	double (*fn_hook) (void* norm, void* n, void* d, void* e);
	double ret;

	*(void **) &fn      = current_backend->lapack.zlanht.f77_blas_function; 

    hook_pos_zlanht ++;
    if( hook_pos_zlanht < __flexiblas_hooks->zlanht.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zlanht.f77_hook_function[hook_pos_zlanht];
        ret = fn_hook((void*) norm, (void*) n, (void*) d, (void*) e);
    } else {
        hook_pos_zlanht = 0;
		ret = fn((void*) norm, (void*) n, (void*) d, (void*) e); 
	}
	return ret ;
}
#ifndef __APPLE__
double flexiblas_chain_zlanht(void* norm, void* n, void* d, void* e) __attribute__((alias("flexiblas_chain_zlanht_")));
#else
double flexiblas_chain_zlanht(void* norm, void* n, void* d, void* e){return flexiblas_chain_zlanht_((void*) norm, (void*) n, (void*) d, (void*) e);}
#endif



