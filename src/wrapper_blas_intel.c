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

#include "flexiblas_fortran_mangle.h"

#include "flexiblas.h"
#include "flexiblas_fortran_char_len.h"

HIDDEN int __flexiblas_load_fblas ( flexiblas_backend_t *handle, int *loaded, int *failed )  {
    int _ifailed = *failed;
    LOAD_FBLAS(handle,blas.caxpy,caxpy);
    LOAD_FBLAS(handle,blas.ccopy,ccopy);
    LOAD_FBLAS(handle,blas.cdotc,cdotc);
    LOAD_FBLAS(handle,blas.cdotu,cdotu);
    LOAD_FBLAS(handle,blas.cgbmv,cgbmv);
    LOAD_FBLAS(handle,blas.cgemm,cgemm);
    LOAD_FBLAS2(handle,blas.cgemmtr,blas.cgemmt,cgemmtr,cgemmt);
    LOAD_FBLAS(handle,blas.cgemv,cgemv);
    LOAD_FBLAS(handle,blas.cgerc,cgerc);
    LOAD_FBLAS(handle,blas.cgeru,cgeru);
    LOAD_FBLAS(handle,blas.chbmv,chbmv);
    LOAD_FBLAS(handle,blas.chemm,chemm);
    LOAD_FBLAS(handle,blas.chemv,chemv);
    LOAD_FBLAS(handle,blas.cher,cher);
    LOAD_FBLAS(handle,blas.cher2,cher2);
    LOAD_FBLAS(handle,blas.cher2k,cher2k);
    LOAD_FBLAS(handle,blas.cherk,cherk);
    LOAD_FBLAS(handle,blas.chpmv,chpmv);
    LOAD_FBLAS(handle,blas.chpr,chpr);
    LOAD_FBLAS(handle,blas.chpr2,chpr2);
    LOAD_FBLAS(handle,blas.crotg,crotg);
    LOAD_FBLAS(handle,blas.cscal,cscal);
    LOAD_FBLAS(handle,blas.csrot,csrot);
    LOAD_FBLAS(handle,blas.csscal,csscal);
    LOAD_FBLAS(handle,blas.cswap,cswap);
    LOAD_FBLAS(handle,blas.csymm,csymm);
    LOAD_FBLAS(handle,blas.csyr2k,csyr2k);
    LOAD_FBLAS(handle,blas.csyrk,csyrk);
    LOAD_FBLAS(handle,blas.ctbmv,ctbmv);
    LOAD_FBLAS(handle,blas.ctbsv,ctbsv);
    LOAD_FBLAS(handle,blas.ctpmv,ctpmv);
    LOAD_FBLAS(handle,blas.ctpsv,ctpsv);
    LOAD_FBLAS(handle,blas.ctrmm,ctrmm);
    LOAD_FBLAS(handle,blas.ctrmv,ctrmv);
    LOAD_FBLAS(handle,blas.ctrsm,ctrsm);
    LOAD_FBLAS(handle,blas.ctrsv,ctrsv);
    LOAD_FBLAS(handle,blas.dasum,dasum);
    LOAD_FBLAS(handle,blas.daxpy,daxpy);
    LOAD_FBLAS(handle,blas.dcopy,dcopy);
    LOAD_FBLAS(handle,blas.ddot,ddot);
    LOAD_FBLAS(handle,blas.dgbmv,dgbmv);
    LOAD_FBLAS(handle,blas.dgemm,dgemm);
    LOAD_FBLAS2(handle,blas.dgemmtr,blas.dgemmt,dgemmtr,dgemmt);
    LOAD_FBLAS(handle,blas.dgemv,dgemv);
    LOAD_FBLAS(handle,blas.dger,dger);
    LOAD_FBLAS(handle,blas.dnrm2,dnrm2);
    LOAD_FBLAS(handle,blas.drot,drot);
    LOAD_FBLAS(handle,blas.drotg,drotg);
    LOAD_FBLAS(handle,blas.drotm,drotm);
    LOAD_FBLAS(handle,blas.drotmg,drotmg);
    LOAD_FBLAS(handle,blas.dsbmv,dsbmv);
    LOAD_FBLAS(handle,blas.dscal,dscal);
    LOAD_FBLAS(handle,blas.dsdot,dsdot);
    LOAD_FBLAS(handle,blas.dspmv,dspmv);
    LOAD_FBLAS(handle,blas.dspr,dspr);
    LOAD_FBLAS(handle,blas.dspr2,dspr2);
    LOAD_FBLAS(handle,blas.dswap,dswap);
    LOAD_FBLAS(handle,blas.dsymm,dsymm);
    LOAD_FBLAS(handle,blas.dsymv,dsymv);
    LOAD_FBLAS(handle,blas.dsyr,dsyr);
    LOAD_FBLAS(handle,blas.dsyr2,dsyr2);
    LOAD_FBLAS(handle,blas.dsyr2k,dsyr2k);
    LOAD_FBLAS(handle,blas.dsyrk,dsyrk);
    LOAD_FBLAS(handle,blas.dtbmv,dtbmv);
    LOAD_FBLAS(handle,blas.dtbsv,dtbsv);
    LOAD_FBLAS(handle,blas.dtpmv,dtpmv);
    LOAD_FBLAS(handle,blas.dtpsv,dtpsv);
    LOAD_FBLAS(handle,blas.dtrmm,dtrmm);
    LOAD_FBLAS(handle,blas.dtrmv,dtrmv);
    LOAD_FBLAS(handle,blas.dtrsm,dtrsm);
    LOAD_FBLAS(handle,blas.dtrsv,dtrsv);
    LOAD_FBLAS(handle,blas.dzasum,dzasum);
    LOAD_FBLAS(handle,blas.dznrm2,dznrm2);
    LOAD_FBLAS(handle,blas.icamax,icamax);
    LOAD_FBLAS(handle,blas.idamax,idamax);
    LOAD_FBLAS(handle,blas.isamax,isamax);
    LOAD_FBLAS(handle,blas.izamax,izamax);
    LOAD_FBLAS(handle,blas.sasum,sasum);
    LOAD_FBLAS(handle,blas.saxpy,saxpy);
    LOAD_FBLAS(handle,blas.scasum,scasum);
    LOAD_FBLAS(handle,blas.scnrm2,scnrm2);
    LOAD_FBLAS(handle,blas.scopy,scopy);
    LOAD_FBLAS(handle,blas.sdot,sdot);
    LOAD_FBLAS(handle,blas.sdsdot,sdsdot);
    LOAD_FBLAS(handle,blas.sgbmv,sgbmv);
    LOAD_FBLAS(handle,blas.sgemm,sgemm);
    LOAD_FBLAS2(handle,blas.sgemmtr,blas.sgemmt,sgemmtr,sgemmt);
    LOAD_FBLAS(handle,blas.sgemv,sgemv);
    LOAD_FBLAS(handle,blas.sger,sger);
    LOAD_FBLAS(handle,blas.snrm2,snrm2);
    LOAD_FBLAS(handle,blas.srot,srot);
    LOAD_FBLAS(handle,blas.srotg,srotg);
    LOAD_FBLAS(handle,blas.srotm,srotm);
    LOAD_FBLAS(handle,blas.srotmg,srotmg);
    LOAD_FBLAS(handle,blas.ssbmv,ssbmv);
    LOAD_FBLAS(handle,blas.sscal,sscal);
    LOAD_FBLAS(handle,blas.sspmv,sspmv);
    LOAD_FBLAS(handle,blas.sspr,sspr);
    LOAD_FBLAS(handle,blas.sspr2,sspr2);
    LOAD_FBLAS(handle,blas.sswap,sswap);
    LOAD_FBLAS(handle,blas.ssymm,ssymm);
    LOAD_FBLAS(handle,blas.ssymv,ssymv);
    LOAD_FBLAS(handle,blas.ssyr,ssyr);
    LOAD_FBLAS(handle,blas.ssyr2,ssyr2);
    LOAD_FBLAS(handle,blas.ssyr2k,ssyr2k);
    LOAD_FBLAS(handle,blas.ssyrk,ssyrk);
    LOAD_FBLAS(handle,blas.stbmv,stbmv);
    LOAD_FBLAS(handle,blas.stbsv,stbsv);
    LOAD_FBLAS(handle,blas.stpmv,stpmv);
    LOAD_FBLAS(handle,blas.stpsv,stpsv);
    LOAD_FBLAS(handle,blas.strmm,strmm);
    LOAD_FBLAS(handle,blas.strmv,strmv);
    LOAD_FBLAS(handle,blas.strsm,strsm);
    LOAD_FBLAS(handle,blas.strsv,strsv);
    LOAD_FBLAS(handle,blas.zaxpy,zaxpy);
    LOAD_FBLAS(handle,blas.zcopy,zcopy);
    LOAD_FBLAS(handle,blas.zdotc,zdotc);
    LOAD_FBLAS(handle,blas.zdotu,zdotu);
    LOAD_FBLAS(handle,blas.zdrot,zdrot);
    LOAD_FBLAS(handle,blas.zdscal,zdscal);
    LOAD_FBLAS(handle,blas.zgbmv,zgbmv);
    LOAD_FBLAS(handle,blas.zgemm,zgemm);
    LOAD_FBLAS2(handle,blas.zgemmtr,blas.zgemmt,zgemmtr,zgemmt);
    LOAD_FBLAS(handle,blas.zgemv,zgemv);
    LOAD_FBLAS(handle,blas.zgerc,zgerc);
    LOAD_FBLAS(handle,blas.zgeru,zgeru);
    LOAD_FBLAS(handle,blas.zhbmv,zhbmv);
    LOAD_FBLAS(handle,blas.zhemm,zhemm);
    LOAD_FBLAS(handle,blas.zhemv,zhemv);
    LOAD_FBLAS(handle,blas.zher,zher);
    LOAD_FBLAS(handle,blas.zher2,zher2);
    LOAD_FBLAS(handle,blas.zher2k,zher2k);
    LOAD_FBLAS(handle,blas.zherk,zherk);
    LOAD_FBLAS(handle,blas.zhpmv,zhpmv);
    LOAD_FBLAS(handle,blas.zhpr,zhpr);
    LOAD_FBLAS(handle,blas.zhpr2,zhpr2);
    LOAD_FBLAS(handle,blas.zrotg,zrotg);
    LOAD_FBLAS(handle,blas.zscal,zscal);
    LOAD_FBLAS(handle,blas.zswap,zswap);
    LOAD_FBLAS(handle,blas.zsymm,zsymm);
    LOAD_FBLAS(handle,blas.zsyr2k,zsyr2k);
    LOAD_FBLAS(handle,blas.zsyrk,zsyrk);
    LOAD_FBLAS(handle,blas.ztbmv,ztbmv);
    LOAD_FBLAS(handle,blas.ztbsv,ztbsv);
    LOAD_FBLAS(handle,blas.ztpmv,ztpmv);
    LOAD_FBLAS(handle,blas.ztpsv,ztpsv);
    LOAD_FBLAS(handle,blas.ztrmm,ztrmm);
    LOAD_FBLAS(handle,blas.ztrmv,ztrmv);
    LOAD_FBLAS(handle,blas.ztrsm,ztrsm);
    LOAD_FBLAS(handle,blas.ztrsv,ztrsv);
    LOAD_FBLAS(handle,blas.caxpby,caxpby);
    LOAD_FBLAS(handle,blas.daxpby,daxpby);
    LOAD_FBLAS(handle,blas.zaxpby,zaxpby);
    LOAD_FBLAS(handle,blas.saxpby,saxpby);
    LOAD_FBLAS(handle,blas.comatcopy,comatcopy);
    LOAD_FBLAS(handle,blas.zomatcopy,zomatcopy);
    LOAD_FBLAS(handle,blas.domatcopy,domatcopy);
    LOAD_FBLAS(handle,blas.somatcopy,somatcopy);
    LOAD_FBLAS(handle,blas.cimatcopy,cimatcopy);
    LOAD_FBLAS(handle,blas.zimatcopy,zimatcopy);
    LOAD_FBLAS(handle,blas.dimatcopy,dimatcopy);
    LOAD_FBLAS(handle,blas.simatcopy,simatcopy);
    LOAD_FBLAS(handle,blas.sgeadd,sgeadd);
    LOAD_FBLAS(handle,blas.dgeadd,dgeadd);
    LOAD_FBLAS(handle,blas.cgeadd,cgeadd);
    LOAD_FBLAS(handle,blas.zgeadd,zgeadd);
    if (_ifailed != (*failed))
        return 1;
    else
        return 0;
}

static TLS_STORE uint8_t hook_pos_caxpy = 0;

void FC_GLOBAL(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cy, void* incy);
    void (*fn_hook) (void* n, void* ca, void* cx, void* incx, void* cy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.caxpy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->caxpy.f77_hook_function[0];
    hook_pos_caxpy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpy,CAXPY)))));
void FC_GLOBAL3(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpy,CAXPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpy,CAXPY)))));
void FC_GLOBAL3(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpy,CAXPY)))));
#else
void FC_GLOBAL2(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(caxpy,CAXPY)((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
void FC_GLOBAL3(caxpy,CAXPY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(caxpy,CAXPY)((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_caxpy_(void* n, void* ca, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cy, void* incy);

    *(void **) &fn = current_backend->blas.caxpy.f77_blas_function;
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_caxpy(void* n, void* ca, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_real_caxpy_")));
#else
void flexiblas_real_caxpy(void* n, void* ca, void* cx, void* incx, void* cy, void* incy){flexiblas_real_caxpy_((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_caxpy_(void* n, void* ca, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cy, void* incy);



    hook_pos_caxpy++;
    if ( hook_pos_caxpy < __flexiblas_hooks->caxpy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->caxpy.f77_hook_function[hook_pos_caxpy];
    } else {
        hook_pos_caxpy = 0;
        *(void **) &fn = current_backend->blas.caxpy.f77_blas_function;
    }
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_caxpy(void* n, void* ca, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_chain_caxpy_")));
#else
void flexiblas_chain_caxpy(void* n, void* ca, void* cx, void* incx, void* cy, void* incy){flexiblas_chain_caxpy_((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_ccopy = 0;

void FC_GLOBAL(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ccopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ccopy.f77_hook_function[0];
    hook_pos_ccopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ccopy,CCOPY)))));
void FC_GLOBAL3(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ccopy,CCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ccopy,CCOPY)))));
void FC_GLOBAL3(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ccopy,CCOPY)))));
#else
void FC_GLOBAL2(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(ccopy,CCOPY)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
void FC_GLOBAL3(ccopy,CCOPY)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(ccopy,CCOPY)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_ccopy_(void* n, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);

    *(void **) &fn = current_backend->blas.ccopy.f77_blas_function;
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ccopy(void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_real_ccopy_")));
#else
void flexiblas_real_ccopy(void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_real_ccopy_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_ccopy_(void* n, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);



    hook_pos_ccopy++;
    if ( hook_pos_ccopy < __flexiblas_hooks->ccopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ccopy.f77_hook_function[hook_pos_ccopy];
    } else {
        hook_pos_ccopy = 0;
        *(void **) &fn = current_backend->blas.ccopy.f77_blas_function;
    }
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ccopy(void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_chain_ccopy_")));
#else
void flexiblas_chain_ccopy(void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_chain_ccopy_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_cdotc = 0;

void FC_GLOBAL(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    float complex (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel_hook) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cdotc.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cdotc.f77_hook_function[0];
    hook_pos_cdotc = 0;
    *(void **) &fn_intel = current_backend->blas.cdotc.f77_blas_function;
    *(void **) &fn_intel_hook = __flexiblas_hooks->cdotc.f77_hook_function[0];
    if ( fn_hook != NULL) {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        } else {
            fn_intel_hook( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        }
    } else {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        } else {
            fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        }
    }
    *returnvalue = ret;
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotc,CDOTC)))));
void FC_GLOBAL3(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotc,CDOTC)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotc,CDOTC)))));
void FC_GLOBAL3(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotc,CDOTC)))));
#else
void FC_GLOBAL2(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cdotc,CDOTC)( (void*) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
void FC_GLOBAL3(cdotc,CDOTC)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cdotc,CDOTC)( (void*) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_cdotc_(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;

    *(void **) &fn = current_backend->blas.cdotc.f77_blas_function;	*(void**) &fn_intel = current_backend->blas.cdotc.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }

    *((float complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_real_cdotc(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_real_cdotc_")));
#else
void flexiblas_real_cdotc(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_real_cdotc_((void *)returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_cdotc_(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;



    hook_pos_cdotc++;
    if ( hook_pos_cdotc < __flexiblas_hooks->cdotc.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cdotc.f77_hook_function[hook_pos_cdotc];
    } else {
        hook_pos_cdotc = 0;
        *(void **) &fn = current_backend->blas.cdotc.f77_blas_function;
    }	*(void **) &fn_intel = current_backend->blas.cdotc.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }

    *((float complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_chain_cdotc(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_chain_cdotc_")));
#else
void flexiblas_chain_cdotc(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy){(void) flexiblas_chain_cdotc_((void *) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_cdotu = 0;

void FC_GLOBAL(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    float complex (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel_hook) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cdotu.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cdotu.f77_hook_function[0];
    hook_pos_cdotu = 0;
    *(void **) &fn_intel = current_backend->blas.cdotu.f77_blas_function;
    *(void **) &fn_intel_hook = __flexiblas_hooks->cdotu.f77_hook_function[0];
    if ( fn_hook != NULL) {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        } else {
            fn_intel_hook( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        }
    } else {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        } else {
            fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
        }
    }
    *returnvalue = ret;
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotu,CDOTU)))));
void FC_GLOBAL3(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotu,CDOTU)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotu,CDOTU)))));
void FC_GLOBAL3(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cdotu,CDOTU)))));
#else
void FC_GLOBAL2(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cdotu,CDOTU)( (void*) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
void FC_GLOBAL3(cdotu,CDOTU)( float complex* returnvalue, blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cdotu,CDOTU)( (void*) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_cdotu_(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;

    *(void **) &fn = current_backend->blas.cdotu.f77_blas_function;	*(void**) &fn_intel = current_backend->blas.cdotu.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }

    *((float complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_real_cdotu(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_real_cdotu_")));
#else
void flexiblas_real_cdotu(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_real_cdotu_((void *)returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_cdotu_(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy)
{
    float complex (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_intel) (float complex *ret, void* n, void* cx, void* incx, void* cy, void* incy);
    float complex ret;



    hook_pos_cdotu++;
    if ( hook_pos_cdotu < __flexiblas_hooks->cdotu.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cdotu.f77_hook_function[hook_pos_cdotu];
    } else {
        hook_pos_cdotu = 0;
        *(void **) &fn = current_backend->blas.cdotu.f77_blas_function;
    }	*(void **) &fn_intel = current_backend->blas.cdotu.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }

    *((float complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_chain_cdotu(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_chain_cdotu_")));
#else
void flexiblas_chain_cdotu(void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy){(void) flexiblas_chain_cdotu_((void *) returnvalue, (void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_cgbmv = 0;

void FC_GLOBAL(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgbmv.f77_hook_function[0];
    hook_pos_cgbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgbmv,CGBMV)))));
void FC_GLOBAL3(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgbmv,CGBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgbmv,CGBMV)))));
void FC_GLOBAL3(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgbmv,CGBMV)))));
#else
void FC_GLOBAL2(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cgbmv,CGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(cgbmv,CGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cgbmv,CGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_cgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.cgbmv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_cgbmv_")));
#else
void flexiblas_real_cgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_cgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_cgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_cgbmv++;
    if ( hook_pos_cgbmv < __flexiblas_hooks->cgbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgbmv.f77_hook_function[hook_pos_cgbmv];
    } else {
        hook_pos_cgbmv = 0;
        *(void **) &fn = current_backend->blas.cgbmv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_cgbmv_")));
#else
void flexiblas_chain_cgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_cgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_cgemm = 0;

void FC_GLOBAL(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgemm.f77_hook_function[0];
    hook_pos_cgemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemm,CGEMM)))));
void FC_GLOBAL3(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemm,CGEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemm,CGEMM)))));
void FC_GLOBAL3(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemm,CGEMM)))));
#else
void FC_GLOBAL2(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemm,CGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(cgemm,CGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemm,CGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_cgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.cgemm.f77_blas_function;
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_cgemm_")));
#else
void flexiblas_real_cgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_cgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_cgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_cgemm++;
    if ( hook_pos_cgemm < __flexiblas_hooks->cgemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgemm.f77_hook_function[hook_pos_cgemm];
    } else {
        hook_pos_cgemm = 0;
        *(void **) &fn = current_backend->blas.cgemm.f77_blas_function;
    }
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_cgemm_")));
#else
void flexiblas_chain_cgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_cgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_cgemmt = 0;

void FC_GLOBAL(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgemmt.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgemmt.f77_hook_function[0];
    hook_pos_cgemmt = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmt,CGEMMT)))));
void FC_GLOBAL3(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmt,CGEMMT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmt,CGEMMT)))));
void FC_GLOBAL3(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmt,CGEMMT)))));
#else
void FC_GLOBAL2(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemmt,CGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(cgemmt,CGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemmt,CGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_cgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.cgemmt.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_cgemmt_")));
#else
void flexiblas_real_cgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_cgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_cgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_cgemmt++;
    if ( hook_pos_cgemmt < __flexiblas_hooks->cgemmt.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgemmt.f77_hook_function[hook_pos_cgemmt];
    } else {
        hook_pos_cgemmt = 0;
        *(void **) &fn = current_backend->blas.cgemmt.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_cgemmt_")));
#else
void flexiblas_chain_cgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_cgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_cgemmtr = 0;

void FC_GLOBAL(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgemmtr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgemmtr.f77_hook_function[0];
    hook_pos_cgemmtr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmtr,CGEMMTR)))));
void FC_GLOBAL3(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmtr,CGEMMTR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmtr,CGEMMTR)))));
void FC_GLOBAL3(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(cgemmtr,CGEMMTR)))));
#else
void FC_GLOBAL2(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemmtr,CGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(cgemmtr,CGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(cgemmtr,CGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_cgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.cgemmtr.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_cgemmtr_")));
#else
void flexiblas_real_cgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_cgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_cgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_cgemmtr++;
    if ( hook_pos_cgemmtr < __flexiblas_hooks->cgemmtr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgemmtr.f77_hook_function[hook_pos_cgemmtr];
    } else {
        hook_pos_cgemmtr = 0;
        *(void **) &fn = current_backend->blas.cgemmtr.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_cgemmtr_")));
#else
void flexiblas_chain_cgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_cgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_cgemv = 0;

void FC_GLOBAL(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgemv.f77_hook_function[0];
    hook_pos_cgemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgemv,CGEMV)))));
void FC_GLOBAL3(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgemv,CGEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgemv,CGEMV)))));
void FC_GLOBAL3(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cgemv,CGEMV)))));
#else
void FC_GLOBAL2(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cgemv,CGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(cgemv,CGEMV)(char* trans, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cgemv,CGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_cgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.cgemv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_cgemv_")));
#else
void flexiblas_real_cgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_cgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_cgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_cgemv++;
    if ( hook_pos_cgemv < __flexiblas_hooks->cgemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgemv.f77_hook_function[hook_pos_cgemv];
    } else {
        hook_pos_cgemv = 0;
        *(void **) &fn = current_backend->blas.cgemv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_cgemv_")));
#else
void flexiblas_chain_cgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_cgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_cgerc = 0;

void FC_GLOBAL(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgerc.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgerc.f77_hook_function[0];
    hook_pos_cgerc = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgerc,CGERC)))));
void FC_GLOBAL3(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgerc,CGERC)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgerc,CGERC)))));
void FC_GLOBAL3(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgerc,CGERC)))));
#else
void FC_GLOBAL2(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda){ FC_GLOBAL(cgerc,CGERC)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(cgerc,CGERC)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda){ FC_GLOBAL(cgerc,CGERC)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_cgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.cgerc.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_cgerc_")));
#else
void flexiblas_real_cgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_cgerc_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_cgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_cgerc++;
    if ( hook_pos_cgerc < __flexiblas_hooks->cgerc.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgerc.f77_hook_function[hook_pos_cgerc];
    } else {
        hook_pos_cgerc = 0;
        *(void **) &fn = current_backend->blas.cgerc.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_cgerc_")));
#else
void flexiblas_chain_cgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_cgerc_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_cgeru = 0;

void FC_GLOBAL(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgeru.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgeru.f77_hook_function[0];
    hook_pos_cgeru = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgeru,CGERU)))));
void FC_GLOBAL3(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgeru,CGERU)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgeru,CGERU)))));
void FC_GLOBAL3(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(cgeru,CGERU)))));
#else
void FC_GLOBAL2(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda){ FC_GLOBAL(cgeru,CGERU)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(cgeru,CGERU)(blasint* m, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda){ FC_GLOBAL(cgeru,CGERU)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_cgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.cgeru.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_cgeru_")));
#else
void flexiblas_real_cgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_cgeru_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_cgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_cgeru++;
    if ( hook_pos_cgeru < __flexiblas_hooks->cgeru.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgeru.f77_hook_function[hook_pos_cgeru];
    } else {
        hook_pos_cgeru = 0;
        *(void **) &fn = current_backend->blas.cgeru.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_cgeru_")));
#else
void flexiblas_chain_cgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_cgeru_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_chbmv = 0;

void FC_GLOBAL(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chbmv.f77_hook_function[0];
    hook_pos_chbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chbmv,CHBMV)))));
void FC_GLOBAL3(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chbmv,CHBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chbmv,CHBMV)))));
void FC_GLOBAL3(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chbmv,CHBMV)))));
#else
void FC_GLOBAL2(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chbmv,CHBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chbmv,CHBMV)(char* uplo, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chbmv,CHBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chbmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chbmv_")));
#else
void flexiblas_real_chbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chbmv++;
    if ( hook_pos_chbmv < __flexiblas_hooks->chbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chbmv.f77_hook_function[hook_pos_chbmv];
    } else {
        hook_pos_chbmv = 0;
        *(void **) &fn = current_backend->blas.chbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chbmv_")));
#else
void flexiblas_chain_chbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_chemm = 0;

void FC_GLOBAL(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chemm.f77_hook_function[0];
    hook_pos_chemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemm,CHEMM)))));
void FC_GLOBAL3(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemm,CHEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemm,CHEMM)))));
void FC_GLOBAL3(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemm,CHEMM)))));
#else
void FC_GLOBAL2(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chemm,CHEMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chemm,CHEMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chemm,CHEMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chemm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chemm_")));
#else
void flexiblas_real_chemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chemm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chemm++;
    if ( hook_pos_chemm < __flexiblas_hooks->chemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chemm.f77_hook_function[hook_pos_chemm];
    } else {
        hook_pos_chemm = 0;
        *(void **) &fn = current_backend->blas.chemm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chemm_")));
#else
void flexiblas_chain_chemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chemm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_chemv = 0;

void FC_GLOBAL(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chemv.f77_hook_function[0];
    hook_pos_chemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemv,CHEMV)))));
void FC_GLOBAL3(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemv,CHEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemv,CHEMV)))));
void FC_GLOBAL3(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chemv,CHEMV)))));
#else
void FC_GLOBAL2(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chemv,CHEMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chemv,CHEMV)(char* uplo, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chemv,CHEMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chemv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chemv_")));
#else
void flexiblas_real_chemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chemv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chemv++;
    if ( hook_pos_chemv < __flexiblas_hooks->chemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chemv.f77_hook_function[hook_pos_chemv];
    } else {
        hook_pos_chemv = 0;
        *(void **) &fn = current_backend->blas.chemv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chemv_")));
#else
void flexiblas_chain_chemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chemv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_cher = 0;

void FC_GLOBAL(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cher.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cher.f77_hook_function[0];
    hook_pos_cher = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher,CHER)))));
void FC_GLOBAL3(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher,CHER)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher,CHER)))));
void FC_GLOBAL3(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher,CHER)))));
#else
void FC_GLOBAL2(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(cher,CHER)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(cher,CHER)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(cher,CHER)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_cher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.cher.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_cher_")));
#else
void flexiblas_real_cher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_cher_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_cher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_cher++;
    if ( hook_pos_cher < __flexiblas_hooks->cher.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cher.f77_hook_function[hook_pos_cher];
    } else {
        hook_pos_cher = 0;
        *(void **) &fn = current_backend->blas.cher.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_cher_")));
#else
void flexiblas_chain_cher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_cher_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_cher2 = 0;

void FC_GLOBAL(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cher2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cher2.f77_hook_function[0];
    hook_pos_cher2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher2,CHER2)))));
void FC_GLOBAL3(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher2,CHER2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher2,CHER2)))));
void FC_GLOBAL3(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(cher2,CHER2)))));
#else
void FC_GLOBAL2(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(cher2,CHER2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(cher2,CHER2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(cher2,CHER2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_cher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.cher2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_cher2_")));
#else
void flexiblas_real_cher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_cher2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_cher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_cher2++;
    if ( hook_pos_cher2 < __flexiblas_hooks->cher2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cher2.f77_hook_function[hook_pos_cher2];
    } else {
        hook_pos_cher2 = 0;
        *(void **) &fn = current_backend->blas.cher2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_cher2_")));
#else
void flexiblas_chain_cher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_cher2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_cher2k = 0;

void FC_GLOBAL(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cher2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cher2k.f77_hook_function[0];
    hook_pos_cher2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cher2k,CHER2K)))));
void FC_GLOBAL3(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cher2k,CHER2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cher2k,CHER2K)))));
void FC_GLOBAL3(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cher2k,CHER2K)))));
#else
void FC_GLOBAL2(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cher2k,CHER2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(cher2k,CHER2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cher2k,CHER2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_cher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.cher2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_cher2k_")));
#else
void flexiblas_real_cher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_cher2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_cher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_cher2k++;
    if ( hook_pos_cher2k < __flexiblas_hooks->cher2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cher2k.f77_hook_function[hook_pos_cher2k];
    } else {
        hook_pos_cher2k = 0;
        *(void **) &fn = current_backend->blas.cher2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_cher2k_")));
#else
void flexiblas_chain_cher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_cher2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_cherk = 0;

void FC_GLOBAL(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cherk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cherk.f77_hook_function[0];
    hook_pos_cherk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cherk,CHERK)))));
void FC_GLOBAL3(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cherk,CHERK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cherk,CHERK)))));
void FC_GLOBAL3(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cherk,CHERK)))));
#else
void FC_GLOBAL2(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cherk,CHERK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(cherk,CHERK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float complex* a, blasint* lda, float* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cherk,CHERK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_cherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.cherk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_cherk_")));
#else
void flexiblas_real_cherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_cherk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_cherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_cherk++;
    if ( hook_pos_cherk < __flexiblas_hooks->cherk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cherk.f77_hook_function[hook_pos_cherk];
    } else {
        hook_pos_cherk = 0;
        *(void **) &fn = current_backend->blas.cherk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_cherk_")));
#else
void flexiblas_chain_cherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_cherk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_chpmv = 0;

void FC_GLOBAL(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chpmv.f77_hook_function[0];
    hook_pos_chpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpmv,CHPMV)))));
void FC_GLOBAL3(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpmv,CHPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpmv,CHPMV)))));
void FC_GLOBAL3(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpmv,CHPMV)))));
#else
void FC_GLOBAL2(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpmv,CHPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chpmv,CHPMV)(char* uplo, blasint* n, float complex* alpha, float complex* ap, float complex* x, blasint* incx, float complex* beta, float complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpmv,CHPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chpmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chpmv_")));
#else
void flexiblas_real_chpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chpmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chpmv++;
    if ( hook_pos_chpmv < __flexiblas_hooks->chpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chpmv.f77_hook_function[hook_pos_chpmv];
    } else {
        hook_pos_chpmv = 0;
        *(void **) &fn = current_backend->blas.chpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chpmv_")));
#else
void flexiblas_chain_chpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chpmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_chpr = 0;

void FC_GLOBAL(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chpr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chpr.f77_hook_function[0];
    hook_pos_chpr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr,CHPR)))));
void FC_GLOBAL3(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr,CHPR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr,CHPR)))));
void FC_GLOBAL3(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr,CHPR)))));
#else
void FC_GLOBAL2(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpr,CHPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chpr,CHPR)(char* uplo, blasint* n, float* alpha, float complex* x, blasint* incx, float complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpr,CHPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chpr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chpr_")));
#else
void flexiblas_real_chpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chpr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chpr++;
    if ( hook_pos_chpr < __flexiblas_hooks->chpr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chpr.f77_hook_function[hook_pos_chpr];
    } else {
        hook_pos_chpr = 0;
        *(void **) &fn = current_backend->blas.chpr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chpr_")));
#else
void flexiblas_chain_chpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chpr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_chpr2 = 0;

void FC_GLOBAL(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.chpr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->chpr2.f77_hook_function[0];
    hook_pos_chpr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr2,CHPR2)))));
void FC_GLOBAL3(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr2,CHPR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr2,CHPR2)))));
void FC_GLOBAL3(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(chpr2,CHPR2)))));
#else
void FC_GLOBAL2(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpr2,CHPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(chpr2,CHPR2)(char* uplo, blasint* n, float complex* alpha, float complex* x, blasint* incx, float complex* y, blasint* incy, float complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(chpr2,CHPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_chpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.chpr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_chpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_chpr2_")));
#else
void flexiblas_real_chpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_chpr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_chpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_chpr2++;
    if ( hook_pos_chpr2 < __flexiblas_hooks->chpr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->chpr2.f77_hook_function[hook_pos_chpr2];
    } else {
        hook_pos_chpr2 = 0;
        *(void **) &fn = current_backend->blas.chpr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_chpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_chpr2_")));
#else
void flexiblas_chain_chpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_chpr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_crotg = 0;

void FC_GLOBAL(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);
    void (*fn_hook) (void* ca, void* cb, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.crotg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->crotg.f77_hook_function[0];
    hook_pos_crotg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) ca, (void*) cb, (void*) c, (void*) s);
    } else {
        fn((void*) ca, (void*) cb, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s) __attribute__((alias(MTS(FC_GLOBAL(crotg,CROTG)))));
void FC_GLOBAL3(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s) __attribute__((alias(MTS(FC_GLOBAL(crotg,CROTG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s) __attribute__((alias(MTS(FC_GLOBAL(crotg,CROTG)))));
void FC_GLOBAL3(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s) __attribute__((alias(MTS(FC_GLOBAL(crotg,CROTG)))));
#else
void FC_GLOBAL2(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s){ FC_GLOBAL(crotg,CROTG)((void*) ca, (void*) cb, (void*) c, (void*) s); }
void FC_GLOBAL3(crotg,CROTG)(float complex* ca, float complex* cb, float* c, float complex* s){ FC_GLOBAL(crotg,CROTG)((void*) ca, (void*) cb, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_crotg_(void* ca, void* cb, void* c, void* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);

    *(void **) &fn = current_backend->blas.crotg.f77_blas_function;
    fn((void*) ca, (void*) cb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_crotg(void* ca, void* cb, void* c, void* s) __attribute__((alias("flexiblas_real_crotg_")));
#else
void flexiblas_real_crotg(void* ca, void* cb, void* c, void* s){flexiblas_real_crotg_((void*) ca, (void*) cb, (void*) c, (void*) s);}
#endif


void flexiblas_chain_crotg_(void* ca, void* cb, void* c, void* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);



    hook_pos_crotg++;
    if ( hook_pos_crotg < __flexiblas_hooks->crotg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->crotg.f77_hook_function[hook_pos_crotg];
    } else {
        hook_pos_crotg = 0;
        *(void **) &fn = current_backend->blas.crotg.f77_blas_function;
    }
    fn((void*) ca, (void*) cb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_crotg(void* ca, void* cb, void* c, void* s) __attribute__((alias("flexiblas_chain_crotg_")));
#else
void flexiblas_chain_crotg(void* ca, void* cb, void* c, void* s){flexiblas_chain_crotg_((void*) ca, (void*) cb, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_cscal = 0;

void FC_GLOBAL(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx);
    void (*fn_hook) (void* n, void* ca, void* cx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cscal.f77_hook_function[0];
    hook_pos_cscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) ca, (void*) cx, (void*) incx);
    } else {
        fn((void*) n, (void*) ca, (void*) cx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(cscal,CSCAL)))));
void FC_GLOBAL3(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(cscal,CSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(cscal,CSCAL)))));
void FC_GLOBAL3(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(cscal,CSCAL)))));
#else
void FC_GLOBAL2(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx){ FC_GLOBAL(cscal,CSCAL)((void*) n, (void*) ca, (void*) cx, (void*) incx); }
void FC_GLOBAL3(cscal,CSCAL)(blasint* n, float complex* ca, float complex* cx, blasint* incx){ FC_GLOBAL(cscal,CSCAL)((void*) n, (void*) ca, (void*) cx, (void*) incx); }
#endif
#endif



void flexiblas_real_cscal_(void* n, void* ca, void* cx, void* incx)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx);

    *(void **) &fn = current_backend->blas.cscal.f77_blas_function;
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cscal(void* n, void* ca, void* cx, void* incx) __attribute__((alias("flexiblas_real_cscal_")));
#else
void flexiblas_real_cscal(void* n, void* ca, void* cx, void* incx){flexiblas_real_cscal_((void*) n, (void*) ca, (void*) cx, (void*) incx);}
#endif


void flexiblas_chain_cscal_(void* n, void* ca, void* cx, void* incx)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx);



    hook_pos_cscal++;
    if ( hook_pos_cscal < __flexiblas_hooks->cscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cscal.f77_hook_function[hook_pos_cscal];
    } else {
        hook_pos_cscal = 0;
        *(void **) &fn = current_backend->blas.cscal.f77_blas_function;
    }
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cscal(void* n, void* ca, void* cx, void* incx) __attribute__((alias("flexiblas_chain_cscal_")));
#else
void flexiblas_chain_cscal(void* n, void* ca, void* cx, void* incx){flexiblas_chain_cscal_((void*) n, (void*) ca, (void*) cx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_csrot = 0;

void FC_GLOBAL(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
    void (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.csrot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->csrot.f77_hook_function[0];
    hook_pos_csrot = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);
    } else {
        fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(csrot,CSROT)))));
void FC_GLOBAL3(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(csrot,CSROT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(csrot,CSROT)))));
void FC_GLOBAL3(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(csrot,CSROT)))));
#else
void FC_GLOBAL2(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s){ FC_GLOBAL(csrot,CSROT)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s); }
void FC_GLOBAL3(csrot,CSROT)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy, float* c, float* s){ FC_GLOBAL(csrot,CSROT)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_csrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);

    *(void **) &fn = current_backend->blas.csrot.f77_blas_function;
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_csrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_real_csrot_")));
#else
void flexiblas_real_csrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s){flexiblas_real_csrot_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);}
#endif


void flexiblas_chain_csrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);



    hook_pos_csrot++;
    if ( hook_pos_csrot < __flexiblas_hooks->csrot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->csrot.f77_hook_function[hook_pos_csrot];
    } else {
        hook_pos_csrot = 0;
        *(void **) &fn = current_backend->blas.csrot.f77_blas_function;
    }
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_csrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_chain_csrot_")));
#else
void flexiblas_chain_csrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s){flexiblas_chain_csrot_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_csscal = 0;

void FC_GLOBAL(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx)
{
    void (*fn) (void* n, void* sa, void* cx, void* incx);
    void (*fn_hook) (void* n, void* sa, void* cx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.csscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->csscal.f77_hook_function[0];
    hook_pos_csscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sa, (void*) cx, (void*) incx);
    } else {
        fn((void*) n, (void*) sa, (void*) cx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(csscal,CSSCAL)))));
void FC_GLOBAL3(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(csscal,CSSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(csscal,CSSCAL)))));
void FC_GLOBAL3(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(csscal,CSSCAL)))));
#else
void FC_GLOBAL2(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx){ FC_GLOBAL(csscal,CSSCAL)((void*) n, (void*) sa, (void*) cx, (void*) incx); }
void FC_GLOBAL3(csscal,CSSCAL)(blasint* n, float* sa, float complex* cx, blasint* incx){ FC_GLOBAL(csscal,CSSCAL)((void*) n, (void*) sa, (void*) cx, (void*) incx); }
#endif
#endif



void flexiblas_real_csscal_(void* n, void* sa, void* cx, void* incx)
{
    void (*fn) (void* n, void* sa, void* cx, void* incx);

    *(void **) &fn = current_backend->blas.csscal.f77_blas_function;
    fn((void*) n, (void*) sa, (void*) cx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_csscal(void* n, void* sa, void* cx, void* incx) __attribute__((alias("flexiblas_real_csscal_")));
#else
void flexiblas_real_csscal(void* n, void* sa, void* cx, void* incx){flexiblas_real_csscal_((void*) n, (void*) sa, (void*) cx, (void*) incx);}
#endif


void flexiblas_chain_csscal_(void* n, void* sa, void* cx, void* incx)
{
    void (*fn) (void* n, void* sa, void* cx, void* incx);



    hook_pos_csscal++;
    if ( hook_pos_csscal < __flexiblas_hooks->csscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->csscal.f77_hook_function[hook_pos_csscal];
    } else {
        hook_pos_csscal = 0;
        *(void **) &fn = current_backend->blas.csscal.f77_blas_function;
    }
    fn((void*) n, (void*) sa, (void*) cx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_csscal(void* n, void* sa, void* cx, void* incx) __attribute__((alias("flexiblas_chain_csscal_")));
#else
void flexiblas_chain_csscal(void* n, void* sa, void* cx, void* incx){flexiblas_chain_csscal_((void*) n, (void*) sa, (void*) cx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_cswap = 0;

void FC_GLOBAL(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);
    void (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cswap.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cswap.f77_hook_function[0];
    hook_pos_cswap = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    } else {
        fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cswap,CSWAP)))));
void FC_GLOBAL3(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cswap,CSWAP)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cswap,CSWAP)))));
void FC_GLOBAL3(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(cswap,CSWAP)))));
#else
void FC_GLOBAL2(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cswap,CSWAP)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
void FC_GLOBAL3(cswap,CSWAP)(blasint* n, float complex* cx, blasint* incx, float complex* cy, blasint* incy){ FC_GLOBAL(cswap,CSWAP)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_cswap_(void* n, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);

    *(void **) &fn = current_backend->blas.cswap.f77_blas_function;
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cswap(void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_real_cswap_")));
#else
void flexiblas_real_cswap(void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_real_cswap_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_cswap_(void* n, void* cx, void* incx, void* cy, void* incy)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy);



    hook_pos_cswap++;
    if ( hook_pos_cswap < __flexiblas_hooks->cswap.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cswap.f77_hook_function[hook_pos_cswap];
    } else {
        hook_pos_cswap = 0;
        *(void **) &fn = current_backend->blas.cswap.f77_blas_function;
    }
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cswap(void* n, void* cx, void* incx, void* cy, void* incy) __attribute__((alias("flexiblas_chain_cswap_")));
#else
void flexiblas_chain_cswap(void* n, void* cx, void* incx, void* cy, void* incy){flexiblas_chain_cswap_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_csymm = 0;

void FC_GLOBAL(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.csymm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->csymm.f77_hook_function[0];
    hook_pos_csymm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(csymm,CSYMM)))));
void FC_GLOBAL3(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(csymm,CSYMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(csymm,CSYMM)))));
void FC_GLOBAL3(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(csymm,CSYMM)))));
#else
void FC_GLOBAL2(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(csymm,CSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(csymm,CSYMM)(char* side, char* uplo, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(csymm,CSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_csymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.csymm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_csymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_csymm_")));
#else
void flexiblas_real_csymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_csymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_csymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_csymm++;
    if ( hook_pos_csymm < __flexiblas_hooks->csymm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->csymm.f77_hook_function[hook_pos_csymm];
    } else {
        hook_pos_csymm = 0;
        *(void **) &fn = current_backend->blas.csymm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_csymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_csymm_")));
#else
void flexiblas_chain_csymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_csymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_csyr2k = 0;

void FC_GLOBAL(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.csyr2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->csyr2k.f77_hook_function[0];
    hook_pos_csyr2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyr2k,CSYR2K)))));
void FC_GLOBAL3(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyr2k,CSYR2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyr2k,CSYR2K)))));
void FC_GLOBAL3(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyr2k,CSYR2K)))));
#else
void FC_GLOBAL2(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(csyr2k,CSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(csyr2k,CSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(csyr2k,CSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_csyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.csyr2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_csyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_csyr2k_")));
#else
void flexiblas_real_csyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_csyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_csyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_csyr2k++;
    if ( hook_pos_csyr2k < __flexiblas_hooks->csyr2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->csyr2k.f77_hook_function[hook_pos_csyr2k];
    } else {
        hook_pos_csyr2k = 0;
        *(void **) &fn = current_backend->blas.csyr2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_csyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_csyr2k_")));
#else
void flexiblas_chain_csyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_csyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_csyrk = 0;

void FC_GLOBAL(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.csyrk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->csyrk.f77_hook_function[0];
    hook_pos_csyrk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyrk,CSYRK)))));
void FC_GLOBAL3(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyrk,CSYRK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyrk,CSYRK)))));
void FC_GLOBAL3(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(csyrk,CSYRK)))));
#else
void FC_GLOBAL2(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(csyrk,CSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(csyrk,CSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(csyrk,CSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_csyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.csyrk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_csyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_csyrk_")));
#else
void flexiblas_real_csyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_csyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_csyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_csyrk++;
    if ( hook_pos_csyrk < __flexiblas_hooks->csyrk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->csyrk.f77_hook_function[hook_pos_csyrk];
    } else {
        hook_pos_csyrk = 0;
        *(void **) &fn = current_backend->blas.csyrk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_csyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_csyrk_")));
#else
void flexiblas_chain_csyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_csyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_ctbmv = 0;

void FC_GLOBAL(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctbmv.f77_hook_function[0];
    hook_pos_ctbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbmv,CTBMV)))));
void FC_GLOBAL3(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbmv,CTBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbmv,CTBMV)))));
void FC_GLOBAL3(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbmv,CTBMV)))));
#else
void FC_GLOBAL2(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctbmv,CTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctbmv,CTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctbmv,CTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctbmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctbmv_")));
#else
void flexiblas_real_ctbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctbmv++;
    if ( hook_pos_ctbmv < __flexiblas_hooks->ctbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctbmv.f77_hook_function[hook_pos_ctbmv];
    } else {
        hook_pos_ctbmv = 0;
        *(void **) &fn = current_backend->blas.ctbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctbmv_")));
#else
void flexiblas_chain_ctbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctbsv = 0;

void FC_GLOBAL(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctbsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctbsv.f77_hook_function[0];
    hook_pos_ctbsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbsv,CTBSV)))));
void FC_GLOBAL3(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbsv,CTBSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbsv,CTBSV)))));
void FC_GLOBAL3(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctbsv,CTBSV)))));
#else
void FC_GLOBAL2(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctbsv,CTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctbsv,CTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctbsv,CTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctbsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctbsv_")));
#else
void flexiblas_real_ctbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctbsv++;
    if ( hook_pos_ctbsv < __flexiblas_hooks->ctbsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctbsv.f77_hook_function[hook_pos_ctbsv];
    } else {
        hook_pos_ctbsv = 0;
        *(void **) &fn = current_backend->blas.ctbsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctbsv_")));
#else
void flexiblas_chain_ctbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctpmv = 0;

void FC_GLOBAL(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctpmv.f77_hook_function[0];
    hook_pos_ctpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpmv,CTPMV)))));
void FC_GLOBAL3(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpmv,CTPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpmv,CTPMV)))));
void FC_GLOBAL3(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpmv,CTPMV)))));
#else
void FC_GLOBAL2(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctpmv,CTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctpmv,CTPMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctpmv,CTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctpmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctpmv_")));
#else
void flexiblas_real_ctpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctpmv++;
    if ( hook_pos_ctpmv < __flexiblas_hooks->ctpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctpmv.f77_hook_function[hook_pos_ctpmv];
    } else {
        hook_pos_ctpmv = 0;
        *(void **) &fn = current_backend->blas.ctpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctpmv_")));
#else
void flexiblas_chain_ctpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctpsv = 0;

void FC_GLOBAL(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctpsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctpsv.f77_hook_function[0];
    hook_pos_ctpsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpsv,CTPSV)))));
void FC_GLOBAL3(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpsv,CTPSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpsv,CTPSV)))));
void FC_GLOBAL3(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctpsv,CTPSV)))));
#else
void FC_GLOBAL2(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctpsv,CTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctpsv,CTPSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* ap, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctpsv,CTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctpsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctpsv_")));
#else
void flexiblas_real_ctpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctpsv++;
    if ( hook_pos_ctpsv < __flexiblas_hooks->ctpsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctpsv.f77_hook_function[hook_pos_ctpsv];
    } else {
        hook_pos_ctpsv = 0;
        *(void **) &fn = current_backend->blas.ctpsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctpsv_")));
#else
void flexiblas_chain_ctpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctrmm = 0;

void FC_GLOBAL(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctrmm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctrmm.f77_hook_function[0];
    hook_pos_ctrmm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmm,CTRMM)))));
void FC_GLOBAL3(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmm,CTRMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmm,CTRMM)))));
void FC_GLOBAL3(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmm,CTRMM)))));
#else
void FC_GLOBAL2(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrmm,CTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctrmm,CTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrmm,CTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctrmm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctrmm_")));
#else
void flexiblas_real_ctrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctrmm++;
    if ( hook_pos_ctrmm < __flexiblas_hooks->ctrmm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctrmm.f77_hook_function[hook_pos_ctrmm];
    } else {
        hook_pos_ctrmm = 0;
        *(void **) &fn = current_backend->blas.ctrmm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctrmm_")));
#else
void flexiblas_chain_ctrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctrmv = 0;

void FC_GLOBAL(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctrmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctrmv.f77_hook_function[0];
    hook_pos_ctrmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmv,CTRMV)))));
void FC_GLOBAL3(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmv,CTRMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmv,CTRMV)))));
void FC_GLOBAL3(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrmv,CTRMV)))));
#else
void FC_GLOBAL2(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrmv,CTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctrmv,CTRMV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrmv,CTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctrmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctrmv_")));
#else
void flexiblas_real_ctrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctrmv++;
    if ( hook_pos_ctrmv < __flexiblas_hooks->ctrmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctrmv.f77_hook_function[hook_pos_ctrmv];
    } else {
        hook_pos_ctrmv = 0;
        *(void **) &fn = current_backend->blas.ctrmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctrmv_")));
#else
void flexiblas_chain_ctrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctrsm = 0;

void FC_GLOBAL(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctrsm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctrsm.f77_hook_function[0];
    hook_pos_ctrsm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsm,CTRSM)))));
void FC_GLOBAL3(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsm,CTRSM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsm,CTRSM)))));
void FC_GLOBAL3(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsm,CTRSM)))));
#else
void FC_GLOBAL2(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrsm,CTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctrsm,CTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrsm,CTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctrsm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctrsm_")));
#else
void flexiblas_real_ctrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctrsm++;
    if ( hook_pos_ctrsm < __flexiblas_hooks->ctrsm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctrsm.f77_hook_function[hook_pos_ctrsm];
    } else {
        hook_pos_ctrsm = 0;
        *(void **) &fn = current_backend->blas.ctrsm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctrsm_")));
#else
void flexiblas_chain_ctrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ctrsv = 0;

void FC_GLOBAL(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ctrsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ctrsv.f77_hook_function[0];
    hook_pos_ctrsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsv,CTRSV)))));
void FC_GLOBAL3(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsv,CTRSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsv,CTRSV)))));
void FC_GLOBAL3(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ctrsv,CTRSV)))));
#else
void FC_GLOBAL2(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrsv,CTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ctrsv,CTRSV)(char* uplo, char* trans, char* diag, blasint* n, float complex* a, blasint* lda, float complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ctrsv,CTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ctrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ctrsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ctrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ctrsv_")));
#else
void flexiblas_real_ctrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ctrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ctrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ctrsv++;
    if ( hook_pos_ctrsv < __flexiblas_hooks->ctrsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ctrsv.f77_hook_function[hook_pos_ctrsv];
    } else {
        hook_pos_ctrsv = 0;
        *(void **) &fn = current_backend->blas.ctrsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ctrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ctrsv_")));
#else
void flexiblas_chain_ctrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ctrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dasum = 0;

double FC_GLOBAL(dasum,DASUM)(blasint* n, double* dx, blasint* incx)
{
    double (*fn) (void* n, void* dx, void* incx);
    double (*fn_hook) (void* n, void* dx, void* incx);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dasum.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dasum.f77_hook_function[0];
    hook_pos_dasum = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) dx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) dx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(dasum,DASUM)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dasum,DASUM)))));
double FC_GLOBAL3(dasum,DASUM)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dasum,DASUM)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(dasum,DASUM)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dasum,DASUM)))));
double FC_GLOBAL3(dasum,DASUM)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dasum,DASUM)))));
#else
double FC_GLOBAL2(dasum,DASUM)(blasint* n, double* dx, blasint* incx){ return FC_GLOBAL(dasum,DASUM)((void*) n, (void*) dx, (void*) incx); }
double FC_GLOBAL3(dasum,DASUM)(blasint* n, double* dx, blasint* incx){ return FC_GLOBAL(dasum,DASUM)((void*) n, (void*) dx, (void*) incx); }
#endif
#endif



double flexiblas_real_dasum_(void* n, void* dx, void* incx)
{
    double (*fn) (void* n, void* dx, void* incx);
    double ret;

    *(void **) &fn = current_backend->blas.dasum.f77_blas_function;
    ret = fn((void*) n, (void*) dx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_dasum(void* n, void* dx, void* incx) __attribute__((alias("flexiblas_real_dasum_")));
#else
double flexiblas_real_dasum(void* n, void* dx, void* incx){return flexiblas_real_dasum_((void*) n, (void*) dx, (void*) incx);}
#endif


double flexiblas_chain_dasum_(void* n, void* dx, void* incx)
{
    double (*fn) (void* n, void* dx, void* incx);
    double ret;



    hook_pos_dasum++;
    if ( hook_pos_dasum < __flexiblas_hooks->dasum.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dasum.f77_hook_function[hook_pos_dasum];
    } else {
        hook_pos_dasum = 0;
        *(void **) &fn = current_backend->blas.dasum.f77_blas_function;
    }
    ret = fn((void*) n, (void*) dx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_dasum(void* n, void* dx, void* incx) __attribute__((alias("flexiblas_chain_dasum_")));
#else
double flexiblas_chain_dasum(void* n, void* dx, void* incx){return flexiblas_chain_dasum_((void*) n, (void*) dx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_daxpy = 0;

void FC_GLOBAL(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* dy, void* incy);
    void (*fn_hook) (void* n, void* da, void* dx, void* incx, void* dy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.daxpy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->daxpy.f77_hook_function[0];
    hook_pos_daxpy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    } else {
        fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpy,DAXPY)))));
void FC_GLOBAL3(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpy,DAXPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpy,DAXPY)))));
void FC_GLOBAL3(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpy,DAXPY)))));
#else
void FC_GLOBAL2(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(daxpy,DAXPY)((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
void FC_GLOBAL3(daxpy,DAXPY)(blasint* n, double* da, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(daxpy,DAXPY)((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
#endif
#endif



void flexiblas_real_daxpy_(void* n, void* da, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* dy, void* incy);

    *(void **) &fn = current_backend->blas.daxpy.f77_blas_function;
    fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_daxpy(void* n, void* da, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_real_daxpy_")));
#else
void flexiblas_real_daxpy(void* n, void* da, void* dx, void* incx, void* dy, void* incy){flexiblas_real_daxpy_((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


void flexiblas_chain_daxpy_(void* n, void* da, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* dy, void* incy);



    hook_pos_daxpy++;
    if ( hook_pos_daxpy < __flexiblas_hooks->daxpy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->daxpy.f77_hook_function[hook_pos_daxpy];
    } else {
        hook_pos_daxpy = 0;
        *(void **) &fn = current_backend->blas.daxpy.f77_blas_function;
    }
    fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_daxpy(void* n, void* da, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_chain_daxpy_")));
#else
void flexiblas_chain_daxpy(void* n, void* da, void* dx, void* incx, void* dy, void* incy){flexiblas_chain_daxpy_((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_dcopy = 0;

void FC_GLOBAL(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);
    void (*fn_hook) (void* n, void* dx, void* incx, void* dy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dcopy.f77_hook_function[0];
    hook_pos_dcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    } else {
        fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dcopy,DCOPY)))));
void FC_GLOBAL3(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dcopy,DCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dcopy,DCOPY)))));
void FC_GLOBAL3(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dcopy,DCOPY)))));
#else
void FC_GLOBAL2(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(dcopy,DCOPY)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
void FC_GLOBAL3(dcopy,DCOPY)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(dcopy,DCOPY)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
#endif
#endif



void flexiblas_real_dcopy_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);

    *(void **) &fn = current_backend->blas.dcopy.f77_blas_function;
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dcopy(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_real_dcopy_")));
#else
void flexiblas_real_dcopy(void* n, void* dx, void* incx, void* dy, void* incy){flexiblas_real_dcopy_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


void flexiblas_chain_dcopy_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);



    hook_pos_dcopy++;
    if ( hook_pos_dcopy < __flexiblas_hooks->dcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dcopy.f77_hook_function[hook_pos_dcopy];
    } else {
        hook_pos_dcopy = 0;
        *(void **) &fn = current_backend->blas.dcopy.f77_blas_function;
    }
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dcopy(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_chain_dcopy_")));
#else
void flexiblas_chain_dcopy(void* n, void* dx, void* incx, void* dy, void* incy){flexiblas_chain_dcopy_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_ddot = 0;

double FC_GLOBAL(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy)
{
    double (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);
    double (*fn_hook) (void* n, void* dx, void* incx, void* dy, void* incy);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ddot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ddot.f77_hook_function[0];
    hook_pos_ddot = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    } else {
        ret = fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ddot,DDOT)))));
double FC_GLOBAL3(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ddot,DDOT)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ddot,DDOT)))));
double FC_GLOBAL3(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(ddot,DDOT)))));
#else
double FC_GLOBAL2(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ return FC_GLOBAL(ddot,DDOT)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
double FC_GLOBAL3(ddot,DDOT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ return FC_GLOBAL(ddot,DDOT)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
#endif
#endif



double flexiblas_real_ddot_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    double (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);
    double ret;

    *(void **) &fn = current_backend->blas.ddot.f77_blas_function;
    ret = fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_ddot(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_real_ddot_")));
#else
double flexiblas_real_ddot(void* n, void* dx, void* incx, void* dy, void* incy){return flexiblas_real_ddot_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


double flexiblas_chain_ddot_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    double (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);
    double ret;



    hook_pos_ddot++;
    if ( hook_pos_ddot < __flexiblas_hooks->ddot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ddot.f77_hook_function[hook_pos_ddot];
    } else {
        hook_pos_ddot = 0;
        *(void **) &fn = current_backend->blas.ddot.f77_blas_function;
    }
    ret = fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_ddot(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_chain_ddot_")));
#else
double flexiblas_chain_ddot(void* n, void* dx, void* incx, void* dy, void* incy){return flexiblas_chain_ddot_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_dgbmv = 0;

void FC_GLOBAL(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgbmv.f77_hook_function[0];
    hook_pos_dgbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgbmv,DGBMV)))));
void FC_GLOBAL3(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgbmv,DGBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgbmv,DGBMV)))));
void FC_GLOBAL3(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgbmv,DGBMV)))));
#else
void FC_GLOBAL2(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dgbmv,DGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(dgbmv,DGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dgbmv,DGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_dgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.dgbmv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dgbmv_")));
#else
void flexiblas_real_dgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_dgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_dgbmv++;
    if ( hook_pos_dgbmv < __flexiblas_hooks->dgbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgbmv.f77_hook_function[hook_pos_dgbmv];
    } else {
        hook_pos_dgbmv = 0;
        *(void **) &fn = current_backend->blas.dgbmv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dgbmv_")));
#else
void flexiblas_chain_dgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_dgemm = 0;

void FC_GLOBAL(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgemm.f77_hook_function[0];
    hook_pos_dgemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemm,DGEMM)))));
void FC_GLOBAL3(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemm,DGEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemm,DGEMM)))));
void FC_GLOBAL3(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemm,DGEMM)))));
#else
void FC_GLOBAL2(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemm,DGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(dgemm,DGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemm,DGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_dgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.dgemm.f77_blas_function;
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_dgemm_")));
#else
void flexiblas_real_dgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_dgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_dgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_dgemm++;
    if ( hook_pos_dgemm < __flexiblas_hooks->dgemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgemm.f77_hook_function[hook_pos_dgemm];
    } else {
        hook_pos_dgemm = 0;
        *(void **) &fn = current_backend->blas.dgemm.f77_blas_function;
    }
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_dgemm_")));
#else
void flexiblas_chain_dgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_dgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_dgemmt = 0;

void FC_GLOBAL(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgemmt.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgemmt.f77_hook_function[0];
    hook_pos_dgemmt = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmt,DGEMMT)))));
void FC_GLOBAL3(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmt,DGEMMT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmt,DGEMMT)))));
void FC_GLOBAL3(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmt,DGEMMT)))));
#else
void FC_GLOBAL2(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemmt,DGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(dgemmt,DGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemmt,DGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_dgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.dgemmt.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_dgemmt_")));
#else
void flexiblas_real_dgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_dgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_dgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_dgemmt++;
    if ( hook_pos_dgemmt < __flexiblas_hooks->dgemmt.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgemmt.f77_hook_function[hook_pos_dgemmt];
    } else {
        hook_pos_dgemmt = 0;
        *(void **) &fn = current_backend->blas.dgemmt.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_dgemmt_")));
#else
void flexiblas_chain_dgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_dgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_dgemmtr = 0;

void FC_GLOBAL(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgemmtr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgemmtr.f77_hook_function[0];
    hook_pos_dgemmtr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmtr,DGEMMTR)))));
void FC_GLOBAL3(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmtr,DGEMMTR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmtr,DGEMMTR)))));
void FC_GLOBAL3(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(dgemmtr,DGEMMTR)))));
#else
void FC_GLOBAL2(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemmtr,DGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(dgemmtr,DGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(dgemmtr,DGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_dgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.dgemmtr.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_dgemmtr_")));
#else
void flexiblas_real_dgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_dgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_dgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_dgemmtr++;
    if ( hook_pos_dgemmtr < __flexiblas_hooks->dgemmtr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgemmtr.f77_hook_function[hook_pos_dgemmtr];
    } else {
        hook_pos_dgemmtr = 0;
        *(void **) &fn = current_backend->blas.dgemmtr.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_dgemmtr_")));
#else
void flexiblas_chain_dgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_dgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_dgemv = 0;

void FC_GLOBAL(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgemv.f77_hook_function[0];
    hook_pos_dgemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgemv,DGEMV)))));
void FC_GLOBAL3(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgemv,DGEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgemv,DGEMV)))));
void FC_GLOBAL3(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dgemv,DGEMV)))));
#else
void FC_GLOBAL2(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dgemv,DGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(dgemv,DGEMV)(char* trans, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dgemv,DGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_dgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.dgemv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dgemv_")));
#else
void flexiblas_real_dgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_dgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_dgemv++;
    if ( hook_pos_dgemv < __flexiblas_hooks->dgemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgemv.f77_hook_function[hook_pos_dgemv];
    } else {
        hook_pos_dgemv = 0;
        *(void **) &fn = current_backend->blas.dgemv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dgemv_")));
#else
void flexiblas_chain_dgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_dger = 0;

void FC_GLOBAL(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dger.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dger.f77_hook_function[0];
    hook_pos_dger = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(dger,DGER)))));
void FC_GLOBAL3(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(dger,DGER)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(dger,DGER)))));
void FC_GLOBAL3(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(dger,DGER)))));
#else
void FC_GLOBAL2(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda){ FC_GLOBAL(dger,DGER)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(dger,DGER)(blasint* m, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda){ FC_GLOBAL(dger,DGER)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_dger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.dger.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_dger_")));
#else
void flexiblas_real_dger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_dger_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_dger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_dger++;
    if ( hook_pos_dger < __flexiblas_hooks->dger.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dger.f77_hook_function[hook_pos_dger];
    } else {
        hook_pos_dger = 0;
        *(void **) &fn = current_backend->blas.dger.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_dger_")));
#else
void flexiblas_chain_dger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_dger_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_dnrm2 = 0;

double FC_GLOBAL(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double (*fn_hook) (void* n, void* x, void* incx);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dnrm2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dnrm2.f77_hook_function[0];
    hook_pos_dnrm2 = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) x, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) x, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dnrm2,DNRM2)))));
double FC_GLOBAL3(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dnrm2,DNRM2)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dnrm2,DNRM2)))));
double FC_GLOBAL3(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dnrm2,DNRM2)))));
#else
double FC_GLOBAL2(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx){ return FC_GLOBAL(dnrm2,DNRM2)((void*) n, (void*) x, (void*) incx); }
double FC_GLOBAL3(dnrm2,DNRM2)(blasint* n, double* x, blasint* incx){ return FC_GLOBAL(dnrm2,DNRM2)((void*) n, (void*) x, (void*) incx); }
#endif
#endif



double flexiblas_real_dnrm2_(void* n, void* x, void* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double ret;

    *(void **) &fn = current_backend->blas.dnrm2.f77_blas_function;
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_dnrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_real_dnrm2_")));
#else
double flexiblas_real_dnrm2(void* n, void* x, void* incx){return flexiblas_real_dnrm2_((void*) n, (void*) x, (void*) incx);}
#endif


double flexiblas_chain_dnrm2_(void* n, void* x, void* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double ret;



    hook_pos_dnrm2++;
    if ( hook_pos_dnrm2 < __flexiblas_hooks->dnrm2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dnrm2.f77_hook_function[hook_pos_dnrm2];
    } else {
        hook_pos_dnrm2 = 0;
        *(void **) &fn = current_backend->blas.dnrm2.f77_blas_function;
    }
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_dnrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_chain_dnrm2_")));
#else
double flexiblas_chain_dnrm2(void* n, void* x, void* incx){return flexiblas_chain_dnrm2_((void*) n, (void*) x, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_drot = 0;

void FC_GLOBAL(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);
    void (*fn_hook) (void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.drot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->drot.f77_hook_function[0];
    hook_pos_drot = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);
    } else {
        fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drot,DROT)))));
void FC_GLOBAL3(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drot,DROT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drot,DROT)))));
void FC_GLOBAL3(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drot,DROT)))));
#else
void FC_GLOBAL2(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s){ FC_GLOBAL(drot,DROT)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s); }
void FC_GLOBAL3(drot,DROT)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* c, double* s){ FC_GLOBAL(drot,DROT)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_drot_(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);

    *(void **) &fn = current_backend->blas.drot.f77_blas_function;
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_drot(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_real_drot_")));
#else
void flexiblas_real_drot(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s){flexiblas_real_drot_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);}
#endif


void flexiblas_chain_drot_(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);



    hook_pos_drot++;
    if ( hook_pos_drot < __flexiblas_hooks->drot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->drot.f77_hook_function[hook_pos_drot];
    } else {
        hook_pos_drot = 0;
        *(void **) &fn = current_backend->blas.drot.f77_blas_function;
    }
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_drot(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_chain_drot_")));
#else
void flexiblas_chain_drot(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s){flexiblas_chain_drot_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_drotg = 0;

void FC_GLOBAL(drotg,DROTG)(double* da, double* db, double* c, double* s)
{
    void (*fn) (void* da, void* db, void* c, void* s);
    void (*fn_hook) (void* da, void* db, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.drotg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->drotg.f77_hook_function[0];
    hook_pos_drotg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) da, (void*) db, (void*) c, (void*) s);
    } else {
        fn((void*) da, (void*) db, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(drotg,DROTG)(double* da, double* db, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drotg,DROTG)))));
void FC_GLOBAL3(drotg,DROTG)(double* da, double* db, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drotg,DROTG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(drotg,DROTG)(double* da, double* db, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drotg,DROTG)))));
void FC_GLOBAL3(drotg,DROTG)(double* da, double* db, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(drotg,DROTG)))));
#else
void FC_GLOBAL2(drotg,DROTG)(double* da, double* db, double* c, double* s){ FC_GLOBAL(drotg,DROTG)((void*) da, (void*) db, (void*) c, (void*) s); }
void FC_GLOBAL3(drotg,DROTG)(double* da, double* db, double* c, double* s){ FC_GLOBAL(drotg,DROTG)((void*) da, (void*) db, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_drotg_(void* da, void* db, void* c, void* s)
{
    void (*fn) (void* da, void* db, void* c, void* s);

    *(void **) &fn = current_backend->blas.drotg.f77_blas_function;
    fn((void*) da, (void*) db, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_drotg(void* da, void* db, void* c, void* s) __attribute__((alias("flexiblas_real_drotg_")));
#else
void flexiblas_real_drotg(void* da, void* db, void* c, void* s){flexiblas_real_drotg_((void*) da, (void*) db, (void*) c, (void*) s);}
#endif


void flexiblas_chain_drotg_(void* da, void* db, void* c, void* s)
{
    void (*fn) (void* da, void* db, void* c, void* s);



    hook_pos_drotg++;
    if ( hook_pos_drotg < __flexiblas_hooks->drotg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->drotg.f77_hook_function[hook_pos_drotg];
    } else {
        hook_pos_drotg = 0;
        *(void **) &fn = current_backend->blas.drotg.f77_blas_function;
    }
    fn((void*) da, (void*) db, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_drotg(void* da, void* db, void* c, void* s) __attribute__((alias("flexiblas_chain_drotg_")));
#else
void flexiblas_chain_drotg(void* da, void* db, void* c, void* s){flexiblas_chain_drotg_((void*) da, (void*) db, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_drotm = 0;

void FC_GLOBAL(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);
    void (*fn_hook) (void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.drotm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->drotm.f77_hook_function[0];
    hook_pos_drotm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);
    } else {
        fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotm,DROTM)))));
void FC_GLOBAL3(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotm,DROTM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotm,DROTM)))));
void FC_GLOBAL3(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotm,DROTM)))));
#else
void FC_GLOBAL2(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam){ FC_GLOBAL(drotm,DROTM)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam); }
void FC_GLOBAL3(drotm,DROTM)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy, double* dparam){ FC_GLOBAL(drotm,DROTM)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam); }
#endif
#endif



void flexiblas_real_drotm_(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);

    *(void **) &fn = current_backend->blas.drotm.f77_blas_function;
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);

    return;
}
#ifndef __APPLE__
void flexiblas_real_drotm(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam) __attribute__((alias("flexiblas_real_drotm_")));
#else
void flexiblas_real_drotm(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam){flexiblas_real_drotm_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);}
#endif


void flexiblas_chain_drotm_(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);



    hook_pos_drotm++;
    if ( hook_pos_drotm < __flexiblas_hooks->drotm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->drotm.f77_hook_function[hook_pos_drotm];
    } else {
        hook_pos_drotm = 0;
        *(void **) &fn = current_backend->blas.drotm.f77_blas_function;
    }
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_drotm(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam) __attribute__((alias("flexiblas_chain_drotm_")));
#else
void flexiblas_chain_drotm(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam){flexiblas_chain_drotm_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy, (void*) dparam);}
#endif


static TLS_STORE uint8_t hook_pos_drotmg = 0;

void FC_GLOBAL(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam)
{
    void (*fn) (void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);
    void (*fn_hook) (void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.drotmg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->drotmg.f77_hook_function[0];
    hook_pos_drotmg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);
    } else {
        fn((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotmg,DROTMG)))));
void FC_GLOBAL3(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotmg,DROTMG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotmg,DROTMG)))));
void FC_GLOBAL3(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam) __attribute__((alias(MTS(FC_GLOBAL(drotmg,DROTMG)))));
#else
void FC_GLOBAL2(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam){ FC_GLOBAL(drotmg,DROTMG)((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam); }
void FC_GLOBAL3(drotmg,DROTMG)(double* dd1, double* dd2, double* dx1, double* dy1, double* dparam){ FC_GLOBAL(drotmg,DROTMG)((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam); }
#endif
#endif



void flexiblas_real_drotmg_(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam)
{
    void (*fn) (void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);

    *(void **) &fn = current_backend->blas.drotmg.f77_blas_function;
    fn((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);

    return;
}
#ifndef __APPLE__
void flexiblas_real_drotmg(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam) __attribute__((alias("flexiblas_real_drotmg_")));
#else
void flexiblas_real_drotmg(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam){flexiblas_real_drotmg_((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);}
#endif


void flexiblas_chain_drotmg_(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam)
{
    void (*fn) (void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);



    hook_pos_drotmg++;
    if ( hook_pos_drotmg < __flexiblas_hooks->drotmg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->drotmg.f77_hook_function[hook_pos_drotmg];
    } else {
        hook_pos_drotmg = 0;
        *(void **) &fn = current_backend->blas.drotmg.f77_blas_function;
    }
    fn((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_drotmg(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam) __attribute__((alias("flexiblas_chain_drotmg_")));
#else
void flexiblas_chain_drotmg(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam){flexiblas_chain_drotmg_((void*) dd1, (void*) dd2, (void*) dx1, (void*) dy1, (void*) dparam);}
#endif


static TLS_STORE uint8_t hook_pos_dsbmv = 0;

void FC_GLOBAL(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsbmv.f77_hook_function[0];
    hook_pos_dsbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbmv,DSBMV)))));
void FC_GLOBAL3(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbmv,DSBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbmv,DSBMV)))));
void FC_GLOBAL3(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsbmv,DSBMV)))));
#else
void FC_GLOBAL2(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsbmv,DSBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dsbmv,DSBMV)(char* uplo, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsbmv,DSBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dsbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dsbmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsbmv_")));
#else
void flexiblas_real_dsbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dsbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dsbmv++;
    if ( hook_pos_dsbmv < __flexiblas_hooks->dsbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsbmv.f77_hook_function[hook_pos_dsbmv];
    } else {
        hook_pos_dsbmv = 0;
        *(void **) &fn = current_backend->blas.dsbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsbmv_")));
#else
void flexiblas_chain_dsbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dscal = 0;

void FC_GLOBAL(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx)
{
    void (*fn) (void* n, void* da, void* dx, void* incx);
    void (*fn_hook) (void* n, void* da, void* dx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dscal.f77_hook_function[0];
    hook_pos_dscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) da, (void*) dx, (void*) incx);
    } else {
        fn((void*) n, (void*) da, (void*) dx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dscal,DSCAL)))));
void FC_GLOBAL3(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dscal,DSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dscal,DSCAL)))));
void FC_GLOBAL3(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dscal,DSCAL)))));
#else
void FC_GLOBAL2(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx){ FC_GLOBAL(dscal,DSCAL)((void*) n, (void*) da, (void*) dx, (void*) incx); }
void FC_GLOBAL3(dscal,DSCAL)(blasint* n, double* da, double* dx, blasint* incx){ FC_GLOBAL(dscal,DSCAL)((void*) n, (void*) da, (void*) dx, (void*) incx); }
#endif
#endif



void flexiblas_real_dscal_(void* n, void* da, void* dx, void* incx)
{
    void (*fn) (void* n, void* da, void* dx, void* incx);

    *(void **) &fn = current_backend->blas.dscal.f77_blas_function;
    fn((void*) n, (void*) da, (void*) dx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dscal(void* n, void* da, void* dx, void* incx) __attribute__((alias("flexiblas_real_dscal_")));
#else
void flexiblas_real_dscal(void* n, void* da, void* dx, void* incx){flexiblas_real_dscal_((void*) n, (void*) da, (void*) dx, (void*) incx);}
#endif


void flexiblas_chain_dscal_(void* n, void* da, void* dx, void* incx)
{
    void (*fn) (void* n, void* da, void* dx, void* incx);



    hook_pos_dscal++;
    if ( hook_pos_dscal < __flexiblas_hooks->dscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dscal.f77_hook_function[hook_pos_dscal];
    } else {
        hook_pos_dscal = 0;
        *(void **) &fn = current_backend->blas.dscal.f77_blas_function;
    }
    fn((void*) n, (void*) da, (void*) dx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dscal(void* n, void* da, void* dx, void* incx) __attribute__((alias("flexiblas_chain_dscal_")));
#else
void flexiblas_chain_dscal(void* n, void* da, void* dx, void* incx){flexiblas_chain_dscal_((void*) n, (void*) da, (void*) dx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_dsdot = 0;

double FC_GLOBAL(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy)
{
    double (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    double (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsdot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsdot.f77_hook_function[0];
    hook_pos_dsdot = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    } else {
        ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dsdot,DSDOT)))));
double FC_GLOBAL3(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dsdot,DSDOT)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dsdot,DSDOT)))));
double FC_GLOBAL3(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dsdot,DSDOT)))));
#else
double FC_GLOBAL2(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(dsdot,DSDOT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
double FC_GLOBAL3(dsdot,DSDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(dsdot,DSDOT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



double flexiblas_real_dsdot_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    double (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    double ret;

    *(void **) &fn = current_backend->blas.dsdot.f77_blas_function;
    ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_dsdot(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_dsdot_")));
#else
double flexiblas_real_dsdot(void* n, void* sx, void* incx, void* sy, void* incy){return flexiblas_real_dsdot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


double flexiblas_chain_dsdot_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    double (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    double ret;



    hook_pos_dsdot++;
    if ( hook_pos_dsdot < __flexiblas_hooks->dsdot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsdot.f77_hook_function[hook_pos_dsdot];
    } else {
        hook_pos_dsdot = 0;
        *(void **) &fn = current_backend->blas.dsdot.f77_blas_function;
    }
    ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_dsdot(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_dsdot_")));
#else
double flexiblas_chain_dsdot(void* n, void* sx, void* incx, void* sy, void* incy){return flexiblas_chain_dsdot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_dspmv = 0;

void FC_GLOBAL(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dspmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dspmv.f77_hook_function[0];
    hook_pos_dspmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspmv,DSPMV)))));
void FC_GLOBAL3(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspmv,DSPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspmv,DSPMV)))));
void FC_GLOBAL3(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspmv,DSPMV)))));
#else
void FC_GLOBAL2(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspmv,DSPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dspmv,DSPMV)(char* uplo, blasint* n, double* alpha, double* ap, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspmv,DSPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dspmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dspmv_")));
#else
void flexiblas_real_dspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dspmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dspmv++;
    if ( hook_pos_dspmv < __flexiblas_hooks->dspmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dspmv.f77_hook_function[hook_pos_dspmv];
    } else {
        hook_pos_dspmv = 0;
        *(void **) &fn = current_backend->blas.dspmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dspmv_")));
#else
void flexiblas_chain_dspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dspmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dspr = 0;

void FC_GLOBAL(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dspr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dspr.f77_hook_function[0];
    hook_pos_dspr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr,DSPR)))));
void FC_GLOBAL3(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr,DSPR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr,DSPR)))));
void FC_GLOBAL3(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr,DSPR)))));
#else
void FC_GLOBAL2(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspr,DSPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dspr,DSPR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspr,DSPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dspr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dspr_")));
#else
void flexiblas_real_dspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dspr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dspr++;
    if ( hook_pos_dspr < __flexiblas_hooks->dspr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dspr.f77_hook_function[hook_pos_dspr];
    } else {
        hook_pos_dspr = 0;
        *(void **) &fn = current_backend->blas.dspr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dspr_")));
#else
void flexiblas_chain_dspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dspr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dspr2 = 0;

void FC_GLOBAL(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dspr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dspr2.f77_hook_function[0];
    hook_pos_dspr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr2,DSPR2)))));
void FC_GLOBAL3(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr2,DSPR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr2,DSPR2)))));
void FC_GLOBAL3(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dspr2,DSPR2)))));
#else
void FC_GLOBAL2(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspr2,DSPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dspr2,DSPR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dspr2,DSPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dspr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dspr2_")));
#else
void flexiblas_real_dspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dspr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dspr2++;
    if ( hook_pos_dspr2 < __flexiblas_hooks->dspr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dspr2.f77_hook_function[hook_pos_dspr2];
    } else {
        hook_pos_dspr2 = 0;
        *(void **) &fn = current_backend->blas.dspr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dspr2_")));
#else
void flexiblas_chain_dspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dspr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dswap = 0;

void FC_GLOBAL(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);
    void (*fn_hook) (void* n, void* dx, void* incx, void* dy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dswap.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dswap.f77_hook_function[0];
    hook_pos_dswap = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    } else {
        fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dswap,DSWAP)))));
void FC_GLOBAL3(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dswap,DSWAP)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dswap,DSWAP)))));
void FC_GLOBAL3(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(dswap,DSWAP)))));
#else
void FC_GLOBAL2(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(dswap,DSWAP)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
void FC_GLOBAL3(dswap,DSWAP)(blasint* n, double* dx, blasint* incx, double* dy, blasint* incy){ FC_GLOBAL(dswap,DSWAP)((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy); }
#endif
#endif



void flexiblas_real_dswap_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);

    *(void **) &fn = current_backend->blas.dswap.f77_blas_function;
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dswap(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_real_dswap_")));
#else
void flexiblas_real_dswap(void* n, void* dx, void* incx, void* dy, void* incy){flexiblas_real_dswap_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


void flexiblas_chain_dswap_(void* n, void* dx, void* incx, void* dy, void* incy)
{
    void (*fn) (void* n, void* dx, void* incx, void* dy, void* incy);



    hook_pos_dswap++;
    if ( hook_pos_dswap < __flexiblas_hooks->dswap.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dswap.f77_hook_function[hook_pos_dswap];
    } else {
        hook_pos_dswap = 0;
        *(void **) &fn = current_backend->blas.dswap.f77_blas_function;
    }
    fn((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dswap(void* n, void* dx, void* incx, void* dy, void* incy) __attribute__((alias("flexiblas_chain_dswap_")));
#else
void flexiblas_chain_dswap(void* n, void* dx, void* incx, void* dy, void* incy){flexiblas_chain_dswap_((void*) n, (void*) dx, (void*) incx, (void*) dy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_dsymm = 0;

void FC_GLOBAL(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsymm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsymm.f77_hook_function[0];
    hook_pos_dsymm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymm,DSYMM)))));
void FC_GLOBAL3(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymm,DSYMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymm,DSYMM)))));
void FC_GLOBAL3(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymm,DSYMM)))));
#else
void FC_GLOBAL2(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsymm,DSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dsymm,DSYMM)(char* side, char* uplo, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsymm,DSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dsymm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsymm_")));
#else
void flexiblas_real_dsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dsymm++;
    if ( hook_pos_dsymm < __flexiblas_hooks->dsymm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsymm.f77_hook_function[hook_pos_dsymm];
    } else {
        hook_pos_dsymm = 0;
        *(void **) &fn = current_backend->blas.dsymm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsymm_")));
#else
void flexiblas_chain_dsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dsymv = 0;

void FC_GLOBAL(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsymv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsymv.f77_hook_function[0];
    hook_pos_dsymv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymv,DSYMV)))));
void FC_GLOBAL3(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymv,DSYMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymv,DSYMV)))));
void FC_GLOBAL3(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsymv,DSYMV)))));
#else
void FC_GLOBAL2(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsymv,DSYMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dsymv,DSYMV)(char* uplo, blasint* n, double* alpha, double* a, blasint* lda, double* x, blasint* incx, double* beta, double* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsymv,DSYMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dsymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dsymv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsymv_")));
#else
void flexiblas_real_dsymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsymv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dsymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dsymv++;
    if ( hook_pos_dsymv < __flexiblas_hooks->dsymv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsymv.f77_hook_function[hook_pos_dsymv];
    } else {
        hook_pos_dsymv = 0;
        *(void **) &fn = current_backend->blas.dsymv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsymv_")));
#else
void flexiblas_chain_dsymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsymv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dsyr = 0;

void FC_GLOBAL(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsyr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsyr.f77_hook_function[0];
    hook_pos_dsyr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr,DSYR)))));
void FC_GLOBAL3(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr,DSYR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr,DSYR)))));
void FC_GLOBAL3(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr,DSYR)))));
#else
void FC_GLOBAL2(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsyr,DSYR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dsyr,DSYR)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsyr,DSYR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dsyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dsyr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsyr_")));
#else
void flexiblas_real_dsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dsyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dsyr++;
    if ( hook_pos_dsyr < __flexiblas_hooks->dsyr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsyr.f77_hook_function[hook_pos_dsyr];
    } else {
        hook_pos_dsyr = 0;
        *(void **) &fn = current_backend->blas.dsyr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsyr_")));
#else
void flexiblas_chain_dsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dsyr2 = 0;

void FC_GLOBAL(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsyr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsyr2.f77_hook_function[0];
    hook_pos_dsyr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr2,DSYR2)))));
void FC_GLOBAL3(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr2,DSYR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr2,DSYR2)))));
void FC_GLOBAL3(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(dsyr2,DSYR2)))));
#else
void FC_GLOBAL2(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsyr2,DSYR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(dsyr2,DSYR2)(char* uplo, blasint* n, double* alpha, double* x, blasint* incx, double* y, blasint* incy, double* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(dsyr2,DSYR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_dsyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.dsyr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_dsyr2_")));
#else
void flexiblas_real_dsyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_dsyr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_dsyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_dsyr2++;
    if ( hook_pos_dsyr2 < __flexiblas_hooks->dsyr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsyr2.f77_hook_function[hook_pos_dsyr2];
    } else {
        hook_pos_dsyr2 = 0;
        *(void **) &fn = current_backend->blas.dsyr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_dsyr2_")));
#else
void flexiblas_chain_dsyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_dsyr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_dsyr2k = 0;

void FC_GLOBAL(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsyr2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsyr2k.f77_hook_function[0];
    hook_pos_dsyr2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyr2k,DSYR2K)))));
void FC_GLOBAL3(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyr2k,DSYR2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyr2k,DSYR2K)))));
void FC_GLOBAL3(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyr2k,DSYR2K)))));
#else
void FC_GLOBAL2(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dsyr2k,DSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(dsyr2k,DSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dsyr2k,DSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_dsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.dsyr2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dsyr2k_")));
#else
void flexiblas_real_dsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dsyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_dsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_dsyr2k++;
    if ( hook_pos_dsyr2k < __flexiblas_hooks->dsyr2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsyr2k.f77_hook_function[hook_pos_dsyr2k];
    } else {
        hook_pos_dsyr2k = 0;
        *(void **) &fn = current_backend->blas.dsyr2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dsyr2k_")));
#else
void flexiblas_chain_dsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dsyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_dsyrk = 0;

void FC_GLOBAL(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dsyrk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dsyrk.f77_hook_function[0];
    hook_pos_dsyrk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyrk,DSYRK)))));
void FC_GLOBAL3(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyrk,DSYRK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyrk,DSYRK)))));
void FC_GLOBAL3(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dsyrk,DSYRK)))));
#else
void FC_GLOBAL2(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dsyrk,DSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(dsyrk,DSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double* a, blasint* lda, double* beta, double* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dsyrk,DSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_dsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.dsyrk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dsyrk_")));
#else
void flexiblas_real_dsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dsyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_dsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_dsyrk++;
    if ( hook_pos_dsyrk < __flexiblas_hooks->dsyrk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dsyrk.f77_hook_function[hook_pos_dsyrk];
    } else {
        hook_pos_dsyrk = 0;
        *(void **) &fn = current_backend->blas.dsyrk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dsyrk_")));
#else
void flexiblas_chain_dsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dsyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_dtbmv = 0;

void FC_GLOBAL(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtbmv.f77_hook_function[0];
    hook_pos_dtbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbmv,DTBMV)))));
void FC_GLOBAL3(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbmv,DTBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbmv,DTBMV)))));
void FC_GLOBAL3(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbmv,DTBMV)))));
#else
void FC_GLOBAL2(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtbmv,DTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtbmv,DTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtbmv,DTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtbmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtbmv_")));
#else
void flexiblas_real_dtbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtbmv++;
    if ( hook_pos_dtbmv < __flexiblas_hooks->dtbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtbmv.f77_hook_function[hook_pos_dtbmv];
    } else {
        hook_pos_dtbmv = 0;
        *(void **) &fn = current_backend->blas.dtbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtbmv_")));
#else
void flexiblas_chain_dtbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtbsv = 0;

void FC_GLOBAL(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtbsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtbsv.f77_hook_function[0];
    hook_pos_dtbsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbsv,DTBSV)))));
void FC_GLOBAL3(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbsv,DTBSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbsv,DTBSV)))));
void FC_GLOBAL3(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtbsv,DTBSV)))));
#else
void FC_GLOBAL2(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtbsv,DTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtbsv,DTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtbsv,DTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtbsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtbsv_")));
#else
void flexiblas_real_dtbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtbsv++;
    if ( hook_pos_dtbsv < __flexiblas_hooks->dtbsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtbsv.f77_hook_function[hook_pos_dtbsv];
    } else {
        hook_pos_dtbsv = 0;
        *(void **) &fn = current_backend->blas.dtbsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtbsv_")));
#else
void flexiblas_chain_dtbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtpmv = 0;

void FC_GLOBAL(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtpmv.f77_hook_function[0];
    hook_pos_dtpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpmv,DTPMV)))));
void FC_GLOBAL3(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpmv,DTPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpmv,DTPMV)))));
void FC_GLOBAL3(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpmv,DTPMV)))));
#else
void FC_GLOBAL2(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtpmv,DTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtpmv,DTPMV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtpmv,DTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtpmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtpmv_")));
#else
void flexiblas_real_dtpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtpmv++;
    if ( hook_pos_dtpmv < __flexiblas_hooks->dtpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtpmv.f77_hook_function[hook_pos_dtpmv];
    } else {
        hook_pos_dtpmv = 0;
        *(void **) &fn = current_backend->blas.dtpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtpmv_")));
#else
void flexiblas_chain_dtpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtpsv = 0;

void FC_GLOBAL(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtpsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtpsv.f77_hook_function[0];
    hook_pos_dtpsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpsv,DTPSV)))));
void FC_GLOBAL3(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpsv,DTPSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpsv,DTPSV)))));
void FC_GLOBAL3(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtpsv,DTPSV)))));
#else
void FC_GLOBAL2(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtpsv,DTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtpsv,DTPSV)(char* uplo, char* trans, char* diag, blasint* n, double* ap, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtpsv,DTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtpsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtpsv_")));
#else
void flexiblas_real_dtpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtpsv++;
    if ( hook_pos_dtpsv < __flexiblas_hooks->dtpsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtpsv.f77_hook_function[hook_pos_dtpsv];
    } else {
        hook_pos_dtpsv = 0;
        *(void **) &fn = current_backend->blas.dtpsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtpsv_")));
#else
void flexiblas_chain_dtpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtrmm = 0;

void FC_GLOBAL(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtrmm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtrmm.f77_hook_function[0];
    hook_pos_dtrmm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmm,DTRMM)))));
void FC_GLOBAL3(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmm,DTRMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmm,DTRMM)))));
void FC_GLOBAL3(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmm,DTRMM)))));
#else
void FC_GLOBAL2(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrmm,DTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtrmm,DTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrmm,DTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtrmm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtrmm_")));
#else
void flexiblas_real_dtrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtrmm++;
    if ( hook_pos_dtrmm < __flexiblas_hooks->dtrmm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtrmm.f77_hook_function[hook_pos_dtrmm];
    } else {
        hook_pos_dtrmm = 0;
        *(void **) &fn = current_backend->blas.dtrmm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtrmm_")));
#else
void flexiblas_chain_dtrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtrmv = 0;

void FC_GLOBAL(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtrmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtrmv.f77_hook_function[0];
    hook_pos_dtrmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmv,DTRMV)))));
void FC_GLOBAL3(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmv,DTRMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmv,DTRMV)))));
void FC_GLOBAL3(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrmv,DTRMV)))));
#else
void FC_GLOBAL2(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrmv,DTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtrmv,DTRMV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrmv,DTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtrmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtrmv_")));
#else
void flexiblas_real_dtrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtrmv++;
    if ( hook_pos_dtrmv < __flexiblas_hooks->dtrmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtrmv.f77_hook_function[hook_pos_dtrmv];
    } else {
        hook_pos_dtrmv = 0;
        *(void **) &fn = current_backend->blas.dtrmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtrmv_")));
#else
void flexiblas_chain_dtrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtrsm = 0;

void FC_GLOBAL(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtrsm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtrsm.f77_hook_function[0];
    hook_pos_dtrsm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsm,DTRSM)))));
void FC_GLOBAL3(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsm,DTRSM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsm,DTRSM)))));
void FC_GLOBAL3(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsm,DTRSM)))));
#else
void FC_GLOBAL2(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrsm,DTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtrsm,DTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrsm,DTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtrsm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtrsm_")));
#else
void flexiblas_real_dtrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtrsm++;
    if ( hook_pos_dtrsm < __flexiblas_hooks->dtrsm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtrsm.f77_hook_function[hook_pos_dtrsm];
    } else {
        hook_pos_dtrsm = 0;
        *(void **) &fn = current_backend->blas.dtrsm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtrsm_")));
#else
void flexiblas_chain_dtrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dtrsv = 0;

void FC_GLOBAL(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dtrsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dtrsv.f77_hook_function[0];
    hook_pos_dtrsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsv,DTRSV)))));
void FC_GLOBAL3(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsv,DTRSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsv,DTRSV)))));
void FC_GLOBAL3(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(dtrsv,DTRSV)))));
#else
void FC_GLOBAL2(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrsv,DTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(dtrsv,DTRSV)(char* uplo, char* trans, char* diag, blasint* n, double* a, blasint* lda, double* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(dtrsv,DTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_dtrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.dtrsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dtrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_dtrsv_")));
#else
void flexiblas_real_dtrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_dtrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_dtrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_dtrsv++;
    if ( hook_pos_dtrsv < __flexiblas_hooks->dtrsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dtrsv.f77_hook_function[hook_pos_dtrsv];
    } else {
        hook_pos_dtrsv = 0;
        *(void **) &fn = current_backend->blas.dtrsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dtrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_dtrsv_")));
#else
void flexiblas_chain_dtrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_dtrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_dzasum = 0;

double FC_GLOBAL(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx)
{
    double (*fn) (void* n, void* zx, void* incx);
    double (*fn_hook) (void* n, void* zx, void* incx);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dzasum.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dzasum.f77_hook_function[0];
    hook_pos_dzasum = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) zx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) zx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dzasum,DZASUM)))));
double FC_GLOBAL3(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dzasum,DZASUM)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dzasum,DZASUM)))));
double FC_GLOBAL3(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dzasum,DZASUM)))));
#else
double FC_GLOBAL2(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx){ return FC_GLOBAL(dzasum,DZASUM)((void*) n, (void*) zx, (void*) incx); }
double FC_GLOBAL3(dzasum,DZASUM)(blasint* n, double complex* zx, blasint* incx){ return FC_GLOBAL(dzasum,DZASUM)((void*) n, (void*) zx, (void*) incx); }
#endif
#endif



double flexiblas_real_dzasum_(void* n, void* zx, void* incx)
{
    double (*fn) (void* n, void* zx, void* incx);
    double ret;

    *(void **) &fn = current_backend->blas.dzasum.f77_blas_function;
    ret = fn((void*) n, (void*) zx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_dzasum(void* n, void* zx, void* incx) __attribute__((alias("flexiblas_real_dzasum_")));
#else
double flexiblas_real_dzasum(void* n, void* zx, void* incx){return flexiblas_real_dzasum_((void*) n, (void*) zx, (void*) incx);}
#endif


double flexiblas_chain_dzasum_(void* n, void* zx, void* incx)
{
    double (*fn) (void* n, void* zx, void* incx);
    double ret;



    hook_pos_dzasum++;
    if ( hook_pos_dzasum < __flexiblas_hooks->dzasum.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dzasum.f77_hook_function[hook_pos_dzasum];
    } else {
        hook_pos_dzasum = 0;
        *(void **) &fn = current_backend->blas.dzasum.f77_blas_function;
    }
    ret = fn((void*) n, (void*) zx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_dzasum(void* n, void* zx, void* incx) __attribute__((alias("flexiblas_chain_dzasum_")));
#else
double flexiblas_chain_dzasum(void* n, void* zx, void* incx){return flexiblas_chain_dzasum_((void*) n, (void*) zx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_dznrm2 = 0;

double FC_GLOBAL(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double (*fn_hook) (void* n, void* x, void* incx);
    double ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dznrm2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dznrm2.f77_hook_function[0];
    hook_pos_dznrm2 = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) x, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) x, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
double FC_GLOBAL2(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dznrm2,DZNRM2)))));
double FC_GLOBAL3(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dznrm2,DZNRM2)))));
#else
#ifndef __APPLE__
double FC_GLOBAL2(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dznrm2,DZNRM2)))));
double FC_GLOBAL3(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(dznrm2,DZNRM2)))));
#else
double FC_GLOBAL2(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx){ return FC_GLOBAL(dznrm2,DZNRM2)((void*) n, (void*) x, (void*) incx); }
double FC_GLOBAL3(dznrm2,DZNRM2)(blasint* n, double complex* x, blasint* incx){ return FC_GLOBAL(dznrm2,DZNRM2)((void*) n, (void*) x, (void*) incx); }
#endif
#endif



double flexiblas_real_dznrm2_(void* n, void* x, void* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double ret;

    *(void **) &fn = current_backend->blas.dznrm2.f77_blas_function;
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_real_dznrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_real_dznrm2_")));
#else
double flexiblas_real_dznrm2(void* n, void* x, void* incx){return flexiblas_real_dznrm2_((void*) n, (void*) x, (void*) incx);}
#endif


double flexiblas_chain_dznrm2_(void* n, void* x, void* incx)
{
    double (*fn) (void* n, void* x, void* incx);
    double ret;



    hook_pos_dznrm2++;
    if ( hook_pos_dznrm2 < __flexiblas_hooks->dznrm2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dznrm2.f77_hook_function[hook_pos_dznrm2];
    } else {
        hook_pos_dznrm2 = 0;
        *(void **) &fn = current_backend->blas.dznrm2.f77_blas_function;
    }
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
double flexiblas_chain_dznrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_chain_dznrm2_")));
#else
double flexiblas_chain_dznrm2(void* n, void* x, void* incx){return flexiblas_chain_dznrm2_((void*) n, (void*) x, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_icamax = 0;

blasint FC_GLOBAL(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx)
{
    blasint (*fn) (void* n, void* cx, void* incx);
    blasint (*fn_hook) (void* n, void* cx, void* incx);
    blasint ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.icamax.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->icamax.f77_hook_function[0];
    hook_pos_icamax = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) cx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) cx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
blasint FC_GLOBAL2(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(icamax,ICAMAX)))));
blasint FC_GLOBAL3(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(icamax,ICAMAX)))));
#else
#ifndef __APPLE__
blasint FC_GLOBAL2(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(icamax,ICAMAX)))));
blasint FC_GLOBAL3(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(icamax,ICAMAX)))));
#else
blasint FC_GLOBAL2(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx){ return FC_GLOBAL(icamax,ICAMAX)((void*) n, (void*) cx, (void*) incx); }
blasint FC_GLOBAL3(icamax,ICAMAX)(blasint* n, float complex* cx, blasint* incx){ return FC_GLOBAL(icamax,ICAMAX)((void*) n, (void*) cx, (void*) incx); }
#endif
#endif



blasint flexiblas_real_icamax_(void* n, void* cx, void* incx)
{
    blasint (*fn) (void* n, void* cx, void* incx);
    blasint ret;

    *(void **) &fn = current_backend->blas.icamax.f77_blas_function;
    ret = fn((void*) n, (void*) cx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_real_icamax(void* n, void* cx, void* incx) __attribute__((alias("flexiblas_real_icamax_")));
#else
blasint flexiblas_real_icamax(void* n, void* cx, void* incx){return flexiblas_real_icamax_((void*) n, (void*) cx, (void*) incx);}
#endif


blasint flexiblas_chain_icamax_(void* n, void* cx, void* incx)
{
    blasint (*fn) (void* n, void* cx, void* incx);
    blasint ret;



    hook_pos_icamax++;
    if ( hook_pos_icamax < __flexiblas_hooks->icamax.nhook ) {
        *(void **) &fn = __flexiblas_hooks->icamax.f77_hook_function[hook_pos_icamax];
    } else {
        hook_pos_icamax = 0;
        *(void **) &fn = current_backend->blas.icamax.f77_blas_function;
    }
    ret = fn((void*) n, (void*) cx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_chain_icamax(void* n, void* cx, void* incx) __attribute__((alias("flexiblas_chain_icamax_")));
#else
blasint flexiblas_chain_icamax(void* n, void* cx, void* incx){return flexiblas_chain_icamax_((void*) n, (void*) cx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_idamax = 0;

blasint FC_GLOBAL(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx)
{
    blasint (*fn) (void* n, void* dx, void* incx);
    blasint (*fn_hook) (void* n, void* dx, void* incx);
    blasint ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.idamax.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->idamax.f77_hook_function[0];
    hook_pos_idamax = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) dx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) dx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
blasint FC_GLOBAL2(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(idamax,IDAMAX)))));
blasint FC_GLOBAL3(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(idamax,IDAMAX)))));
#else
#ifndef __APPLE__
blasint FC_GLOBAL2(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(idamax,IDAMAX)))));
blasint FC_GLOBAL3(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(idamax,IDAMAX)))));
#else
blasint FC_GLOBAL2(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx){ return FC_GLOBAL(idamax,IDAMAX)((void*) n, (void*) dx, (void*) incx); }
blasint FC_GLOBAL3(idamax,IDAMAX)(blasint* n, double* dx, blasint* incx){ return FC_GLOBAL(idamax,IDAMAX)((void*) n, (void*) dx, (void*) incx); }
#endif
#endif



blasint flexiblas_real_idamax_(void* n, void* dx, void* incx)
{
    blasint (*fn) (void* n, void* dx, void* incx);
    blasint ret;

    *(void **) &fn = current_backend->blas.idamax.f77_blas_function;
    ret = fn((void*) n, (void*) dx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_real_idamax(void* n, void* dx, void* incx) __attribute__((alias("flexiblas_real_idamax_")));
#else
blasint flexiblas_real_idamax(void* n, void* dx, void* incx){return flexiblas_real_idamax_((void*) n, (void*) dx, (void*) incx);}
#endif


blasint flexiblas_chain_idamax_(void* n, void* dx, void* incx)
{
    blasint (*fn) (void* n, void* dx, void* incx);
    blasint ret;



    hook_pos_idamax++;
    if ( hook_pos_idamax < __flexiblas_hooks->idamax.nhook ) {
        *(void **) &fn = __flexiblas_hooks->idamax.f77_hook_function[hook_pos_idamax];
    } else {
        hook_pos_idamax = 0;
        *(void **) &fn = current_backend->blas.idamax.f77_blas_function;
    }
    ret = fn((void*) n, (void*) dx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_chain_idamax(void* n, void* dx, void* incx) __attribute__((alias("flexiblas_chain_idamax_")));
#else
blasint flexiblas_chain_idamax(void* n, void* dx, void* incx){return flexiblas_chain_idamax_((void*) n, (void*) dx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_isamax = 0;

blasint FC_GLOBAL(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx)
{
    blasint (*fn) (void* n, void* sx, void* incx);
    blasint (*fn_hook) (void* n, void* sx, void* incx);
    blasint ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.isamax.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->isamax.f77_hook_function[0];
    hook_pos_isamax = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) sx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) sx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
blasint FC_GLOBAL2(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(isamax,ISAMAX)))));
blasint FC_GLOBAL3(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(isamax,ISAMAX)))));
#else
#ifndef __APPLE__
blasint FC_GLOBAL2(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(isamax,ISAMAX)))));
blasint FC_GLOBAL3(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(isamax,ISAMAX)))));
#else
blasint FC_GLOBAL2(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx){ return FC_GLOBAL(isamax,ISAMAX)((void*) n, (void*) sx, (void*) incx); }
blasint FC_GLOBAL3(isamax,ISAMAX)(blasint* n, float* sx, blasint* incx){ return FC_GLOBAL(isamax,ISAMAX)((void*) n, (void*) sx, (void*) incx); }
#endif
#endif



blasint flexiblas_real_isamax_(void* n, void* sx, void* incx)
{
    blasint (*fn) (void* n, void* sx, void* incx);
    blasint ret;

    *(void **) &fn = current_backend->blas.isamax.f77_blas_function;
    ret = fn((void*) n, (void*) sx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_real_isamax(void* n, void* sx, void* incx) __attribute__((alias("flexiblas_real_isamax_")));
#else
blasint flexiblas_real_isamax(void* n, void* sx, void* incx){return flexiblas_real_isamax_((void*) n, (void*) sx, (void*) incx);}
#endif


blasint flexiblas_chain_isamax_(void* n, void* sx, void* incx)
{
    blasint (*fn) (void* n, void* sx, void* incx);
    blasint ret;



    hook_pos_isamax++;
    if ( hook_pos_isamax < __flexiblas_hooks->isamax.nhook ) {
        *(void **) &fn = __flexiblas_hooks->isamax.f77_hook_function[hook_pos_isamax];
    } else {
        hook_pos_isamax = 0;
        *(void **) &fn = current_backend->blas.isamax.f77_blas_function;
    }
    ret = fn((void*) n, (void*) sx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_chain_isamax(void* n, void* sx, void* incx) __attribute__((alias("flexiblas_chain_isamax_")));
#else
blasint flexiblas_chain_isamax(void* n, void* sx, void* incx){return flexiblas_chain_isamax_((void*) n, (void*) sx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_izamax = 0;

blasint FC_GLOBAL(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx)
{
    blasint (*fn) (void* n, void* zx, void* incx);
    blasint (*fn_hook) (void* n, void* zx, void* incx);
    blasint ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.izamax.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->izamax.f77_hook_function[0];
    hook_pos_izamax = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) zx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) zx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
blasint FC_GLOBAL2(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(izamax,IZAMAX)))));
blasint FC_GLOBAL3(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(izamax,IZAMAX)))));
#else
#ifndef __APPLE__
blasint FC_GLOBAL2(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(izamax,IZAMAX)))));
blasint FC_GLOBAL3(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(izamax,IZAMAX)))));
#else
blasint FC_GLOBAL2(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx){ return FC_GLOBAL(izamax,IZAMAX)((void*) n, (void*) zx, (void*) incx); }
blasint FC_GLOBAL3(izamax,IZAMAX)(blasint* n, double complex* zx, blasint* incx){ return FC_GLOBAL(izamax,IZAMAX)((void*) n, (void*) zx, (void*) incx); }
#endif
#endif



blasint flexiblas_real_izamax_(void* n, void* zx, void* incx)
{
    blasint (*fn) (void* n, void* zx, void* incx);
    blasint ret;

    *(void **) &fn = current_backend->blas.izamax.f77_blas_function;
    ret = fn((void*) n, (void*) zx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_real_izamax(void* n, void* zx, void* incx) __attribute__((alias("flexiblas_real_izamax_")));
#else
blasint flexiblas_real_izamax(void* n, void* zx, void* incx){return flexiblas_real_izamax_((void*) n, (void*) zx, (void*) incx);}
#endif


blasint flexiblas_chain_izamax_(void* n, void* zx, void* incx)
{
    blasint (*fn) (void* n, void* zx, void* incx);
    blasint ret;



    hook_pos_izamax++;
    if ( hook_pos_izamax < __flexiblas_hooks->izamax.nhook ) {
        *(void **) &fn = __flexiblas_hooks->izamax.f77_hook_function[hook_pos_izamax];
    } else {
        hook_pos_izamax = 0;
        *(void **) &fn = current_backend->blas.izamax.f77_blas_function;
    }
    ret = fn((void*) n, (void*) zx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
blasint flexiblas_chain_izamax(void* n, void* zx, void* incx) __attribute__((alias("flexiblas_chain_izamax_")));
#else
blasint flexiblas_chain_izamax(void* n, void* zx, void* incx){return flexiblas_chain_izamax_((void*) n, (void*) zx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_sasum = 0;

float FC_GLOBAL(sasum,SASUM)(blasint* n, float* sx, blasint* incx)
{
    float (*fn) (void* n, void* sx, void* incx);
    float (*fn_hook) (void* n, void* sx, void* incx);
    float ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sasum.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sasum.f77_hook_function[0];
    hook_pos_sasum = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) sx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) sx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(sasum,SASUM)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sasum,SASUM)))));
float FC_GLOBAL3(sasum,SASUM)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sasum,SASUM)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(sasum,SASUM)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sasum,SASUM)))));
float FC_GLOBAL3(sasum,SASUM)(blasint* n, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sasum,SASUM)))));
#else
float FC_GLOBAL2(sasum,SASUM)(blasint* n, float* sx, blasint* incx){ return FC_GLOBAL(sasum,SASUM)((void*) n, (void*) sx, (void*) incx); }
float FC_GLOBAL3(sasum,SASUM)(blasint* n, float* sx, blasint* incx){ return FC_GLOBAL(sasum,SASUM)((void*) n, (void*) sx, (void*) incx); }
#endif
#endif



float flexiblas_real_sasum_(void* n, void* sx, void* incx)
{
    float (*fn) (void* n, void* sx, void* incx);
    float ret;

    *(void **) &fn = current_backend->blas.sasum.f77_blas_function;
    ret = fn((void*) n, (void*) sx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_sasum(void* n, void* sx, void* incx) __attribute__((alias("flexiblas_real_sasum_")));
#else
float flexiblas_real_sasum(void* n, void* sx, void* incx){return flexiblas_real_sasum_((void*) n, (void*) sx, (void*) incx);}
#endif


float flexiblas_chain_sasum_(void* n, void* sx, void* incx)
{
    float (*fn) (void* n, void* sx, void* incx);
    float ret;



    hook_pos_sasum++;
    if ( hook_pos_sasum < __flexiblas_hooks->sasum.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sasum.f77_hook_function[hook_pos_sasum];
    } else {
        hook_pos_sasum = 0;
        *(void **) &fn = current_backend->blas.sasum.f77_blas_function;
    }
    ret = fn((void*) n, (void*) sx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_sasum(void* n, void* sx, void* incx) __attribute__((alias("flexiblas_chain_sasum_")));
#else
float flexiblas_chain_sasum(void* n, void* sx, void* incx){return flexiblas_chain_sasum_((void*) n, (void*) sx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_saxpy = 0;

void FC_GLOBAL(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sy, void* incy);
    void (*fn_hook) (void* n, void* sa, void* sx, void* incx, void* sy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.saxpy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->saxpy.f77_hook_function[0];
    hook_pos_saxpy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    } else {
        fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpy,SAXPY)))));
void FC_GLOBAL3(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpy,SAXPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpy,SAXPY)))));
void FC_GLOBAL3(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpy,SAXPY)))));
#else
void FC_GLOBAL2(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(saxpy,SAXPY)((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
void FC_GLOBAL3(saxpy,SAXPY)(blasint* n, float* sa, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(saxpy,SAXPY)((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



void flexiblas_real_saxpy_(void* n, void* sa, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sy, void* incy);

    *(void **) &fn = current_backend->blas.saxpy.f77_blas_function;
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_saxpy(void* n, void* sa, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_saxpy_")));
#else
void flexiblas_real_saxpy(void* n, void* sa, void* sx, void* incx, void* sy, void* incy){flexiblas_real_saxpy_((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


void flexiblas_chain_saxpy_(void* n, void* sa, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sy, void* incy);



    hook_pos_saxpy++;
    if ( hook_pos_saxpy < __flexiblas_hooks->saxpy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->saxpy.f77_hook_function[hook_pos_saxpy];
    } else {
        hook_pos_saxpy = 0;
        *(void **) &fn = current_backend->blas.saxpy.f77_blas_function;
    }
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_saxpy(void* n, void* sa, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_saxpy_")));
#else
void flexiblas_chain_saxpy(void* n, void* sa, void* sx, void* incx, void* sy, void* incy){flexiblas_chain_saxpy_((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_scasum = 0;

float FC_GLOBAL(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx)
{
    float (*fn) (void* n, void* cx, void* incx);
    float (*fn_hook) (void* n, void* cx, void* incx);
    float ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.scasum.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->scasum.f77_hook_function[0];
    hook_pos_scasum = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) cx, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) cx, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scasum,SCASUM)))));
float FC_GLOBAL3(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scasum,SCASUM)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scasum,SCASUM)))));
float FC_GLOBAL3(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scasum,SCASUM)))));
#else
float FC_GLOBAL2(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx){ return FC_GLOBAL(scasum,SCASUM)((void*) n, (void*) cx, (void*) incx); }
float FC_GLOBAL3(scasum,SCASUM)(blasint* n, float complex* cx, blasint* incx){ return FC_GLOBAL(scasum,SCASUM)((void*) n, (void*) cx, (void*) incx); }
#endif
#endif



float flexiblas_real_scasum_(void* n, void* cx, void* incx)
{
    float (*fn) (void* n, void* cx, void* incx);
    float ret;

    *(void **) &fn = current_backend->blas.scasum.f77_blas_function;
    ret = fn((void*) n, (void*) cx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_scasum(void* n, void* cx, void* incx) __attribute__((alias("flexiblas_real_scasum_")));
#else
float flexiblas_real_scasum(void* n, void* cx, void* incx){return flexiblas_real_scasum_((void*) n, (void*) cx, (void*) incx);}
#endif


float flexiblas_chain_scasum_(void* n, void* cx, void* incx)
{
    float (*fn) (void* n, void* cx, void* incx);
    float ret;



    hook_pos_scasum++;
    if ( hook_pos_scasum < __flexiblas_hooks->scasum.nhook ) {
        *(void **) &fn = __flexiblas_hooks->scasum.f77_hook_function[hook_pos_scasum];
    } else {
        hook_pos_scasum = 0;
        *(void **) &fn = current_backend->blas.scasum.f77_blas_function;
    }
    ret = fn((void*) n, (void*) cx, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_scasum(void* n, void* cx, void* incx) __attribute__((alias("flexiblas_chain_scasum_")));
#else
float flexiblas_chain_scasum(void* n, void* cx, void* incx){return flexiblas_chain_scasum_((void*) n, (void*) cx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_scnrm2 = 0;

float FC_GLOBAL(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float (*fn_hook) (void* n, void* x, void* incx);
    float ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.scnrm2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->scnrm2.f77_hook_function[0];
    hook_pos_scnrm2 = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) x, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) x, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scnrm2,SCNRM2)))));
float FC_GLOBAL3(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scnrm2,SCNRM2)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scnrm2,SCNRM2)))));
float FC_GLOBAL3(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(scnrm2,SCNRM2)))));
#else
float FC_GLOBAL2(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx){ return FC_GLOBAL(scnrm2,SCNRM2)((void*) n, (void*) x, (void*) incx); }
float FC_GLOBAL3(scnrm2,SCNRM2)(blasint* n, float complex* x, blasint* incx){ return FC_GLOBAL(scnrm2,SCNRM2)((void*) n, (void*) x, (void*) incx); }
#endif
#endif



float flexiblas_real_scnrm2_(void* n, void* x, void* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float ret;

    *(void **) &fn = current_backend->blas.scnrm2.f77_blas_function;
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_scnrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_real_scnrm2_")));
#else
float flexiblas_real_scnrm2(void* n, void* x, void* incx){return flexiblas_real_scnrm2_((void*) n, (void*) x, (void*) incx);}
#endif


float flexiblas_chain_scnrm2_(void* n, void* x, void* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float ret;



    hook_pos_scnrm2++;
    if ( hook_pos_scnrm2 < __flexiblas_hooks->scnrm2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->scnrm2.f77_hook_function[hook_pos_scnrm2];
    } else {
        hook_pos_scnrm2 = 0;
        *(void **) &fn = current_backend->blas.scnrm2.f77_blas_function;
    }
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_scnrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_chain_scnrm2_")));
#else
float flexiblas_chain_scnrm2(void* n, void* x, void* incx){return flexiblas_chain_scnrm2_((void*) n, (void*) x, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_scopy = 0;

void FC_GLOBAL(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    void (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.scopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->scopy.f77_hook_function[0];
    hook_pos_scopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    } else {
        fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(scopy,SCOPY)))));
void FC_GLOBAL3(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(scopy,SCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(scopy,SCOPY)))));
void FC_GLOBAL3(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(scopy,SCOPY)))));
#else
void FC_GLOBAL2(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(scopy,SCOPY)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
void FC_GLOBAL3(scopy,SCOPY)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(scopy,SCOPY)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



void flexiblas_real_scopy_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);

    *(void **) &fn = current_backend->blas.scopy.f77_blas_function;
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_scopy(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_scopy_")));
#else
void flexiblas_real_scopy(void* n, void* sx, void* incx, void* sy, void* incy){flexiblas_real_scopy_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


void flexiblas_chain_scopy_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);



    hook_pos_scopy++;
    if ( hook_pos_scopy < __flexiblas_hooks->scopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->scopy.f77_hook_function[hook_pos_scopy];
    } else {
        hook_pos_scopy = 0;
        *(void **) &fn = current_backend->blas.scopy.f77_blas_function;
    }
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_scopy(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_scopy_")));
#else
void flexiblas_chain_scopy(void* n, void* sx, void* incx, void* sy, void* incy){flexiblas_chain_scopy_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_sdot = 0;

float FC_GLOBAL(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy)
{
    float ret;
    if (current_backend->info.float_function_defect) {
        double (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
        double (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy);
        if ( current_backend->post_init != 0 ) {
            __flexiblas_backend_init(current_backend);
            current_backend->post_init = 0;
        }
        *(void **) &fn = current_backend->blas.sdot.f77_blas_function;
        *(void **) &fn_hook = __flexiblas_hooks->sdot.f77_hook_function[0];
        hook_pos_sdot = 0;
        if ( fn_hook != NULL) {
            ret = fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
        } else {
            ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
        }
    } else {
        float (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
        float (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy);
        if ( current_backend->post_init != 0 ) {
            __flexiblas_backend_init(current_backend);
            current_backend->post_init = 0;
        }
        *(void **) &fn = current_backend->blas.sdot.f77_blas_function;
        *(void **) &fn_hook = __flexiblas_hooks->sdot.f77_hook_function[0];
        hook_pos_sdot = 0;
        if ( fn_hook != NULL) {
            ret = fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
        } else {
            ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
        }
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdot,SDOT)))));
float FC_GLOBAL3(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdot,SDOT)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdot,SDOT)))));
float FC_GLOBAL3(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdot,SDOT)))));
#else
float FC_GLOBAL2(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(sdot,SDOT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
float FC_GLOBAL3(sdot,SDOT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(sdot,SDOT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



float flexiblas_real_sdot_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    float (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    float ret;

    *(void **) &fn = current_backend->blas.sdot.f77_blas_function;
    ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_sdot(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_sdot_")));
#else
float flexiblas_real_sdot(void* n, void* sx, void* incx, void* sy, void* incy){return flexiblas_real_sdot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


float flexiblas_chain_sdot_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    float (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    float ret;



    hook_pos_sdot++;
    if ( hook_pos_sdot < __flexiblas_hooks->sdot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sdot.f77_hook_function[hook_pos_sdot];
    } else {
        hook_pos_sdot = 0;
        *(void **) &fn = current_backend->blas.sdot.f77_blas_function;
    }
    ret = fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_sdot(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_sdot_")));
#else
float flexiblas_chain_sdot(void* n, void* sx, void* incx, void* sy, void* incy){return flexiblas_chain_sdot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_sdsdot = 0;

float FC_GLOBAL(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy)
{
    float (*fn) (void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
    float (*fn_hook) (void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
    float ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sdsdot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sdsdot.f77_hook_function[0];
    hook_pos_sdsdot = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    } else {
        ret = fn((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdsdot,SDSDOT)))));
float FC_GLOBAL3(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdsdot,SDSDOT)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdsdot,SDSDOT)))));
float FC_GLOBAL3(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sdsdot,SDSDOT)))));
#else
float FC_GLOBAL2(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(sdsdot,SDSDOT)((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
float FC_GLOBAL3(sdsdot,SDSDOT)(blasint* n, float* sb, float* sx, blasint* incx, float* sy, blasint* incy){ return FC_GLOBAL(sdsdot,SDSDOT)((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



float flexiblas_real_sdsdot_(void* n, void* sb, void* sx, void* incx, void* sy, void* incy)
{
    float (*fn) (void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
    float ret;

    *(void **) &fn = current_backend->blas.sdsdot.f77_blas_function;
    ret = fn((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_sdsdot(void* n, void* sb, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_sdsdot_")));
#else
float flexiblas_real_sdsdot(void* n, void* sb, void* sx, void* incx, void* sy, void* incy){return flexiblas_real_sdsdot_((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


float flexiblas_chain_sdsdot_(void* n, void* sb, void* sx, void* incx, void* sy, void* incy)
{
    float (*fn) (void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
    float ret;



    hook_pos_sdsdot++;
    if ( hook_pos_sdsdot < __flexiblas_hooks->sdsdot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sdsdot.f77_hook_function[hook_pos_sdsdot];
    } else {
        hook_pos_sdsdot = 0;
        *(void **) &fn = current_backend->blas.sdsdot.f77_blas_function;
    }
    ret = fn((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_sdsdot(void* n, void* sb, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_sdsdot_")));
#else
float flexiblas_chain_sdsdot(void* n, void* sb, void* sx, void* incx, void* sy, void* incy){return flexiblas_chain_sdsdot_((void*) n, (void*) sb, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_sgbmv = 0;

void FC_GLOBAL(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgbmv.f77_hook_function[0];
    hook_pos_sgbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgbmv,SGBMV)))));
void FC_GLOBAL3(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgbmv,SGBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgbmv,SGBMV)))));
void FC_GLOBAL3(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgbmv,SGBMV)))));
#else
void FC_GLOBAL2(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(sgbmv,SGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(sgbmv,SGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(sgbmv,SGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_sgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.sgbmv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_sgbmv_")));
#else
void flexiblas_real_sgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_sgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_sgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_sgbmv++;
    if ( hook_pos_sgbmv < __flexiblas_hooks->sgbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgbmv.f77_hook_function[hook_pos_sgbmv];
    } else {
        hook_pos_sgbmv = 0;
        *(void **) &fn = current_backend->blas.sgbmv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_sgbmv_")));
#else
void flexiblas_chain_sgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_sgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_sgemm = 0;

void FC_GLOBAL(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgemm.f77_hook_function[0];
    hook_pos_sgemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemm,SGEMM)))));
void FC_GLOBAL3(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemm,SGEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemm,SGEMM)))));
void FC_GLOBAL3(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemm,SGEMM)))));
#else
void FC_GLOBAL2(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemm,SGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(sgemm,SGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemm,SGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_sgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.sgemm.f77_blas_function;
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_sgemm_")));
#else
void flexiblas_real_sgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_sgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_sgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_sgemm++;
    if ( hook_pos_sgemm < __flexiblas_hooks->sgemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgemm.f77_hook_function[hook_pos_sgemm];
    } else {
        hook_pos_sgemm = 0;
        *(void **) &fn = current_backend->blas.sgemm.f77_blas_function;
    }
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_sgemm_")));
#else
void flexiblas_chain_sgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_sgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_sgemmt = 0;

void FC_GLOBAL(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgemmt.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgemmt.f77_hook_function[0];
    hook_pos_sgemmt = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmt,SGEMMT)))));
void FC_GLOBAL3(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmt,SGEMMT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmt,SGEMMT)))));
void FC_GLOBAL3(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmt,SGEMMT)))));
#else
void FC_GLOBAL2(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemmt,SGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(sgemmt,SGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemmt,SGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_sgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.sgemmt.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_sgemmt_")));
#else
void flexiblas_real_sgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_sgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_sgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_sgemmt++;
    if ( hook_pos_sgemmt < __flexiblas_hooks->sgemmt.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgemmt.f77_hook_function[hook_pos_sgemmt];
    } else {
        hook_pos_sgemmt = 0;
        *(void **) &fn = current_backend->blas.sgemmt.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_sgemmt_")));
#else
void flexiblas_chain_sgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_sgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_sgemmtr = 0;

void FC_GLOBAL(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgemmtr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgemmtr.f77_hook_function[0];
    hook_pos_sgemmtr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmtr,SGEMMTR)))));
void FC_GLOBAL3(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmtr,SGEMMTR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmtr,SGEMMTR)))));
void FC_GLOBAL3(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(sgemmtr,SGEMMTR)))));
#else
void FC_GLOBAL2(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemmtr,SGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(sgemmtr,SGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(sgemmtr,SGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_sgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.sgemmtr.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_sgemmtr_")));
#else
void flexiblas_real_sgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_sgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_sgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_sgemmtr++;
    if ( hook_pos_sgemmtr < __flexiblas_hooks->sgemmtr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgemmtr.f77_hook_function[hook_pos_sgemmtr];
    } else {
        hook_pos_sgemmtr = 0;
        *(void **) &fn = current_backend->blas.sgemmtr.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_sgemmtr_")));
#else
void flexiblas_chain_sgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_sgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_sgemv = 0;

void FC_GLOBAL(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgemv.f77_hook_function[0];
    hook_pos_sgemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgemv,SGEMV)))));
void FC_GLOBAL3(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgemv,SGEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgemv,SGEMV)))));
void FC_GLOBAL3(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(sgemv,SGEMV)))));
#else
void FC_GLOBAL2(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(sgemv,SGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(sgemv,SGEMV)(char* trans, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(sgemv,SGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_sgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.sgemv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_sgemv_")));
#else
void flexiblas_real_sgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_sgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_sgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_sgemv++;
    if ( hook_pos_sgemv < __flexiblas_hooks->sgemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgemv.f77_hook_function[hook_pos_sgemv];
    } else {
        hook_pos_sgemv = 0;
        *(void **) &fn = current_backend->blas.sgemv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_sgemv_")));
#else
void flexiblas_chain_sgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_sgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_sger = 0;

void FC_GLOBAL(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sger.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sger.f77_hook_function[0];
    hook_pos_sger = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(sger,SGER)))));
void FC_GLOBAL3(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(sger,SGER)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(sger,SGER)))));
void FC_GLOBAL3(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(sger,SGER)))));
#else
void FC_GLOBAL2(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda){ FC_GLOBAL(sger,SGER)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(sger,SGER)(blasint* m, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda){ FC_GLOBAL(sger,SGER)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_sger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.sger.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_sger_")));
#else
void flexiblas_real_sger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_sger_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_sger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_sger++;
    if ( hook_pos_sger < __flexiblas_hooks->sger.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sger.f77_hook_function[hook_pos_sger];
    } else {
        hook_pos_sger = 0;
        *(void **) &fn = current_backend->blas.sger.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_sger_")));
#else
void flexiblas_chain_sger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_sger_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_snrm2 = 0;

float FC_GLOBAL(snrm2,SNRM2)(blasint* n, float* x, blasint* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float (*fn_hook) (void* n, void* x, void* incx);
    float ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.snrm2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->snrm2.f77_hook_function[0];
    hook_pos_snrm2 = 0;
    if ( fn_hook != NULL) {
        ret = fn_hook((void*) n, (void*) x, (void*) incx);
    } else {
        ret = fn((void*) n, (void*) x, (void*) incx);
    }
    return ret;
}
#ifdef FLEXIBLAS_ABI_IBM
float FC_GLOBAL2(snrm2,SNRM2)(blasint* n, float* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(snrm2,SNRM2)))));
float FC_GLOBAL3(snrm2,SNRM2)(blasint* n, float* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(snrm2,SNRM2)))));
#else
#ifndef __APPLE__
float FC_GLOBAL2(snrm2,SNRM2)(blasint* n, float* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(snrm2,SNRM2)))));
float FC_GLOBAL3(snrm2,SNRM2)(blasint* n, float* x, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(snrm2,SNRM2)))));
#else
float FC_GLOBAL2(snrm2,SNRM2)(blasint* n, float* x, blasint* incx){ return FC_GLOBAL(snrm2,SNRM2)((void*) n, (void*) x, (void*) incx); }
float FC_GLOBAL3(snrm2,SNRM2)(blasint* n, float* x, blasint* incx){ return FC_GLOBAL(snrm2,SNRM2)((void*) n, (void*) x, (void*) incx); }
#endif
#endif



float flexiblas_real_snrm2_(void* n, void* x, void* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float ret;

    *(void **) &fn = current_backend->blas.snrm2.f77_blas_function;
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_real_snrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_real_snrm2_")));
#else
float flexiblas_real_snrm2(void* n, void* x, void* incx){return flexiblas_real_snrm2_((void*) n, (void*) x, (void*) incx);}
#endif


float flexiblas_chain_snrm2_(void* n, void* x, void* incx)
{
    float (*fn) (void* n, void* x, void* incx);
    float ret;



    hook_pos_snrm2++;
    if ( hook_pos_snrm2 < __flexiblas_hooks->snrm2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->snrm2.f77_hook_function[hook_pos_snrm2];
    } else {
        hook_pos_snrm2 = 0;
        *(void **) &fn = current_backend->blas.snrm2.f77_blas_function;
    }
    ret = fn((void*) n, (void*) x, (void*) incx);

    return ret;
}
#ifndef __APPLE__
float flexiblas_chain_snrm2(void* n, void* x, void* incx) __attribute__((alias("flexiblas_chain_snrm2_")));
#else
float flexiblas_chain_snrm2(void* n, void* x, void* incx){return flexiblas_chain_snrm2_((void*) n, (void*) x, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_srot = 0;

void FC_GLOBAL(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);
    void (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.srot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->srot.f77_hook_function[0];
    hook_pos_srot = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);
    } else {
        fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srot,SROT)))));
void FC_GLOBAL3(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srot,SROT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srot,SROT)))));
void FC_GLOBAL3(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srot,SROT)))));
#else
void FC_GLOBAL2(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s){ FC_GLOBAL(srot,SROT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s); }
void FC_GLOBAL3(srot,SROT)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* c, float* s){ FC_GLOBAL(srot,SROT)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_srot_(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);

    *(void **) &fn = current_backend->blas.srot.f77_blas_function;
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_srot(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_real_srot_")));
#else
void flexiblas_real_srot(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s){flexiblas_real_srot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);}
#endif


void flexiblas_chain_srot_(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);



    hook_pos_srot++;
    if ( hook_pos_srot < __flexiblas_hooks->srot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->srot.f77_hook_function[hook_pos_srot];
    } else {
        hook_pos_srot = 0;
        *(void **) &fn = current_backend->blas.srot.f77_blas_function;
    }
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_srot(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_chain_srot_")));
#else
void flexiblas_chain_srot(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s){flexiblas_chain_srot_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_srotg = 0;

void FC_GLOBAL(srotg,SROTG)(float* sa, float* sb, float* c, float* s)
{
    void (*fn) (void* sa, void* sb, void* c, void* s);
    void (*fn_hook) (void* sa, void* sb, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.srotg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->srotg.f77_hook_function[0];
    hook_pos_srotg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) sa, (void*) sb, (void*) c, (void*) s);
    } else {
        fn((void*) sa, (void*) sb, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(srotg,SROTG)(float* sa, float* sb, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srotg,SROTG)))));
void FC_GLOBAL3(srotg,SROTG)(float* sa, float* sb, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srotg,SROTG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(srotg,SROTG)(float* sa, float* sb, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srotg,SROTG)))));
void FC_GLOBAL3(srotg,SROTG)(float* sa, float* sb, float* c, float* s) __attribute__((alias(MTS(FC_GLOBAL(srotg,SROTG)))));
#else
void FC_GLOBAL2(srotg,SROTG)(float* sa, float* sb, float* c, float* s){ FC_GLOBAL(srotg,SROTG)((void*) sa, (void*) sb, (void*) c, (void*) s); }
void FC_GLOBAL3(srotg,SROTG)(float* sa, float* sb, float* c, float* s){ FC_GLOBAL(srotg,SROTG)((void*) sa, (void*) sb, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_srotg_(void* sa, void* sb, void* c, void* s)
{
    void (*fn) (void* sa, void* sb, void* c, void* s);

    *(void **) &fn = current_backend->blas.srotg.f77_blas_function;
    fn((void*) sa, (void*) sb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_srotg(void* sa, void* sb, void* c, void* s) __attribute__((alias("flexiblas_real_srotg_")));
#else
void flexiblas_real_srotg(void* sa, void* sb, void* c, void* s){flexiblas_real_srotg_((void*) sa, (void*) sb, (void*) c, (void*) s);}
#endif


void flexiblas_chain_srotg_(void* sa, void* sb, void* c, void* s)
{
    void (*fn) (void* sa, void* sb, void* c, void* s);



    hook_pos_srotg++;
    if ( hook_pos_srotg < __flexiblas_hooks->srotg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->srotg.f77_hook_function[hook_pos_srotg];
    } else {
        hook_pos_srotg = 0;
        *(void **) &fn = current_backend->blas.srotg.f77_blas_function;
    }
    fn((void*) sa, (void*) sb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_srotg(void* sa, void* sb, void* c, void* s) __attribute__((alias("flexiblas_chain_srotg_")));
#else
void flexiblas_chain_srotg(void* sa, void* sb, void* c, void* s){flexiblas_chain_srotg_((void*) sa, (void*) sb, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_srotm = 0;

void FC_GLOBAL(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);
    void (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.srotm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->srotm.f77_hook_function[0];
    hook_pos_srotm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);
    } else {
        fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotm,SROTM)))));
void FC_GLOBAL3(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotm,SROTM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotm,SROTM)))));
void FC_GLOBAL3(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotm,SROTM)))));
#else
void FC_GLOBAL2(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam){ FC_GLOBAL(srotm,SROTM)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam); }
void FC_GLOBAL3(srotm,SROTM)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy, float* sparam){ FC_GLOBAL(srotm,SROTM)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam); }
#endif
#endif



void flexiblas_real_srotm_(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);

    *(void **) &fn = current_backend->blas.srotm.f77_blas_function;
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);

    return;
}
#ifndef __APPLE__
void flexiblas_real_srotm(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam) __attribute__((alias("flexiblas_real_srotm_")));
#else
void flexiblas_real_srotm(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam){flexiblas_real_srotm_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);}
#endif


void flexiblas_chain_srotm_(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);



    hook_pos_srotm++;
    if ( hook_pos_srotm < __flexiblas_hooks->srotm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->srotm.f77_hook_function[hook_pos_srotm];
    } else {
        hook_pos_srotm = 0;
        *(void **) &fn = current_backend->blas.srotm.f77_blas_function;
    }
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_srotm(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam) __attribute__((alias("flexiblas_chain_srotm_")));
#else
void flexiblas_chain_srotm(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam){flexiblas_chain_srotm_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy, (void*) sparam);}
#endif


static TLS_STORE uint8_t hook_pos_srotmg = 0;

void FC_GLOBAL(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam)
{
    void (*fn) (void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);
    void (*fn_hook) (void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.srotmg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->srotmg.f77_hook_function[0];
    hook_pos_srotmg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);
    } else {
        fn((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotmg,SROTMG)))));
void FC_GLOBAL3(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotmg,SROTMG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotmg,SROTMG)))));
void FC_GLOBAL3(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam) __attribute__((alias(MTS(FC_GLOBAL(srotmg,SROTMG)))));
#else
void FC_GLOBAL2(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam){ FC_GLOBAL(srotmg,SROTMG)((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam); }
void FC_GLOBAL3(srotmg,SROTMG)(float* sd1, float* sd2, float* sx1, float* sy1, float* sparam){ FC_GLOBAL(srotmg,SROTMG)((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam); }
#endif
#endif



void flexiblas_real_srotmg_(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam)
{
    void (*fn) (void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);

    *(void **) &fn = current_backend->blas.srotmg.f77_blas_function;
    fn((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);

    return;
}
#ifndef __APPLE__
void flexiblas_real_srotmg(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam) __attribute__((alias("flexiblas_real_srotmg_")));
#else
void flexiblas_real_srotmg(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam){flexiblas_real_srotmg_((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);}
#endif


void flexiblas_chain_srotmg_(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam)
{
    void (*fn) (void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);



    hook_pos_srotmg++;
    if ( hook_pos_srotmg < __flexiblas_hooks->srotmg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->srotmg.f77_hook_function[hook_pos_srotmg];
    } else {
        hook_pos_srotmg = 0;
        *(void **) &fn = current_backend->blas.srotmg.f77_blas_function;
    }
    fn((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_srotmg(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam) __attribute__((alias("flexiblas_chain_srotmg_")));
#else
void flexiblas_chain_srotmg(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam){flexiblas_chain_srotmg_((void*) sd1, (void*) sd2, (void*) sx1, (void*) sy1, (void*) sparam);}
#endif


static TLS_STORE uint8_t hook_pos_ssbmv = 0;

void FC_GLOBAL(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssbmv.f77_hook_function[0];
    hook_pos_ssbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssbmv,SSBMV)))));
void FC_GLOBAL3(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssbmv,SSBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssbmv,SSBMV)))));
void FC_GLOBAL3(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssbmv,SSBMV)))));
#else
void FC_GLOBAL2(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssbmv,SSBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(ssbmv,SSBMV)(char* uplo, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssbmv,SSBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_ssbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.ssbmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_ssbmv_")));
#else
void flexiblas_real_ssbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_ssbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_ssbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_ssbmv++;
    if ( hook_pos_ssbmv < __flexiblas_hooks->ssbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssbmv.f77_hook_function[hook_pos_ssbmv];
    } else {
        hook_pos_ssbmv = 0;
        *(void **) &fn = current_backend->blas.ssbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_ssbmv_")));
#else
void flexiblas_chain_ssbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_ssbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_sscal = 0;

void FC_GLOBAL(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx);
    void (*fn_hook) (void* n, void* sa, void* sx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sscal.f77_hook_function[0];
    hook_pos_sscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sa, (void*) sx, (void*) incx);
    } else {
        fn((void*) n, (void*) sa, (void*) sx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sscal,SSCAL)))));
void FC_GLOBAL3(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sscal,SSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sscal,SSCAL)))));
void FC_GLOBAL3(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(sscal,SSCAL)))));
#else
void FC_GLOBAL2(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx){ FC_GLOBAL(sscal,SSCAL)((void*) n, (void*) sa, (void*) sx, (void*) incx); }
void FC_GLOBAL3(sscal,SSCAL)(blasint* n, float* sa, float* sx, blasint* incx){ FC_GLOBAL(sscal,SSCAL)((void*) n, (void*) sa, (void*) sx, (void*) incx); }
#endif
#endif



void flexiblas_real_sscal_(void* n, void* sa, void* sx, void* incx)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx);

    *(void **) &fn = current_backend->blas.sscal.f77_blas_function;
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sscal(void* n, void* sa, void* sx, void* incx) __attribute__((alias("flexiblas_real_sscal_")));
#else
void flexiblas_real_sscal(void* n, void* sa, void* sx, void* incx){flexiblas_real_sscal_((void*) n, (void*) sa, (void*) sx, (void*) incx);}
#endif


void flexiblas_chain_sscal_(void* n, void* sa, void* sx, void* incx)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx);



    hook_pos_sscal++;
    if ( hook_pos_sscal < __flexiblas_hooks->sscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sscal.f77_hook_function[hook_pos_sscal];
    } else {
        hook_pos_sscal = 0;
        *(void **) &fn = current_backend->blas.sscal.f77_blas_function;
    }
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sscal(void* n, void* sa, void* sx, void* incx) __attribute__((alias("flexiblas_chain_sscal_")));
#else
void flexiblas_chain_sscal(void* n, void* sa, void* sx, void* incx){flexiblas_chain_sscal_((void*) n, (void*) sa, (void*) sx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_sspmv = 0;

void FC_GLOBAL(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sspmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sspmv.f77_hook_function[0];
    hook_pos_sspmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspmv,SSPMV)))));
void FC_GLOBAL3(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspmv,SSPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspmv,SSPMV)))));
void FC_GLOBAL3(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspmv,SSPMV)))));
#else
void FC_GLOBAL2(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspmv,SSPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(sspmv,SSPMV)(char* uplo, blasint* n, float* alpha, float* ap, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspmv,SSPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_sspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.sspmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_sspmv_")));
#else
void flexiblas_real_sspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_sspmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_sspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_sspmv++;
    if ( hook_pos_sspmv < __flexiblas_hooks->sspmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sspmv.f77_hook_function[hook_pos_sspmv];
    } else {
        hook_pos_sspmv = 0;
        *(void **) &fn = current_backend->blas.sspmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_sspmv_")));
#else
void flexiblas_chain_sspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_sspmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_sspr = 0;

void FC_GLOBAL(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sspr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sspr.f77_hook_function[0];
    hook_pos_sspr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr,SSPR)))));
void FC_GLOBAL3(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr,SSPR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr,SSPR)))));
void FC_GLOBAL3(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr,SSPR)))));
#else
void FC_GLOBAL2(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspr,SSPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(sspr,SSPR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspr,SSPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_sspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.sspr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_sspr_")));
#else
void flexiblas_real_sspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_sspr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_sspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_sspr++;
    if ( hook_pos_sspr < __flexiblas_hooks->sspr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sspr.f77_hook_function[hook_pos_sspr];
    } else {
        hook_pos_sspr = 0;
        *(void **) &fn = current_backend->blas.sspr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_sspr_")));
#else
void flexiblas_chain_sspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_sspr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_sspr2 = 0;

void FC_GLOBAL(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sspr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sspr2.f77_hook_function[0];
    hook_pos_sspr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr2,SSPR2)))));
void FC_GLOBAL3(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr2,SSPR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr2,SSPR2)))));
void FC_GLOBAL3(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(sspr2,SSPR2)))));
#else
void FC_GLOBAL2(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspr2,SSPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(sspr2,SSPR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(sspr2,SSPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_sspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.sspr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_sspr2_")));
#else
void flexiblas_real_sspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_sspr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_sspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_sspr2++;
    if ( hook_pos_sspr2 < __flexiblas_hooks->sspr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sspr2.f77_hook_function[hook_pos_sspr2];
    } else {
        hook_pos_sspr2 = 0;
        *(void **) &fn = current_backend->blas.sspr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_sspr2_")));
#else
void flexiblas_chain_sspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_sspr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_sswap = 0;

void FC_GLOBAL(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);
    void (*fn_hook) (void* n, void* sx, void* incx, void* sy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sswap.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sswap.f77_hook_function[0];
    hook_pos_sswap = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    } else {
        fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sswap,SSWAP)))));
void FC_GLOBAL3(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sswap,SSWAP)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sswap,SSWAP)))));
void FC_GLOBAL3(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(sswap,SSWAP)))));
#else
void FC_GLOBAL2(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(sswap,SSWAP)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
void FC_GLOBAL3(sswap,SSWAP)(blasint* n, float* sx, blasint* incx, float* sy, blasint* incy){ FC_GLOBAL(sswap,SSWAP)((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy); }
#endif
#endif



void flexiblas_real_sswap_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);

    *(void **) &fn = current_backend->blas.sswap.f77_blas_function;
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sswap(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_real_sswap_")));
#else
void flexiblas_real_sswap(void* n, void* sx, void* incx, void* sy, void* incy){flexiblas_real_sswap_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


void flexiblas_chain_sswap_(void* n, void* sx, void* incx, void* sy, void* incy)
{
    void (*fn) (void* n, void* sx, void* incx, void* sy, void* incy);



    hook_pos_sswap++;
    if ( hook_pos_sswap < __flexiblas_hooks->sswap.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sswap.f77_hook_function[hook_pos_sswap];
    } else {
        hook_pos_sswap = 0;
        *(void **) &fn = current_backend->blas.sswap.f77_blas_function;
    }
    fn((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sswap(void* n, void* sx, void* incx, void* sy, void* incy) __attribute__((alias("flexiblas_chain_sswap_")));
#else
void flexiblas_chain_sswap(void* n, void* sx, void* incx, void* sy, void* incy){flexiblas_chain_sswap_((void*) n, (void*) sx, (void*) incx, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_ssymm = 0;

void FC_GLOBAL(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssymm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssymm.f77_hook_function[0];
    hook_pos_ssymm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymm,SSYMM)))));
void FC_GLOBAL3(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymm,SSYMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymm,SSYMM)))));
void FC_GLOBAL3(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymm,SSYMM)))));
#else
void FC_GLOBAL2(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssymm,SSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(ssymm,SSYMM)(char* side, char* uplo, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssymm,SSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_ssymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.ssymm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_ssymm_")));
#else
void flexiblas_real_ssymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_ssymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_ssymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_ssymm++;
    if ( hook_pos_ssymm < __flexiblas_hooks->ssymm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssymm.f77_hook_function[hook_pos_ssymm];
    } else {
        hook_pos_ssymm = 0;
        *(void **) &fn = current_backend->blas.ssymm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_ssymm_")));
#else
void flexiblas_chain_ssymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_ssymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_ssymv = 0;

void FC_GLOBAL(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssymv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssymv.f77_hook_function[0];
    hook_pos_ssymv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymv,SSYMV)))));
void FC_GLOBAL3(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymv,SSYMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymv,SSYMV)))));
void FC_GLOBAL3(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssymv,SSYMV)))));
#else
void FC_GLOBAL2(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssymv,SSYMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(ssymv,SSYMV)(char* uplo, blasint* n, float* alpha, float* a, blasint* lda, float* x, blasint* incx, float* beta, float* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssymv,SSYMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_ssymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.ssymv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_ssymv_")));
#else
void flexiblas_real_ssymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_ssymv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_ssymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_ssymv++;
    if ( hook_pos_ssymv < __flexiblas_hooks->ssymv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssymv.f77_hook_function[hook_pos_ssymv];
    } else {
        hook_pos_ssymv = 0;
        *(void **) &fn = current_backend->blas.ssymv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_ssymv_")));
#else
void flexiblas_chain_ssymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_ssymv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_ssyr = 0;

void FC_GLOBAL(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssyr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssyr.f77_hook_function[0];
    hook_pos_ssyr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr,SSYR)))));
void FC_GLOBAL3(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr,SSYR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr,SSYR)))));
void FC_GLOBAL3(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr,SSYR)))));
#else
void FC_GLOBAL2(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssyr,SSYR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(ssyr,SSYR)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssyr,SSYR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_ssyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.ssyr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_ssyr_")));
#else
void flexiblas_real_ssyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_ssyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_ssyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_ssyr++;
    if ( hook_pos_ssyr < __flexiblas_hooks->ssyr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssyr.f77_hook_function[hook_pos_ssyr];
    } else {
        hook_pos_ssyr = 0;
        *(void **) &fn = current_backend->blas.ssyr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_ssyr_")));
#else
void flexiblas_chain_ssyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_ssyr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_ssyr2 = 0;

void FC_GLOBAL(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssyr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssyr2.f77_hook_function[0];
    hook_pos_ssyr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr2,SSYR2)))));
void FC_GLOBAL3(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr2,SSYR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr2,SSYR2)))));
void FC_GLOBAL3(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(ssyr2,SSYR2)))));
#else
void FC_GLOBAL2(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssyr2,SSYR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(ssyr2,SSYR2)(char* uplo, blasint* n, float* alpha, float* x, blasint* incx, float* y, blasint* incy, float* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(ssyr2,SSYR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_ssyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.ssyr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_ssyr2_")));
#else
void flexiblas_real_ssyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_ssyr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_ssyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_ssyr2++;
    if ( hook_pos_ssyr2 < __flexiblas_hooks->ssyr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssyr2.f77_hook_function[hook_pos_ssyr2];
    } else {
        hook_pos_ssyr2 = 0;
        *(void **) &fn = current_backend->blas.ssyr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_ssyr2_")));
#else
void flexiblas_chain_ssyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_ssyr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_ssyr2k = 0;

void FC_GLOBAL(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssyr2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssyr2k.f77_hook_function[0];
    hook_pos_ssyr2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyr2k,SSYR2K)))));
void FC_GLOBAL3(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyr2k,SSYR2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyr2k,SSYR2K)))));
void FC_GLOBAL3(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyr2k,SSYR2K)))));
#else
void FC_GLOBAL2(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(ssyr2k,SSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(ssyr2k,SSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(ssyr2k,SSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_ssyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.ssyr2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_ssyr2k_")));
#else
void flexiblas_real_ssyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_ssyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_ssyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_ssyr2k++;
    if ( hook_pos_ssyr2k < __flexiblas_hooks->ssyr2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssyr2k.f77_hook_function[hook_pos_ssyr2k];
    } else {
        hook_pos_ssyr2k = 0;
        *(void **) &fn = current_backend->blas.ssyr2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_ssyr2k_")));
#else
void flexiblas_chain_ssyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_ssyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_ssyrk = 0;

void FC_GLOBAL(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ssyrk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ssyrk.f77_hook_function[0];
    hook_pos_ssyrk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyrk,SSYRK)))));
void FC_GLOBAL3(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyrk,SSYRK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyrk,SSYRK)))));
void FC_GLOBAL3(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(ssyrk,SSYRK)))));
#else
void FC_GLOBAL2(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(ssyrk,SSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(ssyrk,SSYRK)(char* uplo, char* trans, blasint* n, blasint* k, float* alpha, float* a, blasint* lda, float* beta, float* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(ssyrk,SSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_ssyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.ssyrk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ssyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_ssyrk_")));
#else
void flexiblas_real_ssyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_ssyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_ssyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_ssyrk++;
    if ( hook_pos_ssyrk < __flexiblas_hooks->ssyrk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ssyrk.f77_hook_function[hook_pos_ssyrk];
    } else {
        hook_pos_ssyrk = 0;
        *(void **) &fn = current_backend->blas.ssyrk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ssyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_ssyrk_")));
#else
void flexiblas_chain_ssyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_ssyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_stbmv = 0;

void FC_GLOBAL(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.stbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->stbmv.f77_hook_function[0];
    hook_pos_stbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbmv,STBMV)))));
void FC_GLOBAL3(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbmv,STBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbmv,STBMV)))));
void FC_GLOBAL3(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbmv,STBMV)))));
#else
void FC_GLOBAL2(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stbmv,STBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(stbmv,STBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stbmv,STBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_stbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.stbmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_stbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_stbmv_")));
#else
void flexiblas_real_stbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_stbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_stbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_stbmv++;
    if ( hook_pos_stbmv < __flexiblas_hooks->stbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->stbmv.f77_hook_function[hook_pos_stbmv];
    } else {
        hook_pos_stbmv = 0;
        *(void **) &fn = current_backend->blas.stbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_stbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_stbmv_")));
#else
void flexiblas_chain_stbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_stbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_stbsv = 0;

void FC_GLOBAL(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.stbsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->stbsv.f77_hook_function[0];
    hook_pos_stbsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbsv,STBSV)))));
void FC_GLOBAL3(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbsv,STBSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbsv,STBSV)))));
void FC_GLOBAL3(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stbsv,STBSV)))));
#else
void FC_GLOBAL2(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stbsv,STBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(stbsv,STBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stbsv,STBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_stbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.stbsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_stbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_stbsv_")));
#else
void flexiblas_real_stbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_stbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_stbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_stbsv++;
    if ( hook_pos_stbsv < __flexiblas_hooks->stbsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->stbsv.f77_hook_function[hook_pos_stbsv];
    } else {
        hook_pos_stbsv = 0;
        *(void **) &fn = current_backend->blas.stbsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_stbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_stbsv_")));
#else
void flexiblas_chain_stbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_stbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_stpmv = 0;

void FC_GLOBAL(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.stpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->stpmv.f77_hook_function[0];
    hook_pos_stpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpmv,STPMV)))));
void FC_GLOBAL3(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpmv,STPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpmv,STPMV)))));
void FC_GLOBAL3(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpmv,STPMV)))));
#else
void FC_GLOBAL2(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stpmv,STPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(stpmv,STPMV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stpmv,STPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_stpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.stpmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_stpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_stpmv_")));
#else
void flexiblas_real_stpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_stpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_stpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_stpmv++;
    if ( hook_pos_stpmv < __flexiblas_hooks->stpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->stpmv.f77_hook_function[hook_pos_stpmv];
    } else {
        hook_pos_stpmv = 0;
        *(void **) &fn = current_backend->blas.stpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_stpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_stpmv_")));
#else
void flexiblas_chain_stpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_stpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_stpsv = 0;

void FC_GLOBAL(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.stpsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->stpsv.f77_hook_function[0];
    hook_pos_stpsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpsv,STPSV)))));
void FC_GLOBAL3(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpsv,STPSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpsv,STPSV)))));
void FC_GLOBAL3(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(stpsv,STPSV)))));
#else
void FC_GLOBAL2(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stpsv,STPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(stpsv,STPSV)(char* uplo, char* trans, char* diag, blasint* n, float* ap, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(stpsv,STPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_stpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.stpsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_stpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_stpsv_")));
#else
void flexiblas_real_stpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_stpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_stpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_stpsv++;
    if ( hook_pos_stpsv < __flexiblas_hooks->stpsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->stpsv.f77_hook_function[hook_pos_stpsv];
    } else {
        hook_pos_stpsv = 0;
        *(void **) &fn = current_backend->blas.stpsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_stpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_stpsv_")));
#else
void flexiblas_chain_stpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_stpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_strmm = 0;

void FC_GLOBAL(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.strmm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->strmm.f77_hook_function[0];
    hook_pos_strmm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmm,STRMM)))));
void FC_GLOBAL3(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmm,STRMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmm,STRMM)))));
void FC_GLOBAL3(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmm,STRMM)))));
#else
void FC_GLOBAL2(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strmm,STRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(strmm,STRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strmm,STRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_strmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.strmm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_strmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_strmm_")));
#else
void flexiblas_real_strmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_strmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_strmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_strmm++;
    if ( hook_pos_strmm < __flexiblas_hooks->strmm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->strmm.f77_hook_function[hook_pos_strmm];
    } else {
        hook_pos_strmm = 0;
        *(void **) &fn = current_backend->blas.strmm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_strmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_strmm_")));
#else
void flexiblas_chain_strmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_strmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_strmv = 0;

void FC_GLOBAL(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.strmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->strmv.f77_hook_function[0];
    hook_pos_strmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmv,STRMV)))));
void FC_GLOBAL3(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmv,STRMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmv,STRMV)))));
void FC_GLOBAL3(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strmv,STRMV)))));
#else
void FC_GLOBAL2(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strmv,STRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(strmv,STRMV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strmv,STRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_strmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.strmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_strmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_strmv_")));
#else
void flexiblas_real_strmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_strmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_strmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_strmv++;
    if ( hook_pos_strmv < __flexiblas_hooks->strmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->strmv.f77_hook_function[hook_pos_strmv];
    } else {
        hook_pos_strmv = 0;
        *(void **) &fn = current_backend->blas.strmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_strmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_strmv_")));
#else
void flexiblas_chain_strmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_strmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_strsm = 0;

void FC_GLOBAL(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.strsm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->strsm.f77_hook_function[0];
    hook_pos_strsm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsm,STRSM)))));
void FC_GLOBAL3(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsm,STRSM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsm,STRSM)))));
void FC_GLOBAL3(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsm,STRSM)))));
#else
void FC_GLOBAL2(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strsm,STRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(strsm,STRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strsm,STRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_strsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.strsm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_strsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_strsm_")));
#else
void flexiblas_real_strsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_strsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_strsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_strsm++;
    if ( hook_pos_strsm < __flexiblas_hooks->strsm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->strsm.f77_hook_function[hook_pos_strsm];
    } else {
        hook_pos_strsm = 0;
        *(void **) &fn = current_backend->blas.strsm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_strsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_strsm_")));
#else
void flexiblas_chain_strsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_strsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_strsv = 0;

void FC_GLOBAL(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.strsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->strsv.f77_hook_function[0];
    hook_pos_strsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsv,STRSV)))));
void FC_GLOBAL3(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsv,STRSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsv,STRSV)))));
void FC_GLOBAL3(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(strsv,STRSV)))));
#else
void FC_GLOBAL2(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strsv,STRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(strsv,STRSV)(char* uplo, char* trans, char* diag, blasint* n, float* a, blasint* lda, float* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(strsv,STRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_strsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.strsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_strsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_strsv_")));
#else
void flexiblas_real_strsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_strsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_strsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_strsv++;
    if ( hook_pos_strsv < __flexiblas_hooks->strsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->strsv.f77_hook_function[hook_pos_strsv];
    } else {
        hook_pos_strsv = 0;
        *(void **) &fn = current_backend->blas.strsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_strsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_strsv_")));
#else
void flexiblas_chain_strsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_strsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_zaxpy = 0;

void FC_GLOBAL(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zy, void* incy);
    void (*fn_hook) (void* n, void* za, void* zx, void* incx, void* zy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zaxpy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zaxpy.f77_hook_function[0];
    hook_pos_zaxpy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpy,ZAXPY)))));
void FC_GLOBAL3(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpy,ZAXPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpy,ZAXPY)))));
void FC_GLOBAL3(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpy,ZAXPY)))));
#else
void FC_GLOBAL2(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zaxpy,ZAXPY)((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zaxpy,ZAXPY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zaxpy,ZAXPY)((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zaxpy_(void* n, void* za, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zy, void* incy);

    *(void **) &fn = current_backend->blas.zaxpy.f77_blas_function;
    fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zaxpy(void* n, void* za, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_real_zaxpy_")));
#else
void flexiblas_real_zaxpy(void* n, void* za, void* zx, void* incx, void* zy, void* incy){flexiblas_real_zaxpy_((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zaxpy_(void* n, void* za, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zy, void* incy);



    hook_pos_zaxpy++;
    if ( hook_pos_zaxpy < __flexiblas_hooks->zaxpy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zaxpy.f77_hook_function[hook_pos_zaxpy];
    } else {
        hook_pos_zaxpy = 0;
        *(void **) &fn = current_backend->blas.zaxpy.f77_blas_function;
    }
    fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zaxpy(void* n, void* za, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zaxpy_")));
#else
void flexiblas_chain_zaxpy(void* n, void* za, void* zx, void* incx, void* zy, void* incy){flexiblas_chain_zaxpy_((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zcopy = 0;

void FC_GLOBAL(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_hook) (void* n, void* zx, void* incx, void* zy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zcopy.f77_hook_function[0];
    hook_pos_zcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zcopy,ZCOPY)))));
void FC_GLOBAL3(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zcopy,ZCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zcopy,ZCOPY)))));
void FC_GLOBAL3(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zcopy,ZCOPY)))));
#else
void FC_GLOBAL2(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zcopy,ZCOPY)((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zcopy,ZCOPY)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zcopy,ZCOPY)((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zcopy_(void* n, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);

    *(void **) &fn = current_backend->blas.zcopy.f77_blas_function;
    fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zcopy(void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_real_zcopy_")));
#else
void flexiblas_real_zcopy(void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_real_zcopy_((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zcopy_(void* n, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);



    hook_pos_zcopy++;
    if ( hook_pos_zcopy < __flexiblas_hooks->zcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zcopy.f77_hook_function[hook_pos_zcopy];
    } else {
        hook_pos_zcopy = 0;
        *(void **) &fn = current_backend->blas.zcopy.f77_blas_function;
    }
    fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zcopy(void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zcopy_")));
#else
void flexiblas_chain_zcopy(void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_chain_zcopy_((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zdotc = 0;

void FC_GLOBAL(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    double complex (*fn_hook) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel_hook) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zdotc.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zdotc.f77_hook_function[0];
    hook_pos_zdotc = 0;
    *(void **) &fn_intel = current_backend->blas.zdotc.f77_blas_function;
    *(void **) &fn_intel_hook = __flexiblas_hooks->zdotc.f77_hook_function[0];
    if ( fn_hook != NULL) {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn_hook((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        } else {
            fn_intel_hook( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        }
    } else {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        } else {
            fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        }
    }
    *returnvalue = ret;
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotc,ZDOTC)))));
void FC_GLOBAL3(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotc,ZDOTC)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotc,ZDOTC)))));
void FC_GLOBAL3(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotc,ZDOTC)))));
#else
void FC_GLOBAL2(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zdotc,ZDOTC)( (void*) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zdotc,ZDOTC)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zdotc,ZDOTC)( (void*) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zdotc_(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;

    *(void **) &fn = current_backend->blas.zdotc.f77_blas_function;	*(void**) &fn_intel = current_backend->blas.zdotc.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }

    *((double complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_real_zdotc(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_real_zdotc_")));
#else
void flexiblas_real_zdotc(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_real_zdotc_((void *)returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zdotc_(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;



    hook_pos_zdotc++;
    if ( hook_pos_zdotc < __flexiblas_hooks->zdotc.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zdotc.f77_hook_function[hook_pos_zdotc];
    } else {
        hook_pos_zdotc = 0;
        *(void **) &fn = current_backend->blas.zdotc.f77_blas_function;
    }	*(void **) &fn_intel = current_backend->blas.zdotc.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }

    *((double complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_chain_zdotc(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zdotc_")));
#else
void flexiblas_chain_zdotc(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy){(void) flexiblas_chain_zdotc_((void *) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zdotu = 0;

void FC_GLOBAL(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    double complex (*fn_hook) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel_hook) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zdotu.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zdotu.f77_hook_function[0];
    hook_pos_zdotu = 0;
    *(void **) &fn_intel = current_backend->blas.zdotu.f77_blas_function;
    *(void **) &fn_intel_hook = __flexiblas_hooks->zdotu.f77_hook_function[0];
    if ( fn_hook != NULL) {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn_hook((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        } else {
            fn_intel_hook( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        }
    } else {
        if(current_backend->info.intel_interface == 0 ) {
            ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        } else {
            fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
        }
    }
    *returnvalue = ret;
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotu,ZDOTU)))));
void FC_GLOBAL3(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotu,ZDOTU)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotu,ZDOTU)))));
void FC_GLOBAL3(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zdotu,ZDOTU)))));
#else
void FC_GLOBAL2(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zdotu,ZDOTU)( (void*) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zdotu,ZDOTU)( double complex* returnvalue, blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zdotu,ZDOTU)( (void*) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zdotu_(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;

    *(void **) &fn = current_backend->blas.zdotu.f77_blas_function;	*(void**) &fn_intel = current_backend->blas.zdotu.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }

    *((double complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_real_zdotu(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_real_zdotu_")));
#else
void flexiblas_real_zdotu(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_real_zdotu_((void *)returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zdotu_(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy)
{
    double complex (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_intel) (double complex *ret, void* n, void* zx, void* incx, void* zy, void* incy);
    double complex ret;



    hook_pos_zdotu++;
    if ( hook_pos_zdotu < __flexiblas_hooks->zdotu.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zdotu.f77_hook_function[hook_pos_zdotu];
    } else {
        hook_pos_zdotu = 0;
        *(void **) &fn = current_backend->blas.zdotu.f77_blas_function;
    }	*(void **) &fn_intel = current_backend->blas.zdotu.f77_blas_function;

    if(current_backend->info.intel_interface == 0 ) {
        ret = fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn_intel( &ret, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }

    *((double complex *)returnvalue) = ret;
    return;
}
#ifndef __APPLE__
void flexiblas_chain_zdotu(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zdotu_")));
#else
void flexiblas_chain_zdotu(void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy){(void) flexiblas_chain_zdotu_((void *) returnvalue, (void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zdrot = 0;

void FC_GLOBAL(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
    void (*fn_hook) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zdrot.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zdrot.f77_hook_function[0];
    hook_pos_zdrot = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);
    } else {
        fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(zdrot,ZDROT)))));
void FC_GLOBAL3(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(zdrot,ZDROT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(zdrot,ZDROT)))));
void FC_GLOBAL3(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s) __attribute__((alias(MTS(FC_GLOBAL(zdrot,ZDROT)))));
#else
void FC_GLOBAL2(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s){ FC_GLOBAL(zdrot,ZDROT)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s); }
void FC_GLOBAL3(zdrot,ZDROT)(blasint* n, double complex* cx, blasint* incx, double complex* cy, blasint* incy, double* c, double* s){ FC_GLOBAL(zdrot,ZDROT)((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_zdrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);

    *(void **) &fn = current_backend->blas.zdrot.f77_blas_function;
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zdrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_real_zdrot_")));
#else
void flexiblas_real_zdrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s){flexiblas_real_zdrot_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);}
#endif


void flexiblas_chain_zdrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s)
{
    void (*fn) (void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);



    hook_pos_zdrot++;
    if ( hook_pos_zdrot < __flexiblas_hooks->zdrot.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zdrot.f77_hook_function[hook_pos_zdrot];
    } else {
        hook_pos_zdrot = 0;
        *(void **) &fn = current_backend->blas.zdrot.f77_blas_function;
    }
    fn((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zdrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s) __attribute__((alias("flexiblas_chain_zdrot_")));
#else
void flexiblas_chain_zdrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s){flexiblas_chain_zdrot_((void*) n, (void*) cx, (void*) incx, (void*) cy, (void*) incy, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_zdscal = 0;

void FC_GLOBAL(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx)
{
    void (*fn) (void* n, void* da, void* zx, void* incx);
    void (*fn_hook) (void* n, void* da, void* zx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zdscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zdscal.f77_hook_function[0];
    hook_pos_zdscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) da, (void*) zx, (void*) incx);
    } else {
        fn((void*) n, (void*) da, (void*) zx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zdscal,ZDSCAL)))));
void FC_GLOBAL3(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zdscal,ZDSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zdscal,ZDSCAL)))));
void FC_GLOBAL3(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zdscal,ZDSCAL)))));
#else
void FC_GLOBAL2(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx){ FC_GLOBAL(zdscal,ZDSCAL)((void*) n, (void*) da, (void*) zx, (void*) incx); }
void FC_GLOBAL3(zdscal,ZDSCAL)(blasint* n, double* da, double complex* zx, blasint* incx){ FC_GLOBAL(zdscal,ZDSCAL)((void*) n, (void*) da, (void*) zx, (void*) incx); }
#endif
#endif



void flexiblas_real_zdscal_(void* n, void* da, void* zx, void* incx)
{
    void (*fn) (void* n, void* da, void* zx, void* incx);

    *(void **) &fn = current_backend->blas.zdscal.f77_blas_function;
    fn((void*) n, (void*) da, (void*) zx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zdscal(void* n, void* da, void* zx, void* incx) __attribute__((alias("flexiblas_real_zdscal_")));
#else
void flexiblas_real_zdscal(void* n, void* da, void* zx, void* incx){flexiblas_real_zdscal_((void*) n, (void*) da, (void*) zx, (void*) incx);}
#endif


void flexiblas_chain_zdscal_(void* n, void* da, void* zx, void* incx)
{
    void (*fn) (void* n, void* da, void* zx, void* incx);



    hook_pos_zdscal++;
    if ( hook_pos_zdscal < __flexiblas_hooks->zdscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zdscal.f77_hook_function[hook_pos_zdscal];
    } else {
        hook_pos_zdscal = 0;
        *(void **) &fn = current_backend->blas.zdscal.f77_blas_function;
    }
    fn((void*) n, (void*) da, (void*) zx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zdscal(void* n, void* da, void* zx, void* incx) __attribute__((alias("flexiblas_chain_zdscal_")));
#else
void flexiblas_chain_zdscal(void* n, void* da, void* zx, void* incx){flexiblas_chain_zdscal_((void*) n, (void*) da, (void*) zx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_zgbmv = 0;

void FC_GLOBAL(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgbmv.f77_hook_function[0];
    hook_pos_zgbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgbmv,ZGBMV)))));
void FC_GLOBAL3(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgbmv,ZGBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgbmv,ZGBMV)))));
void FC_GLOBAL3(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgbmv,ZGBMV)))));
#else
void FC_GLOBAL2(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zgbmv,ZGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zgbmv,ZGBMV)(char* trans, blasint* m, blasint* n, blasint* kl, blasint* ku, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zgbmv,ZGBMV)((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zgbmv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zgbmv_")));
#else
void flexiblas_real_zgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zgbmv++;
    if ( hook_pos_zgbmv < __flexiblas_hooks->zgbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgbmv.f77_hook_function[hook_pos_zgbmv];
    } else {
        hook_pos_zgbmv = 0;
        *(void **) &fn = current_backend->blas.zgbmv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zgbmv_")));
#else
void flexiblas_chain_zgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zgbmv_((void*) trans, (void*) m, (void*) n, (void*) kl, (void*) ku, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zgemm = 0;

void FC_GLOBAL(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgemm.f77_hook_function[0];
    hook_pos_zgemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemm,ZGEMM)))));
void FC_GLOBAL3(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemm,ZGEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemm,ZGEMM)))));
void FC_GLOBAL3(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemm,ZGEMM)))));
#else
void FC_GLOBAL2(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemm,ZGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(zgemm,ZGEMM)(char* transa, char* transb, blasint* m, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemm,ZGEMM)((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_zgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.zgemm.f77_blas_function;
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_zgemm_")));
#else
void flexiblas_real_zgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_zgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_zgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_zgemm++;
    if ( hook_pos_zgemm < __flexiblas_hooks->zgemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgemm.f77_hook_function[hook_pos_zgemm];
    } else {
        hook_pos_zgemm = 0;
        *(void **) &fn = current_backend->blas.zgemm.f77_blas_function;
    }
    fn((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_zgemm_")));
#else
void flexiblas_chain_zgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_zgemm_((void*) transa, (void*) transb, (void*) m, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_zgemmt = 0;

void FC_GLOBAL(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgemmt.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgemmt.f77_hook_function[0];
    hook_pos_zgemmt = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmt,ZGEMMT)))));
void FC_GLOBAL3(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmt,ZGEMMT)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmt,ZGEMMT)))));
void FC_GLOBAL3(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmt,ZGEMMT)))));
#else
void FC_GLOBAL2(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemmt,ZGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(zgemmt,ZGEMMT)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemmt,ZGEMMT)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_zgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.zgemmt.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_zgemmt_")));
#else
void flexiblas_real_zgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_zgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_zgemmt_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_zgemmt++;
    if ( hook_pos_zgemmt < __flexiblas_hooks->zgemmt.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgemmt.f77_hook_function[hook_pos_zgemmt];
    } else {
        hook_pos_zgemmt = 0;
        *(void **) &fn = current_backend->blas.zgemmt.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_zgemmt_")));
#else
void flexiblas_chain_zgemmt(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_zgemmt_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_zgemmtr = 0;

void FC_GLOBAL(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    void (*fn_hook) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgemmtr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgemmtr.f77_hook_function[0];
    hook_pos_zgemmtr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    } else {
        fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmtr,ZGEMMTR)))));
