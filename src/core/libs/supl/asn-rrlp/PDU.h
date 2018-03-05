/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../rrlp-messages.asn"
 */

#ifndef _PDU_H_
#define _PDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "RRLP-Component.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* PDU */
    typedef struct PDU
    {
        long referenceNumber;
        RRLP_Component_t component;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } PDU_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_PDU;

#ifdef __cplusplus
}
#endif

#endif /* _PDU_H_ */
#include "asn_internal.h"
