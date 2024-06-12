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


static TLS_STORE uint8_t hook_pos_clanht = 0;
#ifdef FLEXIBLAS_ABI_INTEL
float FC_GLOBAL(clanht,CLANHT)(char* norm, blasint* n, float* d, float complex* e, flexiblas_fortran_charlen_t len_norm)
#else
float FC_GLOBAL(clanht,CLANHT)(char* norm, blasint* n, float* d, float complex* e, flexiblas_fortran_charlen_t len_norm)
#endif
{
    float (*fn) (void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm);
    float (*fn_hook) (void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm);
    float ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.clanht.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->clanht.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        ret = fn((void*) norm, (void*) n, (void*) d, (void*) e, ( flexiblas_fortran_charlen_t ) len_norm);
        return ret;
    } else {
        hook_pos_clanht = 0;
        ret = fn_hook((void*) norm, (void*) n, (void*) d, (void*) e, ( flexiblas_fortran_charlen_t ) len_norm);
        return ret;
    }
}
#ifdef FLEXIBLAS_ABI_IBM
float clanht_(char* norm, blasint* n, float* d, float complex* e, flexiblas_fortran_charlen_t len_norm) __attribute__((alias(MTS(FC_GLOBAL(clanht,CLANHT)))));
#else
#ifndef __APPLE__
float clanht(char* norm, blasint* n, float* d, float complex* e, flexiblas_fortran_charlen_t len_norm) __attribute__((alias(MTS(FC_GLOBAL(clanht,CLANHT)))));
#else
float clanht(char* norm, blasint* n, float* d, float complex* e, flexiblas_fortran_charlen_t len_norm){ return FC_GLOBAL(clanht,CLANHT)((void*) norm, (void*) n, (void*) d, (void*) e, (flexiblas_fortran_charlen_t) len_norm); }
#endif
#endif




/* Real Implementation for Hooks */


float flexiblas_real_clanht_(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm)
{
    float (*fn) (void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm);
    float ret;

    *(void **) & fn = current_backend->lapack.clanht.f77_blas_function;

    ret = fn((void*) norm, (void*) n, (void*) d, (void*) e, ( flexiblas_fortran_charlen_t ) len_norm);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_clanht(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm) __attribute__((alias("flexiblas_real_clanht_")));
#else
float flexiblas_real_clanht(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm){return flexiblas_real_clanht_((void*) norm, (void*) n, (void*) d, (void*) e, (flexiblas_fortran_charlen_t) len_norm);}
#endif




/* Chainloader for Hooks */


float flexiblas_chain_clanht_(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm)
{
    float (*fn) (void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm);
    float (*fn_hook) (void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm);
    float ret;

    *(void **) &fn      = current_backend->lapack.clanht.f77_blas_function;

    hook_pos_clanht ++;
    if( hook_pos_clanht < __flexiblas_hooks->clanht.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->clanht.f77_hook_function[hook_pos_clanht];
        ret = fn_hook((void*) norm, (void*) n, (void*) d, (void*) e, ( flexiblas_fortran_charlen_t )len_norm);
    } else {
        hook_pos_clanht = 0;
        ret = fn((void*) norm, (void*) n, (void*) d, (void*) e, ( flexiblas_fortran_charlen_t ) len_norm);
    }
    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_clanht(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm) __attribute__((alias("flexiblas_chain_clanht_")));
#else
float flexiblas_chain_clanht(void* norm, void* n, void* d, void* e, flexiblas_fortran_charlen_t len_norm){return flexiblas_chain_clanht_((void*) norm, (void*) n, (void*) d, (void*) e, (flexiblas_fortran_charlen_t) len_norm);}
#endif



