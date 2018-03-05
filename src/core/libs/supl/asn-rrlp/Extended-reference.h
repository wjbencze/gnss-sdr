/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _Extended_reference_H_
#define _Extended_reference_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Extended-reference */
    typedef struct Extended_reference
    {
        long smlc_code;
        long transaction_ID;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } Extended_reference_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_Extended_reference;

#ifdef __cplusplus
}
#endif

#endif /* _Extended_reference_H_ */
#include "asn_internal.h"