void FC_GLOBAL3(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmtr,ZGEMMTR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmtr,ZGEMMTR)))));
void FC_GLOBAL3(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias(MTS(FC_GLOBAL(zgemmtr,ZGEMMTR)))));
#else
void FC_GLOBAL2(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemmtr,ZGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
void FC_GLOBAL3(zgemmtr,ZGEMMTR)(char* uplo, char* transa, char* transb, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){ FC_GLOBAL(zgemmtr,ZGEMMTR)((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb); }
#endif
#endif



void flexiblas_real_zgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);

    *(void **) &fn = current_backend->blas.zgemmtr.f77_blas_function;
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_real_zgemmtr_")));
#else
void flexiblas_real_zgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_real_zgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


void flexiblas_chain_zgemmtr_(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb)
{
    void (*fn) (void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb);



    hook_pos_zgemmtr++;
    if ( hook_pos_zgemmtr < __flexiblas_hooks->zgemmtr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgemmtr.f77_hook_function[hook_pos_zgemmtr];
    } else {
        hook_pos_zgemmtr = 0;
        *(void **) &fn = current_backend->blas.zgemmtr.f77_blas_function;
    }
    fn((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_transb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb) __attribute__((alias("flexiblas_chain_zgemmtr_")));
#else
void flexiblas_chain_zgemmtr(void* uplo, void* transa, void* transb, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_transb){flexiblas_chain_zgemmtr_((void*) uplo, (void*) transa, (void*) transb, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_transb);}
#endif


static TLS_STORE uint8_t hook_pos_zgemv = 0;

void FC_GLOBAL(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgemv.f77_hook_function[0];
    hook_pos_zgemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgemv,ZGEMV)))));
void FC_GLOBAL3(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgemv,ZGEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgemv,ZGEMV)))));
void FC_GLOBAL3(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zgemv,ZGEMV)))));
#else
void FC_GLOBAL2(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zgemv,ZGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zgemv,ZGEMV)(char* trans, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zgemv,ZGEMV)((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zgemv.f77_blas_function;
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zgemv_")));
#else
void flexiblas_real_zgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zgemv++;
    if ( hook_pos_zgemv < __flexiblas_hooks->zgemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgemv.f77_hook_function[hook_pos_zgemv];
    } else {
        hook_pos_zgemv = 0;
        *(void **) &fn = current_backend->blas.zgemv.f77_blas_function;
    }
    fn((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zgemv_")));
#else
void flexiblas_chain_zgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zgemv_((void*) trans, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zgerc = 0;

void FC_GLOBAL(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgerc.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgerc.f77_hook_function[0];
    hook_pos_zgerc = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgerc,ZGERC)))));
void FC_GLOBAL3(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgerc,ZGERC)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgerc,ZGERC)))));
void FC_GLOBAL3(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgerc,ZGERC)))));
#else
void FC_GLOBAL2(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda){ FC_GLOBAL(zgerc,ZGERC)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(zgerc,ZGERC)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda){ FC_GLOBAL(zgerc,ZGERC)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_zgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.zgerc.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_zgerc_")));
#else
void flexiblas_real_zgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_zgerc_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_zgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_zgerc++;
    if ( hook_pos_zgerc < __flexiblas_hooks->zgerc.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgerc.f77_hook_function[hook_pos_zgerc];
    } else {
        hook_pos_zgerc = 0;
        *(void **) &fn = current_backend->blas.zgerc.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_zgerc_")));
#else
void flexiblas_chain_zgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_zgerc_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_zgeru = 0;

void FC_GLOBAL(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    void (*fn_hook) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgeru.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgeru.f77_hook_function[0];
    hook_pos_zgeru = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgeru,ZGERU)))));
void FC_GLOBAL3(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgeru,ZGERU)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgeru,ZGERU)))));
void FC_GLOBAL3(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda) __attribute__((alias(MTS(FC_GLOBAL(zgeru,ZGERU)))));
#else
void FC_GLOBAL2(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda){ FC_GLOBAL(zgeru,ZGERU)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
void FC_GLOBAL3(zgeru,ZGERU)(blasint* m, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda){ FC_GLOBAL(zgeru,ZGERU)((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda); }
#endif
#endif



void flexiblas_real_zgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);

    *(void **) &fn = current_backend->blas.zgeru.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_real_zgeru_")));
#else
void flexiblas_real_zgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_real_zgeru_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


void flexiblas_chain_zgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda)
{
    void (*fn) (void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);



    hook_pos_zgeru++;
    if ( hook_pos_zgeru < __flexiblas_hooks->zgeru.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgeru.f77_hook_function[hook_pos_zgeru];
    } else {
        hook_pos_zgeru = 0;
        *(void **) &fn = current_backend->blas.zgeru.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda) __attribute__((alias("flexiblas_chain_zgeru_")));
#else
void flexiblas_chain_zgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda){flexiblas_chain_zgeru_((void*) m, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda);}
#endif


static TLS_STORE uint8_t hook_pos_zhbmv = 0;

void FC_GLOBAL(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhbmv.f77_hook_function[0];
    hook_pos_zhbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhbmv,ZHBMV)))));
void FC_GLOBAL3(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhbmv,ZHBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhbmv,ZHBMV)))));
void FC_GLOBAL3(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhbmv,ZHBMV)))));
#else
void FC_GLOBAL2(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhbmv,ZHBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhbmv,ZHBMV)(char* uplo, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhbmv,ZHBMV)((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhbmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhbmv_")));
#else
void flexiblas_real_zhbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhbmv++;
    if ( hook_pos_zhbmv < __flexiblas_hooks->zhbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhbmv.f77_hook_function[hook_pos_zhbmv];
    } else {
        hook_pos_zhbmv = 0;
        *(void **) &fn = current_backend->blas.zhbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhbmv_")));
#else
void flexiblas_chain_zhbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhbmv_((void*) uplo, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zhemm = 0;

void FC_GLOBAL(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhemm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhemm.f77_hook_function[0];
    hook_pos_zhemm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemm,ZHEMM)))));
void FC_GLOBAL3(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemm,ZHEMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemm,ZHEMM)))));
void FC_GLOBAL3(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemm,ZHEMM)))));
#else
void FC_GLOBAL2(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhemm,ZHEMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhemm,ZHEMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhemm,ZHEMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhemm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhemm_")));
#else
void flexiblas_real_zhemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhemm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhemm++;
    if ( hook_pos_zhemm < __flexiblas_hooks->zhemm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhemm.f77_hook_function[hook_pos_zhemm];
    } else {
        hook_pos_zhemm = 0;
        *(void **) &fn = current_backend->blas.zhemm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhemm_")));
#else
void flexiblas_chain_zhemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhemm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zhemv = 0;

void FC_GLOBAL(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhemv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhemv.f77_hook_function[0];
    hook_pos_zhemv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemv,ZHEMV)))));
void FC_GLOBAL3(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemv,ZHEMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemv,ZHEMV)))));
void FC_GLOBAL3(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhemv,ZHEMV)))));
#else
void FC_GLOBAL2(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhemv,ZHEMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhemv,ZHEMV)(char* uplo, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhemv,ZHEMV)((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhemv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhemv_")));
#else
void flexiblas_real_zhemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhemv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhemv++;
    if ( hook_pos_zhemv < __flexiblas_hooks->zhemv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhemv.f77_hook_function[hook_pos_zhemv];
    } else {
        hook_pos_zhemv = 0;
        *(void **) &fn = current_backend->blas.zhemv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhemv_")));
#else
void flexiblas_chain_zhemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhemv_((void*) uplo, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zher = 0;

void FC_GLOBAL(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zher.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zher.f77_hook_function[0];
    hook_pos_zher = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher,ZHER)))));
void FC_GLOBAL3(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher,ZHER)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher,ZHER)))));
void FC_GLOBAL3(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher,ZHER)))));
#else
void FC_GLOBAL2(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zher,ZHER)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zher,ZHER)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zher,ZHER)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zher.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zher_")));
#else
void flexiblas_real_zher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zher_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zher++;
    if ( hook_pos_zher < __flexiblas_hooks->zher.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zher.f77_hook_function[hook_pos_zher];
    } else {
        hook_pos_zher = 0;
        *(void **) &fn = current_backend->blas.zher.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zher_")));
#else
void flexiblas_chain_zher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zher_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zher2 = 0;

void FC_GLOBAL(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zher2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zher2.f77_hook_function[0];
    hook_pos_zher2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher2,ZHER2)))));
void FC_GLOBAL3(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher2,ZHER2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher2,ZHER2)))));
void FC_GLOBAL3(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zher2,ZHER2)))));
#else
void FC_GLOBAL2(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zher2,ZHER2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zher2,ZHER2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* a, blasint* lda, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zher2,ZHER2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zher2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zher2_")));
#else
void flexiblas_real_zher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zher2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zher2++;
    if ( hook_pos_zher2 < __flexiblas_hooks->zher2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zher2.f77_hook_function[hook_pos_zher2];
    } else {
        hook_pos_zher2 = 0;
        *(void **) &fn = current_backend->blas.zher2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zher2_")));
#else
void flexiblas_chain_zher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zher2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) a, (void*) lda, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zher2k = 0;

void FC_GLOBAL(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zher2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zher2k.f77_hook_function[0];
    hook_pos_zher2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zher2k,ZHER2K)))));
void FC_GLOBAL3(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zher2k,ZHER2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zher2k,ZHER2K)))));
void FC_GLOBAL3(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zher2k,ZHER2K)))));
#else
void FC_GLOBAL2(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zher2k,ZHER2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zher2k,ZHER2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zher2k,ZHER2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zher2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zher2k_")));
#else
void flexiblas_real_zher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zher2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zher2k++;
    if ( hook_pos_zher2k < __flexiblas_hooks->zher2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zher2k.f77_hook_function[hook_pos_zher2k];
    } else {
        hook_pos_zher2k = 0;
        *(void **) &fn = current_backend->blas.zher2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zher2k_")));
#else
void flexiblas_chain_zher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zher2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zherk = 0;

void FC_GLOBAL(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zherk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zherk.f77_hook_function[0];
    hook_pos_zherk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zherk,ZHERK)))));
void FC_GLOBAL3(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zherk,ZHERK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zherk,ZHERK)))));
void FC_GLOBAL3(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zherk,ZHERK)))));
#else
void FC_GLOBAL2(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zherk,ZHERK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zherk,ZHERK)(char* uplo, char* trans, blasint* n, blasint* k, double* alpha, double complex* a, blasint* lda, double* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zherk,ZHERK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zherk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zherk_")));
#else
void flexiblas_real_zherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zherk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zherk++;
    if ( hook_pos_zherk < __flexiblas_hooks->zherk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zherk.f77_hook_function[hook_pos_zherk];
    } else {
        hook_pos_zherk = 0;
        *(void **) &fn = current_backend->blas.zherk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zherk_")));
#else
void flexiblas_chain_zherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zherk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zhpmv = 0;

void FC_GLOBAL(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhpmv.f77_hook_function[0];
    hook_pos_zhpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpmv,ZHPMV)))));
void FC_GLOBAL3(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpmv,ZHPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpmv,ZHPMV)))));
void FC_GLOBAL3(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpmv,ZHPMV)))));
#else
void FC_GLOBAL2(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpmv,ZHPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhpmv,ZHPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpmv,ZHPMV)((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhpmv.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhpmv_")));
#else
void flexiblas_real_zhpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhpmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhpmv++;
    if ( hook_pos_zhpmv < __flexiblas_hooks->zhpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhpmv.f77_hook_function[hook_pos_zhpmv];
    } else {
        hook_pos_zhpmv = 0;
        *(void **) &fn = current_backend->blas.zhpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhpmv_")));
#else
void flexiblas_chain_zhpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhpmv_((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zhpr = 0;

void FC_GLOBAL(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhpr.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhpr.f77_hook_function[0];
    hook_pos_zhpr = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr,ZHPR)))));
void FC_GLOBAL3(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr,ZHPR)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr,ZHPR)))));
void FC_GLOBAL3(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr,ZHPR)))));
#else
void FC_GLOBAL2(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpr,ZHPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhpr,ZHPR)(char* uplo, blasint* n, double* alpha, double complex* x, blasint* incx, double complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpr,ZHPR)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhpr.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhpr_")));
#else
void flexiblas_real_zhpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhpr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhpr++;
    if ( hook_pos_zhpr < __flexiblas_hooks->zhpr.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhpr.f77_hook_function[hook_pos_zhpr];
    } else {
        hook_pos_zhpr = 0;
        *(void **) &fn = current_backend->blas.zhpr.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhpr_")));
#else
void flexiblas_chain_zhpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhpr_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zhpr2 = 0;

void FC_GLOBAL(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zhpr2.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zhpr2.f77_hook_function[0];
    hook_pos_zhpr2 = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr2,ZHPR2)))));
void FC_GLOBAL3(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr2,ZHPR2)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr2,ZHPR2)))));
void FC_GLOBAL3(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zhpr2,ZHPR2)))));
#else
void FC_GLOBAL2(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpr2,ZHPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zhpr2,ZHPR2)(char* uplo, blasint* n, double complex* alpha, double complex* x, blasint* incx, double complex* y, blasint* incy, double complex* ap, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zhpr2,ZHPR2)((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zhpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zhpr2.f77_blas_function;
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zhpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zhpr2_")));
#else
void flexiblas_real_zhpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zhpr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zhpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zhpr2++;
    if ( hook_pos_zhpr2 < __flexiblas_hooks->zhpr2.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zhpr2.f77_hook_function[hook_pos_zhpr2];
    } else {
        hook_pos_zhpr2 = 0;
        *(void **) &fn = current_backend->blas.zhpr2.f77_blas_function;
    }
    fn((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zhpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zhpr2_")));
#else
void flexiblas_chain_zhpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zhpr2_((void*) uplo, (void*) n, (void*) alpha, (void*) x, (void*) incx, (void*) y, (void*) incy, (void*) ap, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zrotg = 0;

void FC_GLOBAL(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);
    void (*fn_hook) (void* ca, void* cb, void* c, void* s);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zrotg.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zrotg.f77_hook_function[0];
    hook_pos_zrotg = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) ca, (void*) cb, (void*) c, (void*) s);
    } else {
        fn((void*) ca, (void*) cb, (void*) c, (void*) s);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s) __attribute__((alias(MTS(FC_GLOBAL(zrotg,ZROTG)))));
void FC_GLOBAL3(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s) __attribute__((alias(MTS(FC_GLOBAL(zrotg,ZROTG)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s) __attribute__((alias(MTS(FC_GLOBAL(zrotg,ZROTG)))));
void FC_GLOBAL3(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s) __attribute__((alias(MTS(FC_GLOBAL(zrotg,ZROTG)))));
#else
void FC_GLOBAL2(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s){ FC_GLOBAL(zrotg,ZROTG)((void*) ca, (void*) cb, (void*) c, (void*) s); }
void FC_GLOBAL3(zrotg,ZROTG)(double complex* ca, double complex* cb, double* c, double complex* s){ FC_GLOBAL(zrotg,ZROTG)((void*) ca, (void*) cb, (void*) c, (void*) s); }
#endif
#endif



void flexiblas_real_zrotg_(void* ca, void* cb, void* c, void* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);

    *(void **) &fn = current_backend->blas.zrotg.f77_blas_function;
    fn((void*) ca, (void*) cb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zrotg(void* ca, void* cb, void* c, void* s) __attribute__((alias("flexiblas_real_zrotg_")));
#else
void flexiblas_real_zrotg(void* ca, void* cb, void* c, void* s){flexiblas_real_zrotg_((void*) ca, (void*) cb, (void*) c, (void*) s);}
#endif


void flexiblas_chain_zrotg_(void* ca, void* cb, void* c, void* s)
{
    void (*fn) (void* ca, void* cb, void* c, void* s);



    hook_pos_zrotg++;
    if ( hook_pos_zrotg < __flexiblas_hooks->zrotg.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zrotg.f77_hook_function[hook_pos_zrotg];
    } else {
        hook_pos_zrotg = 0;
        *(void **) &fn = current_backend->blas.zrotg.f77_blas_function;
    }
    fn((void*) ca, (void*) cb, (void*) c, (void*) s);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zrotg(void* ca, void* cb, void* c, void* s) __attribute__((alias("flexiblas_chain_zrotg_")));
#else
void flexiblas_chain_zrotg(void* ca, void* cb, void* c, void* s){flexiblas_chain_zrotg_((void*) ca, (void*) cb, (void*) c, (void*) s);}
#endif


static TLS_STORE uint8_t hook_pos_zscal = 0;

void FC_GLOBAL(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx)
{
    void (*fn) (void* n, void* za, void* zx, void* incx);
    void (*fn_hook) (void* n, void* za, void* zx, void* incx);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zscal.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zscal.f77_hook_function[0];
    hook_pos_zscal = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) za, (void*) zx, (void*) incx);
    } else {
        fn((void*) n, (void*) za, (void*) zx, (void*) incx);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zscal,ZSCAL)))));
void FC_GLOBAL3(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zscal,ZSCAL)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zscal,ZSCAL)))));
void FC_GLOBAL3(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx) __attribute__((alias(MTS(FC_GLOBAL(zscal,ZSCAL)))));
#else
void FC_GLOBAL2(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx){ FC_GLOBAL(zscal,ZSCAL)((void*) n, (void*) za, (void*) zx, (void*) incx); }
void FC_GLOBAL3(zscal,ZSCAL)(blasint* n, double complex* za, double complex* zx, blasint* incx){ FC_GLOBAL(zscal,ZSCAL)((void*) n, (void*) za, (void*) zx, (void*) incx); }
#endif
#endif



void flexiblas_real_zscal_(void* n, void* za, void* zx, void* incx)
{
    void (*fn) (void* n, void* za, void* zx, void* incx);

    *(void **) &fn = current_backend->blas.zscal.f77_blas_function;
    fn((void*) n, (void*) za, (void*) zx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zscal(void* n, void* za, void* zx, void* incx) __attribute__((alias("flexiblas_real_zscal_")));
#else
void flexiblas_real_zscal(void* n, void* za, void* zx, void* incx){flexiblas_real_zscal_((void*) n, (void*) za, (void*) zx, (void*) incx);}
#endif


void flexiblas_chain_zscal_(void* n, void* za, void* zx, void* incx)
{
    void (*fn) (void* n, void* za, void* zx, void* incx);



    hook_pos_zscal++;
    if ( hook_pos_zscal < __flexiblas_hooks->zscal.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zscal.f77_hook_function[hook_pos_zscal];
    } else {
        hook_pos_zscal = 0;
        *(void **) &fn = current_backend->blas.zscal.f77_blas_function;
    }
    fn((void*) n, (void*) za, (void*) zx, (void*) incx);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zscal(void* n, void* za, void* zx, void* incx) __attribute__((alias("flexiblas_chain_zscal_")));
#else
void flexiblas_chain_zscal(void* n, void* za, void* zx, void* incx){flexiblas_chain_zscal_((void*) n, (void*) za, (void*) zx, (void*) incx);}
#endif


static TLS_STORE uint8_t hook_pos_zswap = 0;

void FC_GLOBAL(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);
    void (*fn_hook) (void* n, void* zx, void* incx, void* zy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zswap.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zswap.f77_hook_function[0];
    hook_pos_zswap = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    } else {
        fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zswap,ZSWAP)))));
void FC_GLOBAL3(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zswap,ZSWAP)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zswap,ZSWAP)))));
void FC_GLOBAL3(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zswap,ZSWAP)))));
#else
void FC_GLOBAL2(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zswap,ZSWAP)((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zswap,ZSWAP)(blasint* n, double complex* zx, blasint* incx, double complex* zy, blasint* incy){ FC_GLOBAL(zswap,ZSWAP)((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zswap_(void* n, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);

    *(void **) &fn = current_backend->blas.zswap.f77_blas_function;
    fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zswap(void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_real_zswap_")));
#else
void flexiblas_real_zswap(void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_real_zswap_((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zswap_(void* n, void* zx, void* incx, void* zy, void* incy)
{
    void (*fn) (void* n, void* zx, void* incx, void* zy, void* incy);



    hook_pos_zswap++;
    if ( hook_pos_zswap < __flexiblas_hooks->zswap.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zswap.f77_hook_function[hook_pos_zswap];
    } else {
        hook_pos_zswap = 0;
        *(void **) &fn = current_backend->blas.zswap.f77_blas_function;
    }
    fn((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zswap(void* n, void* zx, void* incx, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zswap_")));
#else
void flexiblas_chain_zswap(void* n, void* zx, void* incx, void* zy, void* incy){flexiblas_chain_zswap_((void*) n, (void*) zx, (void*) incx, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zsymm = 0;

void FC_GLOBAL(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    void (*fn_hook) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zsymm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zsymm.f77_hook_function[0];
    hook_pos_zsymm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    } else {
        fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsymm,ZSYMM)))));
void FC_GLOBAL3(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsymm,ZSYMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsymm,ZSYMM)))));
void FC_GLOBAL3(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias(MTS(FC_GLOBAL(zsymm,ZSYMM)))));
#else
void FC_GLOBAL2(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zsymm,ZSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
void FC_GLOBAL3(zsymm,ZSYMM)(char* side, char* uplo, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){ FC_GLOBAL(zsymm,ZSYMM)((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo); }
#endif
#endif



void flexiblas_real_zsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);

    *(void **) &fn = current_backend->blas.zsymm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_real_zsymm_")));
#else
void flexiblas_real_zsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_real_zsymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


void flexiblas_chain_zsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo)
{
    void (*fn) (void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo);



    hook_pos_zsymm++;
    if ( hook_pos_zsymm < __flexiblas_hooks->zsymm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zsymm.f77_hook_function[hook_pos_zsymm];
    } else {
        hook_pos_zsymm = 0;
        *(void **) &fn = current_backend->blas.zsymm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo) __attribute__((alias("flexiblas_chain_zsymm_")));
#else
void flexiblas_chain_zsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo){flexiblas_chain_zsymm_((void*) side, (void*) uplo, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo);}
#endif


static TLS_STORE uint8_t hook_pos_zsyr2k = 0;

void FC_GLOBAL(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zsyr2k.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zsyr2k.f77_hook_function[0];
    hook_pos_zsyr2k = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyr2k,ZSYR2K)))));
void FC_GLOBAL3(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyr2k,ZSYR2K)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyr2k,ZSYR2K)))));
void FC_GLOBAL3(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyr2k,ZSYR2K)))));
#else
void FC_GLOBAL2(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zsyr2k,ZSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zsyr2k,ZSYR2K)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zsyr2k,ZSYR2K)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zsyr2k.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zsyr2k_")));
#else
void flexiblas_real_zsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zsyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zsyr2k++;
    if ( hook_pos_zsyr2k < __flexiblas_hooks->zsyr2k.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zsyr2k.f77_hook_function[hook_pos_zsyr2k];
    } else {
        hook_pos_zsyr2k = 0;
        *(void **) &fn = current_backend->blas.zsyr2k.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zsyr2k_")));
#else
void flexiblas_chain_zsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zsyr2k_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zsyrk = 0;

void FC_GLOBAL(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zsyrk.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zsyrk.f77_hook_function[0];
    hook_pos_zsyrk = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyrk,ZSYRK)))));
void FC_GLOBAL3(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyrk,ZSYRK)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyrk,ZSYRK)))));
void FC_GLOBAL3(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zsyrk,ZSYRK)))));
#else
void FC_GLOBAL2(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zsyrk,ZSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zsyrk,ZSYRK)(char* uplo, char* trans, blasint* n, blasint* k, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* c, blasint* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zsyrk,ZSYRK)((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zsyrk.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zsyrk_")));
#else
void flexiblas_real_zsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zsyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zsyrk++;
    if ( hook_pos_zsyrk < __flexiblas_hooks->zsyrk.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zsyrk.f77_hook_function[hook_pos_zsyrk];
    } else {
        hook_pos_zsyrk = 0;
        *(void **) &fn = current_backend->blas.zsyrk.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zsyrk_")));
#else
void flexiblas_chain_zsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zsyrk_((void*) uplo, (void*) trans, (void*) n, (void*) k, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) c, (void*) ldc, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_ztbmv = 0;

void FC_GLOBAL(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztbmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztbmv.f77_hook_function[0];
    hook_pos_ztbmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbmv,ZTBMV)))));
void FC_GLOBAL3(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbmv,ZTBMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbmv,ZTBMV)))));
void FC_GLOBAL3(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbmv,ZTBMV)))));
#else
void FC_GLOBAL2(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztbmv,ZTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztbmv,ZTBMV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztbmv,ZTBMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztbmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztbmv_")));
#else
void flexiblas_real_ztbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztbmv++;
    if ( hook_pos_ztbmv < __flexiblas_hooks->ztbmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztbmv.f77_hook_function[hook_pos_ztbmv];
    } else {
        hook_pos_ztbmv = 0;
        *(void **) &fn = current_backend->blas.ztbmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztbmv_")));
#else
void flexiblas_chain_ztbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztbmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztbsv = 0;

void FC_GLOBAL(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztbsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztbsv.f77_hook_function[0];
    hook_pos_ztbsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbsv,ZTBSV)))));
void FC_GLOBAL3(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbsv,ZTBSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbsv,ZTBSV)))));
void FC_GLOBAL3(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztbsv,ZTBSV)))));
#else
void FC_GLOBAL2(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztbsv,ZTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztbsv,ZTBSV)(char* uplo, char* trans, char* diag, blasint* n, blasint* k, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztbsv,ZTBSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztbsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztbsv_")));
#else
void flexiblas_real_ztbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztbsv++;
    if ( hook_pos_ztbsv < __flexiblas_hooks->ztbsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztbsv.f77_hook_function[hook_pos_ztbsv];
    } else {
        hook_pos_ztbsv = 0;
        *(void **) &fn = current_backend->blas.ztbsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztbsv_")));
#else
void flexiblas_chain_ztbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztbsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztpmv = 0;

void FC_GLOBAL(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztpmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztpmv.f77_hook_function[0];
    hook_pos_ztpmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpmv,ZTPMV)))));
void FC_GLOBAL3(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpmv,ZTPMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpmv,ZTPMV)))));
void FC_GLOBAL3(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpmv,ZTPMV)))));
#else
void FC_GLOBAL2(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztpmv,ZTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztpmv,ZTPMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztpmv,ZTPMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztpmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztpmv_")));
#else
void flexiblas_real_ztpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztpmv++;
    if ( hook_pos_ztpmv < __flexiblas_hooks->ztpmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztpmv.f77_hook_function[hook_pos_ztpmv];
    } else {
        hook_pos_ztpmv = 0;
        *(void **) &fn = current_backend->blas.ztpmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztpmv_")));
#else
void flexiblas_chain_ztpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztpmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztpsv = 0;

void FC_GLOBAL(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztpsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztpsv.f77_hook_function[0];
    hook_pos_ztpsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpsv,ZTPSV)))));
void FC_GLOBAL3(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpsv,ZTPSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpsv,ZTPSV)))));
void FC_GLOBAL3(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztpsv,ZTPSV)))));
#else
void FC_GLOBAL2(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztpsv,ZTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztpsv,ZTPSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* ap, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztpsv,ZTPSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztpsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztpsv_")));
#else
void flexiblas_real_ztpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztpsv++;
    if ( hook_pos_ztpsv < __flexiblas_hooks->ztpsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztpsv.f77_hook_function[hook_pos_ztpsv];
    } else {
        hook_pos_ztpsv = 0;
        *(void **) &fn = current_backend->blas.ztpsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztpsv_")));
#else
void flexiblas_chain_ztpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztpsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) ap, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztrmm = 0;

void FC_GLOBAL(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztrmm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztrmm.f77_hook_function[0];
    hook_pos_ztrmm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmm,ZTRMM)))));
