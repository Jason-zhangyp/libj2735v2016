/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_OverheightVehicle_H_
#define	_OverheightVehicle_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RoadSegmentReferenceID.h"
#include "Position3D.h"
#include "VehicleHeight.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OverheightVehicle__heightViolation {
	OverheightVehicle__heightViolation_not_in_violation	= 0,
	OverheightVehicle__heightViolation_in_violation	= 1,
	OverheightVehicle__heightViolation_less_than_15_cm	= 2,
	OverheightVehicle__heightViolation_unknown	= 3
} e_OverheightVehicle__heightViolation;

/* Forward declarations */
struct IntersectionReferenceID;

/* OverheightVehicle */
typedef struct OverheightVehicle {
	RoadSegmentReferenceID_t	 roadSegmentID;
	Position3D_t	 point;
	struct IntersectionReferenceID	*intersection	/* OPTIONAL */;
	VehicleHeight_t	*vehicleHeight	/* OPTIONAL */;
	VehicleHeight_t	 clearanceHeight;
	long	 heightViolation;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OverheightVehicle_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_heightViolation_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_OverheightVehicle;
extern asn_SEQUENCE_specifics_t asn_SPC_OverheightVehicle_specs_1;
extern asn_TYPE_member_t asn_MBR_OverheightVehicle_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntersectionReferenceID.h"

#endif	/* _OverheightVehicle_H_ */
#include <asn_internal.h>