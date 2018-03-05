/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_ULP_PDU_H_
#define	_ULP_PDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Version.h"
#include "SessionID.h"
#include "UlpMessage.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ULP-PDU */
typedef struct ULP_PDU {
	long	 length;
	Version_t	 version;
	SessionID_t	 sessionID;
	UlpMessage_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _ULP_PDU_H_ */
#include "asn_internal.h"
