/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_LocationIdData_H_
#define	_LocationIdData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LocationId.h"
#include "RelativeTime.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocationIdData */
typedef struct LocationIdData {
	LocationId_t	 locationId;
	RelativeTime_t	*relativetimestamp	/* OPTIONAL */;
	BOOLEAN_t	 servingFlag;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationIdData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationIdData;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationIdData_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationIdData_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationIdData_H_ */
#include "asn_internal.h"
