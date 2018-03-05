/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_Horandveruncert_H_
#define	_Horandveruncert_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Horandveruncert */
typedef struct Horandveruncert {
	BIT_STRING_t	 verdirect;
	BIT_STRING_t	 bearing;
	BIT_STRING_t	 horspeed;
	BIT_STRING_t	 verspeed;
	BIT_STRING_t	 horuncertspeed;
	BIT_STRING_t	 veruncertspeed;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Horandveruncert_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Horandveruncert;
extern asn_SEQUENCE_specifics_t asn_SPC_Horandveruncert_specs_1;
extern asn_TYPE_member_t asn_MBR_Horandveruncert_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _Horandveruncert_H_ */
#include "asn_internal.h"
