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


static TLS_STORE uint8_t hook_pos_ctfsm = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ctfsm,CTFSM)(char* transr, char* side, char* uplo, char* trans, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
#else
void FC_GLOBAL(ctfsm,CTFSM)(char* transr, char* side, char* uplo, char* trans, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
#endif
{
    void (*fn) (void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.ctfsm.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->ctfsm.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_transr, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
        return;
    } else {
        hook_pos_ctfsm = 0;
        fn_hook((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_transr, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
        return;
    }
}
#ifdef FLEXIBLAS_ABI_IBM
void ctfsm_(char* transr, char* side, char* uplo, char* trans, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctfsm,CTFSM)))));
#else
#ifndef __APPLE__
void ctfsm(char* transr, char* side, char* uplo, char* trans, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctfsm,CTFSM)))));
#else
void ctfsm(char* transr, char* side, char* uplo, char* trans, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctfsm,CTFSM)((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_transr, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ctfsm_(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) & fn = current_backend->lapack.ctfsm.f77_blas_function;

    fn((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_transr, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctfsm(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctfsm_")));
#else
void flexiblas_real_ctfsm(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctfsm_((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_transr, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_ctfsm_(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn      = current_backend->lapack.ctfsm.f77_blas_function;

    hook_pos_ctfsm ++;
    if( hook_pos_ctfsm < __flexiblas_hooks->ctfsm.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->ctfsm.f77_hook_function[hook_pos_ctfsm];
        fn_hook((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_transr, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        hook_pos_ctfsm = 0;
        fn((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_transr, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctfsm(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctfsm_")));
#else
void flexiblas_chain_ctfsm(void* transr, void* side, void* uplo, void* trans, void* diag, void* m, void* n, void* alpha, void* a, void* b, void* ldb, flexiblas_fortran_charlen_t len_transr, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctfsm_((void*) transr, (void*) side, (void*) uplo, (void*) trans, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_transr, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif



