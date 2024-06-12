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


static TLS_STORE uint8_t hook_pos_zgbcon = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zgbcon,ZGBCON)(char* norm, blasint* n, blasint* kl, blasint* ku, double complex* ab, blasint* ldab, blasint* ipiv, double* anorm, double* rcond, double complex* work, double* rwork, blasint* info, flexiblas_fortran_charlen_t len_norm)
#else
void FC_GLOBAL(zgbcon,ZGBCON)(char* norm, blasint* n, blasint* kl, blasint* ku, double complex* ab, blasint* ldab, blasint* ipiv, double* anorm, double* rcond, double complex* work, double* rwork, blasint* info, flexiblas_fortran_charlen_t len_norm)
#endif
{
    void (*fn) (void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm);
    void (*fn_hook) (void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.zgbcon.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->zgbcon.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_norm);
        return;
    } else {
        hook_pos_zgbcon = 0;
        fn_hook((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_norm);
        return;
    }
}
#ifdef FLEXIBLAS_ABI_IBM
void zgbcon_(char* norm, blasint* n, blasint* kl, blasint* ku, double complex* ab, blasint* ldab, blasint* ipiv, double* anorm, double* rcond, double complex* work, double* rwork, blasint* info, flexiblas_fortran_charlen_t len_norm) __attribute__((alias(MTS(FC_GLOBAL(zgbcon,ZGBCON)))));
#else
#ifndef __APPLE__
void zgbcon(char* norm, blasint* n, blasint* kl, blasint* ku, double complex* ab, blasint* ldab, blasint* ipiv, double* anorm, double* rcond, double complex* work, double* rwork, blasint* info, flexiblas_fortran_charlen_t len_norm) __attribute__((alias(MTS(FC_GLOBAL(zgbcon,ZGBCON)))));
#else
void zgbcon(char* norm, blasint* n, blasint* kl, blasint* ku, double complex* ab, blasint* ldab, blasint* ipiv, double* anorm, double* rcond, double complex* work, double* rwork, blasint* info, flexiblas_fortran_charlen_t len_norm){ FC_GLOBAL(zgbcon,ZGBCON)((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, (flexiblas_fortran_charlen_t) len_norm); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zgbcon_(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm)
{
    void (*fn) (void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm);

    *(void **) & fn = current_backend->lapack.zgbcon.f77_blas_function;

    fn((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_norm);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgbcon(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm) __attribute__((alias("flexiblas_real_zgbcon_")));
#else
void flexiblas_real_zgbcon(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm){flexiblas_real_zgbcon_((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, (flexiblas_fortran_charlen_t) len_norm);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zgbcon_(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm)
{
    void (*fn) (void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm);
    void (*fn_hook) (void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm);

    *(void **) &fn      = current_backend->lapack.zgbcon.f77_blas_function;

    hook_pos_zgbcon ++;
    if( hook_pos_zgbcon < __flexiblas_hooks->zgbcon.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zgbcon.f77_hook_function[hook_pos_zgbcon];
        fn_hook((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_norm);
    } else {
        hook_pos_zgbcon = 0;
        fn((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, ( flexiblas_fortran_charlen_t ) len_norm);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgbcon(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm) __attribute__((alias("flexiblas_chain_zgbcon_")));
#else
void flexiblas_chain_zgbcon(void* norm, void* n, void* kl, void* ku, void* ab, void* ldab, void* ipiv, void* anorm, void* rcond, void* work, void* rwork, void* info, flexiblas_fortran_charlen_t len_norm){flexiblas_chain_zgbcon_((void*) norm, (void*) n, (void*) kl, (void*) ku, (void*) ab, (void*) ldab, (void*) ipiv, (void*) anorm, (void*) rcond, (void*) work, (void*) rwork, (void*) info, (flexiblas_fortran_charlen_t) len_norm);}
#endif



