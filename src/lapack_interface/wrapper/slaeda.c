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


static TLS_STORE uint8_t hook_pos_slaeda = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info)
#else
void FC_GLOBAL(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info)
#endif
{
    void (*fn) (void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info);
    void (*fn_hook) (void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) & fn = current_backend->lapack.slaeda.f77_blas_function;
    *(void **) & fn_hook = __flexiblas_hooks->slaeda.f77_hook_function[0];
    if ( fn_hook == NULL ) {
        fn((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);
        return;
    } else {
        hook_pos_slaeda = 0;
        fn_hook((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);
        return;
    }
}
#ifndef __APPLE__
void FC_GLOBAL2(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slaeda,SLAEDA)))));
void FC_GLOBAL3(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slaeda,SLAEDA)))));
#else
void FC_GLOBAL2(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info){ FC_GLOBAL(slaeda,SLAEDA)((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info); }
void FC_GLOBAL3(slaeda,SLAEDA)(blasint* n, blasint* tlvls, blasint* curlvl, blasint* curpbm, blasint* prmptr, blasint* perm, blasint* givptr, blasint* givcol, float* givnum, float* q, blasint* qptr, float* z, float* ztemp, blasint* info){ FC_GLOBAL(slaeda,SLAEDA)((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info); }
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slaeda_(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info)
{
    void (*fn) (void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info);

    *(void **) & fn = current_backend->lapack.slaeda.f77_blas_function;

    fn((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);

    return;
}
#ifndef __APPLE__
void flexiblas_real_slaeda(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info) __attribute__((alias("flexiblas_real_slaeda_")));
#else
void flexiblas_real_slaeda(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info){flexiblas_real_slaeda_((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slaeda_(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info)
{
    void (*fn) (void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info);
    void (*fn_hook) (void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info);

    *(void **) &fn      = current_backend->lapack.slaeda.f77_blas_function;

    hook_pos_slaeda ++;
    if( hook_pos_slaeda < __flexiblas_hooks->slaeda.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slaeda.f77_hook_function[hook_pos_slaeda];
        fn_hook((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);
    } else {
        hook_pos_slaeda = 0;
        fn((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);
    }
    return;
}
#ifndef __APPLE__
void flexiblas_chain_slaeda(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info) __attribute__((alias("flexiblas_chain_slaeda_")));
#else
void flexiblas_chain_slaeda(void* n, void* tlvls, void* curlvl, void* curpbm, void* prmptr, void* perm, void* givptr, void* givcol, void* givnum, void* q, void* qptr, void* z, void* ztemp, void* info){flexiblas_chain_slaeda_((void*) n, (void*) tlvls, (void*) curlvl, (void*) curpbm, (void*) prmptr, (void*) perm, (void*) givptr, (void*) givcol, (void*) givnum, (void*) q, (void*) qptr, (void*) z, (void*) ztemp, (void*) info);}
#endif



