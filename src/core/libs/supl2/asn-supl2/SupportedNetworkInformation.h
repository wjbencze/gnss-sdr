/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_SupportedNetworkInformation_H_
#define	_SupportedNetworkInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedWLANInfo;
struct SupportedWLANApsList;
struct SupportedWCDMAInfo;

/* SupportedNetworkInformation */
typedef struct SupportedNetworkInformation {
	BOOLEAN_t	 wLAN;
	struct SupportedWLANInfo	*supportedWLANInfo	/* OPTIONAL */;
	struct SupportedWLANApsList	*supportedWLANApsList	/* OPTIONAL */;
	BOOLEAN_t	 gSM;
	BOOLEAN_t	 wCDMA;
	struct SupportedWCDMAInfo	*supportedWCDMAInfo	/* OPTIONAL */;
	BOOLEAN_t	 cDMA;
	BOOLEAN_t	 hRDP;
	BOOLEAN_t	 uMB;
	BOOLEAN_t	 lTE;
	BOOLEAN_t	 wIMAX;
	BOOLEAN_t	 historic;
	BOOLEAN_t	 nonServing;
	BOOLEAN_t	 uTRANGPSReferenceTime;
	BOOLEAN_t	 uTRANGANSSReferenceTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedNetworkInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedNetworkInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedNetworkInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedNetworkInformation_1[15];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedWLANInfo.h"
#include "SupportedWLANApsList.h"
#include "SupportedWCDMAInfo.h"

#endif	/* _SupportedNetworkInformation_H_ */
#include "asn_internal.h"
