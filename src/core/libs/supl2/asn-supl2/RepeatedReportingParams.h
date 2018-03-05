/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_RepeatedReportingParams_H_
#define	_RepeatedReportingParams_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RepeatedReportingParams */
typedef struct RepeatedReportingParams {
	long	 minimumIntervalTime;
	long	 maximumNumberOfReports;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RepeatedReportingParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RepeatedReportingParams;
extern asn_SEQUENCE_specifics_t asn_SPC_RepeatedReportingParams_specs_1;
extern asn_TYPE_member_t asn_MBR_RepeatedReportingParams_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RepeatedReportingParams_H_ */
#include "asn_internal.h"
