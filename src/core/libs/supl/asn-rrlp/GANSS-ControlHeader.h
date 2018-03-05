/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _GANSS_ControlHeader_H_
#define _GANSS_ControlHeader_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GANSSCommonAssistData;
    struct SeqOfGANSSGenericAssistDataElement;

    /* GANSS-ControlHeader */
    typedef struct GANSS_ControlHeader
    {
        struct GANSSCommonAssistData *ganssCommonAssistData /* OPTIONAL */;
        struct SeqOfGANSSGenericAssistDataElement *ganssGenericAssistDataList /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSS_ControlHeader_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSS_ControlHeader;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSCommonAssistData.h"
#include "SeqOfGANSSGenericAssistDataElement.h"

#endif /* _GANSS_ControlHeader_H_ */
#include "asn_internal.h"
