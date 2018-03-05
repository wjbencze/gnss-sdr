/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_SupportedWCDMAInfo_H_
#define	_SupportedWCDMAInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedWCDMAInfo */
typedef struct SupportedWCDMAInfo {
	BOOLEAN_t	 mRL;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedWCDMAInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedWCDMAInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedWCDMAInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedWCDMAInfo_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedWCDMAInfo_H_ */
#include "asn_internal.h"