void FC_GLOBAL3(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmm,ZTRMM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmm,ZTRMM)))));
void FC_GLOBAL3(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmm,ZTRMM)))));
#else
void FC_GLOBAL2(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrmm,ZTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztrmm,ZTRMM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrmm,ZTRMM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztrmm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztrmm_")));
#else
void flexiblas_real_ztrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztrmm++;
    if ( hook_pos_ztrmm < __flexiblas_hooks->ztrmm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztrmm.f77_hook_function[hook_pos_ztrmm];
    } else {
        hook_pos_ztrmm = 0;
        *(void **) &fn = current_backend->blas.ztrmm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztrmm_")));
#else
void flexiblas_chain_ztrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztrmm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztrmv = 0;

void FC_GLOBAL(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztrmv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztrmv.f77_hook_function[0];
    hook_pos_ztrmv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmv,ZTRMV)))));
void FC_GLOBAL3(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmv,ZTRMV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmv,ZTRMV)))));
void FC_GLOBAL3(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrmv,ZTRMV)))));
#else
void FC_GLOBAL2(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrmv,ZTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztrmv,ZTRMV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrmv,ZTRMV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztrmv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztrmv_")));
#else
void flexiblas_real_ztrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztrmv++;
    if ( hook_pos_ztrmv < __flexiblas_hooks->ztrmv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztrmv.f77_hook_function[hook_pos_ztrmv];
    } else {
        hook_pos_ztrmv = 0;
        *(void **) &fn = current_backend->blas.ztrmv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztrmv_")));
#else
void flexiblas_chain_ztrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztrmv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztrsm = 0;

void FC_GLOBAL(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztrsm.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztrsm.f77_hook_function[0];
    hook_pos_ztrsm = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsm,ZTRSM)))));
void FC_GLOBAL3(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsm,ZTRSM)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsm,ZTRSM)))));
void FC_GLOBAL3(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsm,ZTRSM)))));
#else
void FC_GLOBAL2(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrsm,ZTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztrsm,ZTRSM)(char* side, char* uplo, char* transa, char* diag, blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrsm,ZTRSM)((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztrsm.f77_blas_function;
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztrsm_")));
#else
void flexiblas_real_ztrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztrsm++;
    if ( hook_pos_ztrsm < __flexiblas_hooks->ztrsm.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztrsm.f77_hook_function[hook_pos_ztrsm];
    } else {
        hook_pos_ztrsm = 0;
        *(void **) &fn = current_backend->blas.ztrsm.f77_blas_function;
    }
    fn((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_side, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_transa, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztrsm_")));
#else
void flexiblas_chain_ztrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_side, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_transa, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztrsm_((void*) side, (void*) uplo, (void*) transa, (void*) diag, (void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_side, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_transa, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_ztrsv = 0;

void FC_GLOBAL(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.ztrsv.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->ztrsv.f77_hook_function[0];
    hook_pos_ztrsv = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    } else {
        fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsv,ZTRSV)))));
void FC_GLOBAL3(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsv,ZTRSV)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsv,ZTRSV)))));
void FC_GLOBAL3(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias(MTS(FC_GLOBAL(ztrsv,ZTRSV)))));
#else
void FC_GLOBAL2(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrsv,ZTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
void FC_GLOBAL3(ztrsv,ZTRSV)(char* uplo, char* trans, char* diag, blasint* n, double complex* a, blasint* lda, double complex* x, blasint* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){ FC_GLOBAL(ztrsv,ZTRSV)((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag); }
#endif
#endif



void flexiblas_real_ztrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);

    *(void **) &fn = current_backend->blas.ztrsv.f77_blas_function;
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_real_ztrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_real_ztrsv_")));
#else
void flexiblas_real_ztrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_real_ztrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


void flexiblas_chain_ztrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag)
{
    void (*fn) (void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag);



    hook_pos_ztrsv++;
    if ( hook_pos_ztrsv < __flexiblas_hooks->ztrsv.nhook ) {
        *(void **) &fn = __flexiblas_hooks->ztrsv.f77_hook_function[hook_pos_ztrsv];
    } else {
        hook_pos_ztrsv = 0;
        *(void **) &fn = current_backend->blas.ztrsv.f77_blas_function;
    }
    fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, ( flexiblas_fortran_charlen_t ) len_uplo, ( flexiblas_fortran_charlen_t ) len_trans, ( flexiblas_fortran_charlen_t ) len_diag);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_ztrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag) __attribute__((alias("flexiblas_chain_ztrsv_")));
#else
void flexiblas_chain_ztrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx, flexiblas_fortran_charlen_t len_uplo, flexiblas_fortran_charlen_t len_trans, flexiblas_fortran_charlen_t len_diag){flexiblas_chain_ztrsv_((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) a, (void*) lda, (void*) x, (void*) incx, (flexiblas_fortran_charlen_t) len_uplo, (flexiblas_fortran_charlen_t) len_trans, (flexiblas_fortran_charlen_t) len_diag);}
#endif


static TLS_STORE uint8_t hook_pos_caxpby = 0;

void FC_GLOBAL(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy);
    void (*fn_hook) (void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.caxpby.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->caxpby.f77_hook_function[0];
    hook_pos_caxpby = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);
    } else {
        fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpby,CAXPBY)))));
void FC_GLOBAL3(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpby,CAXPBY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpby,CAXPBY)))));
void FC_GLOBAL3(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(caxpby,CAXPBY)))));
#else
void FC_GLOBAL2(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy){ FC_GLOBAL(caxpby,CAXPBY)((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy); }
void FC_GLOBAL3(caxpby,CAXPBY)(blasint* n, float complex* ca, float complex* cx, blasint* incx, float complex* cb, float complex* cy, blasint* incy){ FC_GLOBAL(caxpby,CAXPBY)((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy); }
#endif
#endif



void flexiblas_real_caxpby_(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy);

    *(void **) &fn = current_backend->blas.caxpby.f77_blas_function;
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_caxpby(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy) __attribute__((alias("flexiblas_real_caxpby_")));
#else
void flexiblas_real_caxpby(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy){flexiblas_real_caxpby_((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);}
#endif


void flexiblas_chain_caxpby_(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy)
{
    void (*fn) (void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy);



    hook_pos_caxpby++;
    if ( hook_pos_caxpby < __flexiblas_hooks->caxpby.nhook ) {
        *(void **) &fn = __flexiblas_hooks->caxpby.f77_hook_function[hook_pos_caxpby];
    } else {
        hook_pos_caxpby = 0;
        *(void **) &fn = current_backend->blas.caxpby.f77_blas_function;
    }
    fn((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_caxpby(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy) __attribute__((alias("flexiblas_chain_caxpby_")));
#else
void flexiblas_chain_caxpby(void* n, void* ca, void* cx, void* incx, void* cb, void* cy, void* incy){flexiblas_chain_caxpby_((void*) n, (void*) ca, (void*) cx, (void*) incx, (void*) cb, (void*) cy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_daxpby = 0;

void FC_GLOBAL(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy);
    void (*fn_hook) (void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.daxpby.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->daxpby.f77_hook_function[0];
    hook_pos_daxpby = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);
    } else {
        fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpby,DAXPBY)))));
void FC_GLOBAL3(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpby,DAXPBY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpby,DAXPBY)))));
void FC_GLOBAL3(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(daxpby,DAXPBY)))));
#else
void FC_GLOBAL2(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy){ FC_GLOBAL(daxpby,DAXPBY)((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy); }
void FC_GLOBAL3(daxpby,DAXPBY)(blasint* n, double* da, double* dx, blasint* incx, double* db, double* dy, blasint* incy){ FC_GLOBAL(daxpby,DAXPBY)((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy); }
#endif
#endif



void flexiblas_real_daxpby_(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy);

    *(void **) &fn = current_backend->blas.daxpby.f77_blas_function;
    fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_daxpby(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy) __attribute__((alias("flexiblas_real_daxpby_")));
#else
void flexiblas_real_daxpby(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy){flexiblas_real_daxpby_((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);}
#endif


void flexiblas_chain_daxpby_(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy)
{
    void (*fn) (void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy);



    hook_pos_daxpby++;
    if ( hook_pos_daxpby < __flexiblas_hooks->daxpby.nhook ) {
        *(void **) &fn = __flexiblas_hooks->daxpby.f77_hook_function[hook_pos_daxpby];
    } else {
        hook_pos_daxpby = 0;
        *(void **) &fn = current_backend->blas.daxpby.f77_blas_function;
    }
    fn((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_daxpby(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy) __attribute__((alias("flexiblas_chain_daxpby_")));
#else
void flexiblas_chain_daxpby(void* n, void* da, void* dx, void* incx, void* db, void* dy, void* incy){flexiblas_chain_daxpby_((void*) n, (void*) da, (void*) dx, (void*) incx, (void*) db, (void*) dy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_zaxpby = 0;

void FC_GLOBAL(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy);
    void (*fn_hook) (void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zaxpby.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zaxpby.f77_hook_function[0];
    hook_pos_zaxpby = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);
    } else {
        fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpby,ZAXPBY)))));
void FC_GLOBAL3(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpby,ZAXPBY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpby,ZAXPBY)))));
void FC_GLOBAL3(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zaxpby,ZAXPBY)))));
#else
void FC_GLOBAL2(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy){ FC_GLOBAL(zaxpby,ZAXPBY)((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy); }
void FC_GLOBAL3(zaxpby,ZAXPBY)(blasint* n, double complex* za, double complex* zx, blasint* incx, double complex* zb, double complex* zy, blasint* incy){ FC_GLOBAL(zaxpby,ZAXPBY)((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy); }
#endif
#endif



void flexiblas_real_zaxpby_(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy);

    *(void **) &fn = current_backend->blas.zaxpby.f77_blas_function;
    fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zaxpby(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy) __attribute__((alias("flexiblas_real_zaxpby_")));
#else
void flexiblas_real_zaxpby(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy){flexiblas_real_zaxpby_((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);}
#endif


void flexiblas_chain_zaxpby_(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy)
{
    void (*fn) (void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy);



    hook_pos_zaxpby++;
    if ( hook_pos_zaxpby < __flexiblas_hooks->zaxpby.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zaxpby.f77_hook_function[hook_pos_zaxpby];
    } else {
        hook_pos_zaxpby = 0;
        *(void **) &fn = current_backend->blas.zaxpby.f77_blas_function;
    }
    fn((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zaxpby(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy) __attribute__((alias("flexiblas_chain_zaxpby_")));
#else
void flexiblas_chain_zaxpby(void* n, void* za, void* zx, void* incx, void* zb, void* zy, void* incy){flexiblas_chain_zaxpby_((void*) n, (void*) za, (void*) zx, (void*) incx, (void*) zb, (void*) zy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_saxpby = 0;

void FC_GLOBAL(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy);
    void (*fn_hook) (void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.saxpby.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->saxpby.f77_hook_function[0];
    hook_pos_saxpby = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);
    } else {
        fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpby,SAXPBY)))));
void FC_GLOBAL3(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpby,SAXPBY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpby,SAXPBY)))));
void FC_GLOBAL3(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(saxpby,SAXPBY)))));
#else
void FC_GLOBAL2(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy){ FC_GLOBAL(saxpby,SAXPBY)((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy); }
void FC_GLOBAL3(saxpby,SAXPBY)(blasint* n, float* sa, float* sx, blasint* incx, float* sb, float* sy, blasint* incy){ FC_GLOBAL(saxpby,SAXPBY)((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy); }
#endif
#endif



void flexiblas_real_saxpby_(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy);

    *(void **) &fn = current_backend->blas.saxpby.f77_blas_function;
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_real_saxpby(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy) __attribute__((alias("flexiblas_real_saxpby_")));
#else
void flexiblas_real_saxpby(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy){flexiblas_real_saxpby_((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);}
#endif


void flexiblas_chain_saxpby_(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy)
{
    void (*fn) (void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy);



    hook_pos_saxpby++;
    if ( hook_pos_saxpby < __flexiblas_hooks->saxpby.nhook ) {
        *(void **) &fn = __flexiblas_hooks->saxpby.f77_hook_function[hook_pos_saxpby];
    } else {
        hook_pos_saxpby = 0;
        *(void **) &fn = current_backend->blas.saxpby.f77_blas_function;
    }
    fn((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_saxpby(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy) __attribute__((alias("flexiblas_chain_saxpby_")));
#else
void flexiblas_chain_saxpby(void* n, void* sa, void* sx, void* incx, void* sb, void* sy, void* incy){flexiblas_chain_saxpby_((void*) n, (void*) sa, (void*) sx, (void*) incx, (void*) sb, (void*) sy, (void*) incy);}
#endif


static TLS_STORE uint8_t hook_pos_comatcopy = 0;

void FC_GLOBAL(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.comatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->comatcopy.f77_hook_function[0];
    hook_pos_comatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(comatcopy,COMATCOPY)))));
void FC_GLOBAL3(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(comatcopy,COMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(comatcopy,COMATCOPY)))));
void FC_GLOBAL3(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(comatcopy,COMATCOPY)))));
#else
void FC_GLOBAL2(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(comatcopy,COMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(comatcopy,COMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, float complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(comatcopy,COMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_comatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.comatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_comatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_comatcopy_")));
#else
void flexiblas_real_comatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_comatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_comatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_comatcopy++;
    if ( hook_pos_comatcopy < __flexiblas_hooks->comatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->comatcopy.f77_hook_function[hook_pos_comatcopy];
    } else {
        hook_pos_comatcopy = 0;
        *(void **) &fn = current_backend->blas.comatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_comatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_comatcopy_")));
#else
void flexiblas_chain_comatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_comatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zomatcopy = 0;

void FC_GLOBAL(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zomatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zomatcopy.f77_hook_function[0];
    hook_pos_zomatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zomatcopy,ZOMATCOPY)))));
void FC_GLOBAL3(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zomatcopy,ZOMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zomatcopy,ZOMATCOPY)))));
void FC_GLOBAL3(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zomatcopy,ZOMATCOPY)))));
#else
void FC_GLOBAL2(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zomatcopy,ZOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zomatcopy,ZOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, double complex* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zomatcopy,ZOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zomatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zomatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zomatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zomatcopy_")));
#else
void flexiblas_real_zomatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zomatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zomatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zomatcopy++;
    if ( hook_pos_zomatcopy < __flexiblas_hooks->zomatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zomatcopy.f77_hook_function[hook_pos_zomatcopy];
    } else {
        hook_pos_zomatcopy = 0;
        *(void **) &fn = current_backend->blas.zomatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zomatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zomatcopy_")));
#else
void flexiblas_chain_zomatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zomatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_domatcopy = 0;

void FC_GLOBAL(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.domatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->domatcopy.f77_hook_function[0];
    hook_pos_domatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(domatcopy,DOMATCOPY)))));
void FC_GLOBAL3(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(domatcopy,DOMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(domatcopy,DOMATCOPY)))));
void FC_GLOBAL3(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(domatcopy,DOMATCOPY)))));
#else
void FC_GLOBAL2(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(domatcopy,DOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(domatcopy,DOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, double* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(domatcopy,DOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_domatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.domatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_domatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_domatcopy_")));
#else
void flexiblas_real_domatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_domatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_domatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_domatcopy++;
    if ( hook_pos_domatcopy < __flexiblas_hooks->domatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->domatcopy.f77_hook_function[hook_pos_domatcopy];
    } else {
        hook_pos_domatcopy = 0;
        *(void **) &fn = current_backend->blas.domatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_domatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_domatcopy_")));
#else
void flexiblas_chain_domatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_domatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_somatcopy = 0;

void FC_GLOBAL(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.somatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->somatcopy.f77_hook_function[0];
    hook_pos_somatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(somatcopy,SOMATCOPY)))));
void FC_GLOBAL3(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(somatcopy,SOMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(somatcopy,SOMATCOPY)))));
void FC_GLOBAL3(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(somatcopy,SOMATCOPY)))));
#else
void FC_GLOBAL2(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(somatcopy,SOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(somatcopy,SOMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, float* b, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(somatcopy,SOMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_somatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.somatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_somatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_somatcopy_")));
#else
void flexiblas_real_somatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_somatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_somatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_somatcopy++;
    if ( hook_pos_somatcopy < __flexiblas_hooks->somatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->somatcopy.f77_hook_function[hook_pos_somatcopy];
    } else {
        hook_pos_somatcopy = 0;
        *(void **) &fn = current_backend->blas.somatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_somatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_somatcopy_")));
#else
void flexiblas_chain_somatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* b, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_somatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) b, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_cimatcopy = 0;

void FC_GLOBAL(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cimatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cimatcopy.f77_hook_function[0];
    hook_pos_cimatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cimatcopy,CIMATCOPY)))));
void FC_GLOBAL3(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cimatcopy,CIMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cimatcopy,CIMATCOPY)))));
void FC_GLOBAL3(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(cimatcopy,CIMATCOPY)))));
#else
void FC_GLOBAL2(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cimatcopy,CIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(cimatcopy,CIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float complex* alpha, float complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(cimatcopy,CIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_cimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.cimatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_cimatcopy_")));
#else
void flexiblas_real_cimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_cimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_cimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_cimatcopy++;
    if ( hook_pos_cimatcopy < __flexiblas_hooks->cimatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cimatcopy.f77_hook_function[hook_pos_cimatcopy];
    } else {
        hook_pos_cimatcopy = 0;
        *(void **) &fn = current_backend->blas.cimatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_cimatcopy_")));
#else
void flexiblas_chain_cimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_cimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_zimatcopy = 0;

void FC_GLOBAL(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zimatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zimatcopy.f77_hook_function[0];
    hook_pos_zimatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zimatcopy,ZIMATCOPY)))));
void FC_GLOBAL3(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zimatcopy,ZIMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zimatcopy,ZIMATCOPY)))));
void FC_GLOBAL3(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(zimatcopy,ZIMATCOPY)))));
#else
void FC_GLOBAL2(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zimatcopy,ZIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(zimatcopy,ZIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double complex* alpha, double complex* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(zimatcopy,ZIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_zimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.zimatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_zimatcopy_")));
#else
void flexiblas_real_zimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_zimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_zimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_zimatcopy++;
    if ( hook_pos_zimatcopy < __flexiblas_hooks->zimatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zimatcopy.f77_hook_function[hook_pos_zimatcopy];
    } else {
        hook_pos_zimatcopy = 0;
        *(void **) &fn = current_backend->blas.zimatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_zimatcopy_")));
#else
void flexiblas_chain_zimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_zimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_dimatcopy = 0;

void FC_GLOBAL(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dimatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dimatcopy.f77_hook_function[0];
    hook_pos_dimatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dimatcopy,DIMATCOPY)))));
void FC_GLOBAL3(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dimatcopy,DIMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dimatcopy,DIMATCOPY)))));
void FC_GLOBAL3(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(dimatcopy,DIMATCOPY)))));
#else
void FC_GLOBAL2(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dimatcopy,DIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(dimatcopy,DIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, double* alpha, double* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(dimatcopy,DIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_dimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.dimatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_dimatcopy_")));
#else
void flexiblas_real_dimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_dimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_dimatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_dimatcopy++;
    if ( hook_pos_dimatcopy < __flexiblas_hooks->dimatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dimatcopy.f77_hook_function[hook_pos_dimatcopy];
    } else {
        hook_pos_dimatcopy = 0;
        *(void **) &fn = current_backend->blas.dimatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_dimatcopy_")));
#else
void flexiblas_chain_dimatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_dimatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_simatcopy = 0;

void FC_GLOBAL(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    void (*fn_hook) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.simatcopy.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->simatcopy.f77_hook_function[0];
    hook_pos_simatcopy = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    } else {
        fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(simatcopy,SIMATCOPY)))));
void FC_GLOBAL3(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(simatcopy,SIMATCOPY)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(simatcopy,SIMATCOPY)))));
void FC_GLOBAL3(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias(MTS(FC_GLOBAL(simatcopy,SIMATCOPY)))));
#else
void FC_GLOBAL2(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(simatcopy,SIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
void FC_GLOBAL3(simatcopy,SIMATCOPY)(char* order, char* trans, blasint* rows, blasint* cols, float* alpha, float* a, blasint* lda, blasint* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){ FC_GLOBAL(simatcopy,SIMATCOPY)((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans); }
#endif
#endif



void flexiblas_real_simatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);

    *(void **) &fn = current_backend->blas.simatcopy.f77_blas_function;
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_real_simatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_real_simatcopy_")));
#else
void flexiblas_real_simatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_real_simatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


void flexiblas_chain_simatcopy_(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans)
{
    void (*fn) (void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans);



    hook_pos_simatcopy++;
    if ( hook_pos_simatcopy < __flexiblas_hooks->simatcopy.nhook ) {
        *(void **) &fn = __flexiblas_hooks->simatcopy.f77_hook_function[hook_pos_simatcopy];
    } else {
        hook_pos_simatcopy = 0;
        *(void **) &fn = current_backend->blas.simatcopy.f77_blas_function;
    }
    fn((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, ( flexiblas_fortran_charlen_t ) len_order, ( flexiblas_fortran_charlen_t ) len_trans);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_simatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans) __attribute__((alias("flexiblas_chain_simatcopy_")));
#else
void flexiblas_chain_simatcopy(void* order, void* trans, void* rows, void* cols, void* alpha, void* a, void* lda, void* ldb, flexiblas_fortran_charlen_t len_order, flexiblas_fortran_charlen_t len_trans){flexiblas_chain_simatcopy_((void*) order, (void*) trans, (void*) rows, (void*) cols, (void*) alpha, (void*) a, (void*) lda, (void*) ldb, (flexiblas_fortran_charlen_t) len_order, (flexiblas_fortran_charlen_t) len_trans);}
#endif


static TLS_STORE uint8_t hook_pos_sgeadd = 0;

void FC_GLOBAL(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    void (*fn_hook) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.sgeadd.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->sgeadd.f77_hook_function[0];
    hook_pos_sgeadd = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(sgeadd,SGEADD)))));
void FC_GLOBAL3(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(sgeadd,SGEADD)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(sgeadd,SGEADD)))));
void FC_GLOBAL3(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(sgeadd,SGEADD)))));
#else
void FC_GLOBAL2(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb){ FC_GLOBAL(sgeadd,SGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
void FC_GLOBAL3(sgeadd,SGEADD)(blasint* m, blasint* n, float* alpha, float* a, blasint* lda, float* beta, float* b, blasint* ldb){ FC_GLOBAL(sgeadd,SGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
#endif
#endif



void flexiblas_real_sgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);

    *(void **) &fn = current_backend->blas.sgeadd.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_sgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_real_sgeadd_")));
#else
void flexiblas_real_sgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_real_sgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


void flexiblas_chain_sgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);



    hook_pos_sgeadd++;
    if ( hook_pos_sgeadd < __flexiblas_hooks->sgeadd.nhook ) {
        *(void **) &fn = __flexiblas_hooks->sgeadd.f77_hook_function[hook_pos_sgeadd];
    } else {
        hook_pos_sgeadd = 0;
        *(void **) &fn = current_backend->blas.sgeadd.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_sgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_chain_sgeadd_")));
#else
void flexiblas_chain_sgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_chain_sgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


static TLS_STORE uint8_t hook_pos_dgeadd = 0;

void FC_GLOBAL(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    void (*fn_hook) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.dgeadd.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->dgeadd.f77_hook_function[0];
    hook_pos_dgeadd = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dgeadd,DGEADD)))));
void FC_GLOBAL3(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dgeadd,DGEADD)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dgeadd,DGEADD)))));
void FC_GLOBAL3(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dgeadd,DGEADD)))));
#else
void FC_GLOBAL2(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb){ FC_GLOBAL(dgeadd,DGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
void FC_GLOBAL3(dgeadd,DGEADD)(blasint* m, blasint* n, double* alpha, double* a, blasint* lda, double* beta, double* b, blasint* ldb){ FC_GLOBAL(dgeadd,DGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
#endif
#endif



void flexiblas_real_dgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);

    *(void **) &fn = current_backend->blas.dgeadd.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_dgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_real_dgeadd_")));
#else
void flexiblas_real_dgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_real_dgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


void flexiblas_chain_dgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);



    hook_pos_dgeadd++;
    if ( hook_pos_dgeadd < __flexiblas_hooks->dgeadd.nhook ) {
        *(void **) &fn = __flexiblas_hooks->dgeadd.f77_hook_function[hook_pos_dgeadd];
    } else {
        hook_pos_dgeadd = 0;
        *(void **) &fn = current_backend->blas.dgeadd.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_dgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_chain_dgeadd_")));
#else
void flexiblas_chain_dgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_chain_dgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


static TLS_STORE uint8_t hook_pos_cgeadd = 0;

void FC_GLOBAL(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    void (*fn_hook) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.cgeadd.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->cgeadd.f77_hook_function[0];
    hook_pos_cgeadd = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(cgeadd,CGEADD)))));
void FC_GLOBAL3(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(cgeadd,CGEADD)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(cgeadd,CGEADD)))));
void FC_GLOBAL3(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(cgeadd,CGEADD)))));
#else
void FC_GLOBAL2(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb){ FC_GLOBAL(cgeadd,CGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
void FC_GLOBAL3(cgeadd,CGEADD)(blasint* m, blasint* n, float complex* alpha, float complex* a, blasint* lda, float complex* beta, float complex* b, blasint* ldb){ FC_GLOBAL(cgeadd,CGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
#endif
#endif



void flexiblas_real_cgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);

    *(void **) &fn = current_backend->blas.cgeadd.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_cgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_real_cgeadd_")));
#else
void flexiblas_real_cgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_real_cgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


void flexiblas_chain_cgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);



    hook_pos_cgeadd++;
    if ( hook_pos_cgeadd < __flexiblas_hooks->cgeadd.nhook ) {
        *(void **) &fn = __flexiblas_hooks->cgeadd.f77_hook_function[hook_pos_cgeadd];
    } else {
        hook_pos_cgeadd = 0;
        *(void **) &fn = current_backend->blas.cgeadd.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_cgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_chain_cgeadd_")));
#else
void flexiblas_chain_cgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_chain_cgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


static TLS_STORE uint8_t hook_pos_zgeadd = 0;

void FC_GLOBAL(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    void (*fn_hook) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);
    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    *(void **) &fn = current_backend->blas.zgeadd.f77_blas_function;
    *(void **) &fn_hook = __flexiblas_hooks->zgeadd.f77_hook_function[0];
    hook_pos_zgeadd = 0;
    if ( fn_hook != NULL) {
        fn_hook((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    } else {
        fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);
    }
    return;
}
#ifdef FLEXIBLAS_ABI_IBM
void FC_GLOBAL2(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(zgeadd,ZGEADD)))));
void FC_GLOBAL3(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(zgeadd,ZGEADD)))));
#else
#ifndef __APPLE__
void FC_GLOBAL2(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(zgeadd,ZGEADD)))));
void FC_GLOBAL3(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(zgeadd,ZGEADD)))));
#else
void FC_GLOBAL2(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb){ FC_GLOBAL(zgeadd,ZGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
void FC_GLOBAL3(zgeadd,ZGEADD)(blasint* m, blasint* n, double complex* alpha, double complex* a, blasint* lda, double complex* beta, double complex* b, blasint* ldb){ FC_GLOBAL(zgeadd,ZGEADD)((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb); }
#endif
#endif



void flexiblas_real_zgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);

    *(void **) &fn = current_backend->blas.zgeadd.f77_blas_function;
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_real_zgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_real_zgeadd_")));
#else
void flexiblas_real_zgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_real_zgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif


void flexiblas_chain_zgeadd_(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb)
{
    void (*fn) (void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb);



    hook_pos_zgeadd++;
    if ( hook_pos_zgeadd < __flexiblas_hooks->zgeadd.nhook ) {
        *(void **) &fn = __flexiblas_hooks->zgeadd.f77_hook_function[hook_pos_zgeadd];
    } else {
        hook_pos_zgeadd = 0;
        *(void **) &fn = current_backend->blas.zgeadd.f77_blas_function;
    }
    fn((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);

    return;
}
#ifndef __APPLE__
void flexiblas_chain_zgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb) __attribute__((alias("flexiblas_chain_zgeadd_")));
#else
void flexiblas_chain_zgeadd(void* m, void* n, void* alpha, void* a, void* lda, void* beta, void* b, void* ldb){flexiblas_chain_zgeadd_((void*) m, (void*) n, (void*) alpha, (void*) a, (void*) lda, (void*) beta, (void*) b, (void*) ldb);}
#endif



