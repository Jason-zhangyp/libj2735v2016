/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SIGNAL-APPROACH-SUPPLEMENTAL-INFORMATION-REGION"
 * 	found in "CAMP/SPAT_TOSCo_Regional_Extension.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_SignalPhaseTimingMessage_regExt_H_
#define	_SignalPhaseTimingMessage_regExt_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GreenWindowInformation.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SignalPhaseTimingMessage-regExt */
typedef GreenWindowInformation_t	 SignalPhaseTimingMessage_regExt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalPhaseTimingMessage_regExt;
asn_struct_free_f SignalPhaseTimingMessage_regExt_free;
asn_struct_print_f SignalPhaseTimingMessage_regExt_print;
asn_constr_check_f SignalPhaseTimingMessage_regExt_constraint;
ber_type_decoder_f SignalPhaseTimingMessage_regExt_decode_ber;
der_type_encoder_f SignalPhaseTimingMessage_regExt_encode_der;
xer_type_decoder_f SignalPhaseTimingMessage_regExt_decode_xer;
xer_type_encoder_f SignalPhaseTimingMessage_regExt_encode_xer;
oer_type_decoder_f SignalPhaseTimingMessage_regExt_decode_oer;
oer_type_encoder_f SignalPhaseTimingMessage_regExt_encode_oer;
per_type_decoder_f SignalPhaseTimingMessage_regExt_decode_uper;
per_type_encoder_f SignalPhaseTimingMessage_regExt_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SignalPhaseTimingMessage_regExt_H_ */
#include <asn_internal.h>