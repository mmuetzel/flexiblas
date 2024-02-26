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



static TLS_STORE uint8_t hook_pos_dbdsdc = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dbdsdc,DBDSDC)(char* uplo, char* compq, blasint* n, double* d, double* e, double* u, blasint* ldu, double* vt, blasint* ldvt, double* q, blasint* iq, double* work, blasint* iwork, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq)
#else
void FC_GLOBAL(dbdsdc,DBDSDC)(char* uplo, char* compq, blasint* n, double* d, double* e, double* u, blasint* ldu, double* vt, blasint* ldvt, double* q, blasint* iq, double* work, blasint* iwork, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq)
#endif
{
	void (*fn) (void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq);
	void (*fn_hook) (void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.dbdsdc.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->dbdsdc.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_compq); 
		return;
	} else {
		hook_pos_dbdsdc = 0;
		fn_hook((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_compq);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dbdsdc_(char* uplo, char* compq, blasint* n, double* d, double* e, double* u, blasint* ldu, double* vt, blasint* ldvt, double* q, blasint* iq, double* work, blasint* iwork, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq) __attribute__((alias(MTS(FC_GLOBAL(dbdsdc,DBDSDC)))));
#else
#ifndef __APPLE__
void dbdsdc(char* uplo, char* compq, blasint* n, double* d, double* e, double* u, blasint* ldu, double* vt, blasint* ldvt, double* q, blasint* iq, double* work, blasint* iwork, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq) __attribute__((alias(MTS(FC_GLOBAL(dbdsdc,DBDSDC)))));
#else
void dbdsdc(char* uplo, char* compq, blasint* n, double* d, double* e, double* u, blasint* ldu, double* vt, blasint* ldvt, double* q, blasint* iq, double* work, blasint* iwork, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq){ FC_GLOBAL(dbdsdc,DBDSDC)((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_compq); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dbdsdc_(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq)
{
	void (*fn) (void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq);

	*(void **) & fn = current_backend->lapack.dbdsdc.f77_blas_function; 

		fn((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_compq); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_dbdsdc(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq) __attribute__((alias("flexiblas_real_dbdsdc_")));
#else
void flexiblas_real_dbdsdc(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq){flexiblas_real_dbdsdc_((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_compq);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dbdsdc_(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq)
{
	void (*fn) (void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq);
	void (*fn_hook) (void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq);

	*(void **) &fn      = current_backend->lapack.dbdsdc.f77_blas_function; 

    hook_pos_dbdsdc ++;
    if( hook_pos_dbdsdc < __flexiblas_hooks->dbdsdc.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dbdsdc.f77_hook_function[hook_pos_dbdsdc];
        fn_hook((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_compq);
    } else {
        hook_pos_dbdsdc = 0;
		fn((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_compq); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_dbdsdc(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq) __attribute__((alias("flexiblas_chain_dbdsdc_")));
#else
void flexiblas_chain_dbdsdc(void* uplo, void* compq, void* n, void* d, void* e, void* u, void* ldu, void* vt, void* ldvt, void* q, void* iq, void* work, void* iwork, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_compq){flexiblas_chain_dbdsdc_((void*) uplo, (void*) compq, (void*) n, (void*) d, (void*) e, (void*) u, (void*) ldu, (void*) vt, (void*) ldvt, (void*) q, (void*) iq, (void*) work, (void*) iwork, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_compq);}
#endif



