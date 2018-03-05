/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_SUPLSTART_H_
#define	_SUPLSTART_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SETCapabilities.h"
#include "LocationId.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QoP;
struct Ver2_SUPL_START_extension;

/* SUPLSTART */
typedef struct SUPLSTART {
	SETCapabilities_t	 sETCapabilities;
	LocationId_t	 locationId;
	struct QoP	*qoP	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_SUPL_START_extension	*ver2_SUPL_START_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUPLSTART_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUPLSTART;
extern asn_SEQUENCE_specifics_t asn_SPC_SUPLSTART_specs_1;
extern asn_TYPE_member_t asn_MBR_SUPLSTART_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QoP.h"
#include "Ver2-SUPL-START-extension.h"

#endif	/* _SUPLSTART_H_ */
#include "asn_internal.h"
