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



static TLS_STORE uint8_t hook_pos_slarrd = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slarrd,SLARRD)(char* range, char* order, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wl, float* wu, blasint* iblock, blasint* indexw, float* work, blasint* iwork, blasint* info)
#else
void FC_GLOBAL(slarrd,SLARRD)(char* range, char* order, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wl, float* wu, blasint* iblock, blasint* indexw, float* work, blasint* iwork, blasint* info)
#endif
{
	void (*fn) (void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info);
	void (*fn_hook) (void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	*(void **) & fn = current_backend->lapack.slarrd.f77_blas_function; 
	*(void **) & fn_hook = __flexiblas_hooks->slarrd.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info); 
		return;
	} else {
		hook_pos_slarrd = 0;
		fn_hook((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slarrd_(char* range, char* order, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wl, float* wu, blasint* iblock, blasint* indexw, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarrd,SLARRD)))));
#else
#ifndef __APPLE__
void slarrd(char* range, char* order, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wl, float* wu, blasint* iblock, blasint* indexw, float* work, blasint* iwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(slarrd,SLARRD)))));
#else
void slarrd(char* range, char* order, blasint* n, float* vl, float* vu, blasint* il, blasint* iu, float* gers, float* reltol, float* d, float* e, float* e2, float* pivmin, blasint* nsplit, blasint* isplit, blasint* m, float* w, float* werr, float* wl, float* wu, blasint* iblock, blasint* indexw, float* work, blasint* iwork, blasint* info){ FC_GLOBAL(slarrd,SLARRD)((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info); }
#endif
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slarrd_(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info)
{
	void (*fn) (void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info);

	*(void **) & fn = current_backend->lapack.slarrd.f77_blas_function; 

		fn((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info); 

	return;
}
#ifndef __APPLE__
void flexiblas_real_slarrd(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info) __attribute__((alias("flexiblas_real_slarrd_")));
#else
void flexiblas_real_slarrd(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info){flexiblas_real_slarrd_((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info);}
#endif




/* Chainloader for Hooks */


void flexiblas_chain_slarrd_(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info)
{
	void (*fn) (void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info);
	void (*fn_hook) (void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info);

	*(void **) &fn      = current_backend->lapack.slarrd.f77_blas_function; 

    hook_pos_slarrd ++;
    if( hook_pos_slarrd < __flexiblas_hooks->slarrd.nhook) {
        *(void **) &fn_hook = __flexiblas_hooks->slarrd.f77_hook_function[hook_pos_slarrd];
        fn_hook((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info);
    } else {
        hook_pos_slarrd = 0;
		fn((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info); 
	}
	return;
}
#ifndef __APPLE__
void flexiblas_chain_slarrd(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info) __attribute__((alias("flexiblas_chain_slarrd_")));
#else
void flexiblas_chain_slarrd(void* range, void* order, void* n, void* vl, void* vu, void* il, void* iu, void* gers, void* reltol, void* d, void* e, void* e2, void* pivmin, void* nsplit, void* isplit, void* m, void* w, void* werr, void* wl, void* wu, void* iblock, void* indexw, void* work, void* iwork, void* info){flexiblas_chain_slarrd_((void*) range, (void*) order, (void*) n, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) gers, (void*) reltol, (void*) d, (void*) e, (void*) e2, (void*) pivmin, (void*) nsplit, (void*) isplit, (void*) m, (void*) w, (void*) werr, (void*) wl, (void*) wu, (void*) iblock, (void*) indexw, (void*) work, (void*) iwork, (void*) info);}
#endif



