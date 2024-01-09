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



static TLS_STORE uint8_t hook_pos_dlaqp2rk = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlaqp2rk,DLAQP2RK)(blasint* m, blasint* n, blasint* nrhs, blasint* ioffset, blasint* kmax, double* abstol, double* reltol, blasint* kp1, double* maxc2nrm, double* a, blasint* lda, blasint* k, double* maxc2nrmk, double* relmaxc2nrmk, blasint* jpiv, double* tau, double* vn1, double* vn2, double* work, blasint* info)
#else
void FC_GLOBAL(dlaqp2rk,DLAQP2RK)(blasint* m, blasint* n, blasint* nrhs, blasint* ioffset, blasint* kmax, double* abstol, double* reltol, blasint* kp1, double* maxc2nrm, double* a, blasint* lda, blasint* k, double* maxc2nrmk, double* relmaxc2nrmk, blasint* jpiv, double* tau, double* vn1, double* vn2, double* work, blasint* info)
#endif
{
	void (*fn) (void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info);
	void (*fn_hook) (void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dlaqp2rk.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dlaqp2rk.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info); 
		return;
	} else {
		hook_pos_dlaqp2rk = 0;
		fn_hook((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlaqp2rk_(blasint* m, blasint* n, blasint* nrhs, blasint* ioffset, blasint* kmax, double* abstol, double* reltol, blasint* kp1, double* maxc2nrm, double* a, blasint* lda, blasint* k, double* maxc2nrmk, double* relmaxc2nrmk, blasint* jpiv, double* tau, double* vn1, double* vn2, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaqp2rk,DLAQP2RK)))));
#else
#ifndef __APPLE__
void dlaqp2rk(blasint* m, blasint* n, blasint* nrhs, blasint* ioffset, blasint* kmax, double* abstol, double* reltol, blasint* kp1, double* maxc2nrm, double* a, blasint* lda, blasint* k, double* maxc2nrmk, double* relmaxc2nrmk, blasint* jpiv, double* tau, double* vn1, double* vn2, double* work, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaqp2rk,DLAQP2RK)))));
#else
void dlaqp2rk(blasint* m, blasint* n, blasint* nrhs, blasint* ioffset, blasint* kmax, double* abstol, double* reltol, blasint* kp1, double* maxc2nrm, double* a, blasint* lda, blasint* k, double* maxc2nrmk, double* relmaxc2nrmk, blasint* jpiv, double* tau, double* vn1, double* vn2, double* work, blasint* info){ FC_GLOBAL(dlaqp2rk,DLAQP2RK)((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlaqp2rk_(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info)
{
	void (*fn) (void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info);

	*(void **) & fn = current_backend->lapack.dlaqp2rk.f77_blas_function; 

		fn((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dlaqp2rk(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info) __attribute__((alias("flexiblas_real_dlaqp2rk_")));
#else
void flexiblas_real_dlaqp2rk(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info){flexiblas_real_dlaqp2rk_((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dlaqp2rk_(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info)
{
	void (*fn) (void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info);
	void (*fn_hook) (void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info);

	*(void **) &fn      = current_backend->lapack.dlaqp2rk.f77_blas_function; 

    hook_pos_dlaqp2rk ++;
    if( hook_pos_dlaqp2rk < __flexiblas_hooks->dlaqp2rk.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dlaqp2rk.f77_hook_function[hook_pos_dlaqp2rk];
        fn_hook((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info);
    } else {
        hook_pos_dlaqp2rk = 0;
		fn((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dlaqp2rk(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info) __attribute__((alias("flexiblas_chain_dlaqp2rk_")));
#else
void flexiblas_chain_dlaqp2rk(void* m, void* n, void* nrhs, void* ioffset, void* kmax, void* abstol, void* reltol, void* kp1, void* maxc2nrm, void* a, void* lda, void* k, void* maxc2nrmk, void* relmaxc2nrmk, void* jpiv, void* tau, void* vn1, void* vn2, void* work, void* info){flexiblas_chain_dlaqp2rk_((void*) m, (void*) n, (void*) nrhs, (void*) ioffset, (void*) kmax, (void*) abstol, (void*) reltol, (void*) kp1, (void*) maxc2nrm, (void*) a, (void*) lda, (void*) k, (void*) maxc2nrmk, (void*) relmaxc2nrmk, (void*) jpiv, (void*) tau, (void*) vn1, (void*) vn2, (void*) work, (void*) info);}
#endif



