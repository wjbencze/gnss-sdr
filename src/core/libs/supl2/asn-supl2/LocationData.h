/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_LocationData_H_
#define	_LocationData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocationData */
typedef struct LocationData {
	unsigned long	*locationAccuracy	/* OPTIONAL */;
	OCTET_STRING_t	 locationValue;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationData_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_locationAccuracy_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LocationData;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationData_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationData_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationData_H_ */
#include "asn_internal.h"
