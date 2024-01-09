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



static TLS_STORE uint8_t hook_pos_chla_transtype = 0;
#ifdef FLEXIBLAS_ABI_INTEL
char FC_GLOBAL_(chla_transtype,CHLA_TRANSTYPE)(blasint* trans)
#else
char FC_GLOBAL_(chla_transtype,CHLA_TRANSTYPE)(blasint* trans)
#endif
{
	char (*fn) (void* trans);
	char (*fn_hook) (void* trans);
	char ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.chla_transtype.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->chla_transtype.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) trans); 
		return ret; 
	} else {
		hook_pos_chla_transtype = 0;
		ret=fn_hook((void*) trans);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
char chla_transtype_(blasint* trans) __attribute__((alias(MTS(FC_GLOBAL_(chla_transtype,CHLA_TRANSTYPE)))));
#else
#ifndef __APPLE__
char chla_transtype(blasint* trans) __attribute__((alias(MTS(FC_GLOBAL_(chla_transtype,CHLA_TRANSTYPE)))));
#else
char chla_transtype(blasint* trans){ return FC_GLOBAL_(chla_transtype,CHLA_TRANSTYPE)((void*) trans); }
#endif
#endif




/* Real Implementation for Hooks */


char flexiblas_real_chla_transtype_(void* trans)
{
	char (*fn) (void* trans);
	char ret;

	*(void **) & fn = current_backend->lapack.chla_transtype.f77_blas_function; 

		ret = fn((void*) trans); 

	return ret ;
}
#ifndef __APPLE__
char flexiblas_real_chla_transtype(void* trans) __attribute__((alias("flexiblas_real_chla_transtype_")));
#else
char flexiblas_real_chla_transtype(void* trans){return flexiblas_real_chla_transtype_((void*) trans);}
#endif




/* Chainloader for Hooks */


char flexiblas_chain_chla_transtype_(void* trans)
{
	char (*fn) (void* trans);
	char (*fn_hook) (void* trans);
	char ret;

	*(void **) &fn      = current_backend->lapack.chla_transtype.f77_blas_function; 

    hook_pos_chla_transtype ++;
    if( hook_pos_chla_transtype < __flexiblas_hooks->chla_transtype.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->chla_transtype.f77_hook_function[hook_pos_chla_transtype];
        ret = fn_hook((void*) trans);
    } else {
        hook_pos_chla_transtype = 0;
		ret = fn((void*) trans); 
	}
	return ret ;
}
#ifndef __APPLE__
char flexiblas_chain_chla_transtype(void* trans) __attribute__((alias("flexiblas_chain_chla_transtype_")));
#else
char flexiblas_chain_chla_transtype(void* trans){return flexiblas_chain_chla_transtype_((void*) trans);}
#endif



