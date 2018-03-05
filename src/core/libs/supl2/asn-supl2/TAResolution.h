/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_TAResolution_H_
#define	_TAResolution_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TAResolution {
	TAResolution_res10chip	= 0,
	TAResolution_res05chip	= 1,
	TAResolution_res0125chip	= 2
	/*
	 * Enumeration is extensible
	 */
} e_TAResolution;

/* TAResolution */
typedef long	 TAResolution_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TAResolution_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TAResolution;
extern const asn_INTEGER_specifics_t asn_SPC_TAResolution_specs_1;
asn_struct_free_f TAResolution_free;
asn_struct_print_f TAResolution_print;
asn_constr_check_f TAResolution_constraint;
ber_type_decoder_f TAResolution_decode_ber;
der_type_encoder_f TAResolution_encode_der;
xer_type_decoder_f TAResolution_decode_xer;
xer_type_encoder_f TAResolution_encode_xer;
per_type_decoder_f TAResolution_decode_uper;
per_type_encoder_f TAResolution_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TAResolution_H_ */
#include "asn_internal.h"
