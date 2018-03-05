/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _LocationInfo_H_
#define _LocationInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "FixType.h"
#include "Ext-GeographicalInformation.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* LocationInfo */
    typedef struct LocationInfo
    {
        long refFrame;
        long *gpsTOW /* OPTIONAL */;
        FixType_t fixType;
        Ext_GeographicalInformation_t posEstimate;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } LocationInfo_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_LocationInfo;

#ifdef __cplusplus
}
#endif

#endif /* _LocationInfo_H_ */
#include "asn_internal.h"
