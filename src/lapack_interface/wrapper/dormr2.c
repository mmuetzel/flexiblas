//  SPDX-License-Identifier: LGPL-3.0-or-later
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

#include "flexiblas_fortran_char_len.h"


static TLS_STORE uint8_t hook_pos_dormr2 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dormr2,DORMR2)(char* side, char* trans, blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* c, blasint* ldc, double* work, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans)
#else
void FC_GLOBAL(dormr2,DORMR2)(char* side, char* trans, blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* c, blasint* ldc, double* work, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans)
#endif
{
    void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.dormr2.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->dormr2.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_trans);
        return;
    } else {
        hook_pos_dormr2 = 0;
        fn_hook((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_trans);
        return;
    }
}
#ifdef FLEXIBLAS_ABI_IBM
void dormr2_(char* side, char* trans, blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* c, blasint* ldc, double* work, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dormr2,DORMR2)))));
#else
#ifndef __APPLE__
void dormr2(char* side, char* trans, blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* c, blasint* ldc, double* work, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dormr2,DORMR2)))));
#else
void dormr2(char* side, char* trans, blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* c, blasint* ldc, double* work, blasint* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dormr2,DORMR2)((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dormr2_(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans);

    *(void **) & fn = current_backend->lapack.dormr2.f77_blas_function;

    fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dormr2(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dormr2_")));
#else
void flexiblas_real_dormr2(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dormr2_((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_trans);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_dormr2_(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn      = current_backend->lapack.dormr2.f77_blas_function;

    hook_pos_dormr2 ++;
    if( hook_pos_dormr2 < __flexiblas_hooks->dormr2.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->dormr2.f77_hook_function[hook_pos_dormr2];
        fn_hook((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        hook_pos_dormr2 = 0;
        fn((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_dormr2(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dormr2_")));
#else
void flexiblas_chain_dormr2(void* side, void* trans, void* m, void* n, void* k, void* a, void* lda, void* tau, void* c, void* ldc, void* work, void* info, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dormr2_((void*) side, (void*) trans, (void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) c, (void*) ldc, (void*) work, (void*) info, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_trans);}
#endif



