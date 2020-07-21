/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LONGITUDINAL-CONTROL-TESTING-REGION"
 * 	found in "CAMP/BSM_TOSCo_CACC_Extension.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_TimeConstant_H_
#define	_TimeConstant_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeConstant */
typedef long	 TimeConstant_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeConstant_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeConstant;
asn_struct_free_f TimeConstant_free;
asn_struct_print_f TimeConstant_print;
asn_constr_check_f TimeConstant_constraint;
ber_type_decoder_f TimeConstant_decode_ber;
der_type_encoder_f TimeConstant_encode_der;
xer_type_decoder_f TimeConstant_decode_xer;
xer_type_encoder_f TimeConstant_encode_xer;
oer_type_decoder_f TimeConstant_decode_oer;
oer_type_encoder_f TimeConstant_encode_oer;
per_type_decoder_f TimeConstant_decode_uper;
per_type_encoder_f TimeConstant_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeConstant_H_ */
#include <asn_internal.h>