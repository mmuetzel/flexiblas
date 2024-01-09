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



static TLS_STORE uint8_t hook_pos_slagtm = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slagtm,SLAGTM)(char* trans, blasint* n, blasint* nrhs, float* alpha, float* dl, float* d, float* du, float* x, blasint* ldx, float* beta, float* b, blasint* ldb)
#else
void FC_GLOBAL(slagtm,SLAGTM)(char* trans, blasint* n, blasint* nrhs, float* alpha, float* dl, float* d, float* du, float* x, blasint* ldx, float* beta, float* b, blasint* ldb)
#endif
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.slagtm.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->slagtm.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 
		return;
	} else {
		hook_pos_slagtm = 0;
		fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slagtm_(char* trans, blasint* n, blasint* nrhs, float* alpha, float* dl, float* d, float* du, float* x, blasint* ldx, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(slagtm,SLAGTM)))));
#else
#ifndef __APPLE__
void slagtm(char* trans, blasint* n, blasint* nrhs, float* alpha, float* dl, float* d, float* du, float* x, blasint* ldx, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(slagtm,SLAGTM)))));
#else
void slagtm(char* trans, blasint* n, blasint* nrhs, float* alpha, float* dl, float* d, float* du, float* x, blasint* ldx, float* beta, float* b, blasint* ldb){ FC_GLOBAL(slagtm,SLAGTM)((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slagtm_(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

	*(void **) & fn = current_backend->lapack.slagtm.f77_blas_function; 

		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_slagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_real_slagtm_")));
#else
void flexiblas_real_slagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb){flexiblas_real_slagtm_((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slagtm_(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

	*(void **) &fn      = current_backend->lapack.slagtm.f77_blas_function; 

    hook_pos_slagtm ++;
    if( hook_pos_slagtm < __flexiblas_hooks->slagtm.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slagtm.f77_hook_function[hook_pos_slagtm];
        fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);
    } else {
        hook_pos_slagtm = 0;
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_slagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_chain_slagtm_")));
#else
void flexiblas_chain_slagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb){flexiblas_chain_slagtm_((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);}
#endif



