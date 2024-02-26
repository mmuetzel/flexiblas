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



static TLS_STORE uint8_t hook_pos_zlascl = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zlascl,ZLASCL)(char* type_bn, blasint* kl, blasint* ku, double* cfrom, double* cto, blasint* m, blasint* n, double complex* a, blasint* lda, blasint* info, flexiblas_fortran_charlen_t len_type_bn)
#else
void FC_GLOBAL(zlascl,ZLASCL)(char* type_bn, blasint* kl, blasint* ku, double* cfrom, double* cto, blasint* m, blasint* n, double complex* a, blasint* lda, blasint* info, flexiblas_fortran_charlen_t len_type_bn)
#endif
{
	void (*fn) (void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn);
	void (*fn_hook) (void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.zlascl.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->zlascl.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, ( flexiblas_fortran_charlen_t ) len_type_bn); 
		return;
	} else {
		hook_pos_zlascl = 0;
		fn_hook((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, ( flexiblas_fortran_charlen_t ) len_type_bn);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zlascl_(char* type_bn, blasint* kl, blasint* ku, double* cfrom, double* cto, blasint* m, blasint* n, double complex* a, blasint* lda, blasint* info, flexiblas_fortran_charlen_t len_type_bn) __attribute__((alias(MTS(FC_GLOBAL(zlascl,ZLASCL)))));
#else
#ifndef __APPLE__
void zlascl(char* type_bn, blasint* kl, blasint* ku, double* cfrom, double* cto, blasint* m, blasint* n, double complex* a, blasint* lda, blasint* info, flexiblas_fortran_charlen_t len_type_bn) __attribute__((alias(MTS(FC_GLOBAL(zlascl,ZLASCL)))));
#else
void zlascl(char* type_bn, blasint* kl, blasint* ku, double* cfrom, double* cto, blasint* m, blasint* n, double complex* a, blasint* lda, blasint* info, flexiblas_fortran_charlen_t len_type_bn){ FC_GLOBAL(zlascl,ZLASCL)((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, (flexiblas_fortran_charlen_t) len_type_bn); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zlascl_(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn)
{
	void (*fn) (void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn);

	*(void **) & fn = current_backend->lapack.zlascl.f77_blas_function; 

		fn((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, ( flexiblas_fortran_charlen_t ) len_type_bn); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_zlascl(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn) __attribute__((alias("flexiblas_real_zlascl_")));
#else
void flexiblas_real_zlascl(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn){flexiblas_real_zlascl_((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, (flexiblas_fortran_charlen_t) len_type_bn);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zlascl_(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn)
{
	void (*fn) (void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn);
	void (*fn_hook) (void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn);

	*(void **) &fn      = current_backend->lapack.zlascl.f77_blas_function; 

    hook_pos_zlascl ++;
    if( hook_pos_zlascl < __flexiblas_hooks->zlascl.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zlascl.f77_hook_function[hook_pos_zlascl];
        fn_hook((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, ( flexiblas_fortran_charlen_t ) len_type_bn);
    } else {
        hook_pos_zlascl = 0;
		fn((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, ( flexiblas_fortran_charlen_t ) len_type_bn); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_zlascl(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn) __attribute__((alias("flexiblas_chain_zlascl_")));
#else
void flexiblas_chain_zlascl(void* type_bn, void* kl, void* ku, void* cfrom, void* cto, void* m, void* n, void* a, void* lda, void* info, flexiblas_fortran_charlen_t len_type_bn){flexiblas_chain_zlascl_((void*) type_bn, (void*) kl, (void*) ku, (void*) cfrom, (void*) cto, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) info, (flexiblas_fortran_charlen_t) len_type_bn);}
#endif



