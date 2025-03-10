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


static TLS_STORE uint8_t hook_pos_ssyconvf = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way)
#else
void FC_GLOBAL(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way)
#endif
{
    void (*fn) (void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way);
    void (*fn_hook) (void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.ssyconvf.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->ssyconvf.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_way);
        return;
    } else {
        hook_pos_ssyconvf = 0;
        fn_hook((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_way);
        return;
    }
}
#ifndef __APPLE__
void FC_GLOBAL2(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way) __attribute__((alias(MTS(FC_GLOBAL(ssyconvf,SSYCONVF)))));
void FC_GLOBAL3(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way) __attribute__((alias(MTS(FC_GLOBAL(ssyconvf,SSYCONVF)))));
#else
void FC_GLOBAL2(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way){ FC_GLOBAL(ssyconvf,SSYCONVF)((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_way); }
void FC_GLOBAL3(ssyconvf,SSYCONVF)(char* uplo, char* way, blasint* n, float* a, blasint* lda, float* e, blasint* ipiv, blasint* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way){ FC_GLOBAL(ssyconvf,SSYCONVF)((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_way); }
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ssyconvf_(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way)
{
    void (*fn) (void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way);

    *(void **) & fn = current_backend->lapack.ssyconvf.f77_blas_function;

    fn((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_way);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssyconvf(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way) __attribute__((alias("flexiblas_real_ssyconvf_")));
#else
void flexiblas_real_ssyconvf(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way){flexiblas_real_ssyconvf_((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_way);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_ssyconvf_(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way)
{
    void (*fn) (void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way);
    void (*fn_hook) (void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way);

    *(void **) &fn      = current_backend->lapack.ssyconvf.f77_blas_function;

    hook_pos_ssyconvf ++;
    if( hook_pos_ssyconvf < __flexiblas_hooks->ssyconvf.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->ssyconvf.f77_hook_function[hook_pos_ssyconvf];
        fn_hook((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_way);
    } else {
        hook_pos_ssyconvf = 0;
        fn((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_way);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssyconvf(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way) __attribute__((alias("flexiblas_chain_ssyconvf_")));
#else
void flexiblas_chain_ssyconvf(void* uplo, void* way, void* n, void* a, void* lda, void* e, void* ipiv, void* info, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_way){flexiblas_chain_ssyconvf_((void*) uplo, (void*) way, (void*) n, (void*) a, (void*) lda, (void*) e, (void*) ipiv, (void*) info, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_way);}
#endif



