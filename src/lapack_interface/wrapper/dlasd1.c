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



static TLS_STORE uint8_t hook_pos_dlasd1 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlasd1,DLASD1)(blasint* nl, blasint* nr, blasint* sqre, double* d, double* alpha, double* beta, double* u, blasint* ldu, double* vt, blasint* ldvt, blasint* idxq, blasint* iwork, double* work, blasint* info)
#else
void FC_GLOBAL(dlasd1,DLASD1)(blasint* nl, blasint* nr, blasint* sqre, double* d, double* alpha, double* beta, double* u, blasint* ldu, double* vt, blasint* ldvt, blasint* idxq, blasint* iwork, double* work, blasint* info)
#endif
{
	void (*fn) (void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info);
	void (*fn_hook) (void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dlasd1.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dlasd1.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info); 
		return;
	} else {
		hook_pos_dlasd1 = 0;
		fn_hook((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlasd1_(blasint* nl, blasint* nr, blasint* sqre, double* d, double* alpha, double* beta, double* u, blasint* ldu, double* vt, blasint* ldvt, blasint* idxq, blasint* iwork, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlasd1,DLASD1)))));
#else
#ifndef __APPLE__
void dlasd1(blasint* nl, blasint* nr, blasint* sqre, double* d, double* alpha, double* beta, double* u, blasint* ldu, double* vt, blasint* ldvt, blasint* idxq, blasint* iwork, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlasd1,DLASD1)))));
#else
void dlasd1(blasint* nl, blasint* nr, blasint* sqre, double* d, double* alpha, double* beta, double* u, blasint* ldu, double* vt, blasint* ldvt, blasint* idxq, blasint* iwork, double* work, blasint* info){ FC_GLOBAL(dlasd1,DLASD1)((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlasd1_(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info)
{
	void (*fn) (void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info);

	*(void **) & fn = current_backend->lapack.dlasd1.f77_blas_function; 

		fn((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dlasd1(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info) __attribute__((alias("flexiblas_real_dlasd1_")));
#else
void flexiblas_real_dlasd1(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info){flexiblas_real_dlasd1_((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlasd1_(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info)
{
	void (*fn) (void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info);
	void (*fn_hook) (void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info);

	*(void **) &fn      = current_backend->lapack.dlasd1.f77_blas_function; 

    hook_pos_dlasd1 ++;
    if( hook_pos_dlasd1 < __flexiblas_hooks->dlasd1.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlasd1.f77_hook_function[hook_pos_dlasd1];
        fn_hook((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info);
    } else {
        hook_pos_dlasd1 = 0;
		fn((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dlasd1(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info) __attribute__((alias("flexiblas_chain_dlasd1_")));
#else
void flexiblas_chain_dlasd1(void* nl, void* nr, void* sqre, void* d, void* alpha, void* beta, void* u, void* ldu, void* vt, void* ldvt, void* idxq, void* iwork, void* work, void* info){flexiblas_chain_dlasd1_((void*) nl, (void*) nr, (void*) sqre, (void*) d, (void*) alpha, (void*) beta, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) idxq, (void*) iwork, (void*) work, (void*) info);}
#endif



