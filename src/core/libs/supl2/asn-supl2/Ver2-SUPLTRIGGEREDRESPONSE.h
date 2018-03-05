/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-RESPONSE"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_Ver2_SUPLTRIGGEREDRESPONSE_H_
#define	_Ver2_SUPLTRIGGEREDRESPONSE_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PosMethod.h"
#include "SPCSETKey.h"
#include "SPCSETKeylifetime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TriggerParams;
struct SLPAddress;
struct SupportedNetworkInformation;
struct ReportingMode;
struct SPCTID;
struct GNSSPosTechnology;

/* Ver2-SUPLTRIGGEREDRESPONSE */
typedef struct Ver2_SUPLTRIGGEREDRESPONSE {
	PosMethod_t	 posMethod;
	struct TriggerParams	*triggerParams	/* OPTIONAL */;
	struct SLPAddress	*sLPAddress	/* OPTIONAL */;
	struct SupportedNetworkInformation	*supportedNetworkInformation	/* OPTIONAL */;
	struct ReportingMode	*reportingMode	/* OPTIONAL */;
	SPCSETKey_t	*sPCSETKey	/* OPTIONAL */;
	struct SPCTID	*sPCTID	/* OPTIONAL */;
	SPCSETKeylifetime_t	*sPCSETKeylifetime	/* OPTIONAL */;
	struct GNSSPosTechnology	*gnssPosTechnology	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_SUPLTRIGGEREDRESPONSE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPLTRIGGEREDRESPONSE;
extern asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPLTRIGGEREDRESPONSE_specs_1;
extern asn_TYPE_member_t asn_MBR_Ver2_SUPLTRIGGEREDRESPONSE_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TriggerParams.h"
#include "SLPAddress.h"
#include "SupportedNetworkInformation.h"
#include "ReportingMode.h"
#include "SPCTID.h"
#include "GNSSPosTechnology.h"

#endif	/* _Ver2_SUPLTRIGGEREDRESPONSE_H_ */
#include "asn_internal.h"
