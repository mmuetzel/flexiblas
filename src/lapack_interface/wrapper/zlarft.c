//    SPDX-License-Identifier: LGPL-3.0-or-later
/*
    This file is part of FlexiBLAS, a BLAS/LAPACK interface wrapper library.
    Copyright (C) 2013-2025 Martin Koehler

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "flexiblas_config.h"

#include "flexiblas_fortran_mangle.h"

#include "flexiblas.h"

#include "flexiblas_fortran_char_len.h"


static TLS_STORE uint8_t hook_pos_zlarft = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
#else
void FC_GLOBAL(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
#endif
{
    void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);
    void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.zlarft.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->zlarft.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
        return;
    } else {
        hook_pos_zlarft = 0;
        fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
        return;
    }
}
#ifndef __APPLE__
void FC_GLOBAL2(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias(MTS(FC_GLOBAL(zlarft,ZLARFT)))));
void FC_GLOBAL3(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias(MTS(FC_GLOBAL(zlarft,ZLARFT)))));
#else
void FC_GLOBAL2(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){ FC_GLOBAL(zlarft,ZLARFT)((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev); }
void FC_GLOBAL3(zlarft,ZLARFT)(char* direct, char* storev, blasint* n, blasint* k, double complex* v, blasint* ldv, double complex* tau, double complex* t, blasint* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){ FC_GLOBAL(zlarft,ZLARFT)((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev); }
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zlarft_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
{
    void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

    *(void **) & fn = current_backend->lapack.zlarft.f77_blas_function;

    fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zlarft(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias("flexiblas_real_zlarft_")));
#else
void flexiblas_real_zlarft(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){flexiblas_real_zlarft_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_zlarft_(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev)
{
    void (*fn) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);
    void (*fn_hook) (void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev);

    *(void **) &fn      = current_backend->lapack.zlarft.f77_blas_function;

    hook_pos_zlarft ++;
    if( hook_pos_zlarft < __flexiblas_hooks->zlarft.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->zlarft.f77_hook_function[hook_pos_zlarft];
        fn_hook((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
    } else {
        hook_pos_zlarft = 0;
        fn((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, ( flexiblas_fortran_charlen_t ) len_direct, ( flexiblas_fortran_charlen_t ) len_storev);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_zlarft(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev) __attribute__((alias("flexiblas_chain_zlarft_")));
#else
void flexiblas_chain_zlarft(void* direct, void* storev, void* n, void* k, void* v, void* ldv, void* tau, void* t, void* ldt, flexiblas_fortran_charlen_t len_direct, flexiblas_fortran_charlen_t len_storev){flexiblas_chain_zlarft_((void*) direct, (void*) storev, (void*) n, (void*) k, (void*) v, (void*) ldv, (void*) tau, (void*) t, (void*) ldt, (flexiblas_fortran_charlen_t) len_direct, (flexiblas_fortran_charlen_t) len_storev);}
#endif



