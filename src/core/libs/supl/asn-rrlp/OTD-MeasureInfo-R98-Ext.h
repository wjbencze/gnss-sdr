/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _OTD_MeasureInfo_R98_Ext_H_
#define _OTD_MeasureInfo_R98_Ext_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OTD-MsrElementFirst-R98-Ext.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* OTD-MeasureInfo-R98-Ext */
    typedef struct OTD_MeasureInfo_R98_Ext
    {
        OTD_MsrElementFirst_R98_Ext_t otdMsrFirstSets_R98_Ext;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } OTD_MeasureInfo_R98_Ext_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_OTD_MeasureInfo_R98_Ext;

#ifdef __cplusplus
}
#endif

#endif /* _OTD_MeasureInfo_R98_Ext_H_ */
#include "asn_internal.h"
