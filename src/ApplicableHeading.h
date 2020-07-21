/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_ApplicableHeading_H_
#define	_ApplicableHeading_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HeadingDeg.h"
#include "Tolerance.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ApplicableHeading */
typedef struct ApplicableHeading {
	HeadingDeg_t	 heading;
	Tolerance_t	 tolerance;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ApplicableHeading_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ApplicableHeading;
extern asn_SEQUENCE_specifics_t asn_SPC_ApplicableHeading_specs_1;
extern asn_TYPE_member_t asn_MBR_ApplicableHeading_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ApplicableHeading_H_ */
#include <asn_internal.h>