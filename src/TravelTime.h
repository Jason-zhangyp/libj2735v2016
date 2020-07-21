/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_TravelTime_H_
#define	_TravelTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RegionInfo.h"
#include "ObstacleDistance.h"
#include "MinutesDuration.h"
#include <IA5String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TravelTime */
typedef struct TravelTime {
	RegionInfo_t	 travelOrigin;
	RegionInfo_t	 travelDestination;
	ObstacleDistance_t	 distanceToDestination;
	MinutesDuration_t	*typicalDuration	/* OPTIONAL */;
	MinutesDuration_t	*actualDuration	/* OPTIONAL */;
	IA5String_t	*dmsSignString	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TravelTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TravelTime;
extern asn_SEQUENCE_specifics_t asn_SPC_TravelTime_specs_1;
extern asn_TYPE_member_t asn_MBR_TravelTime_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _TravelTime_H_ */
#include <asn_internal.h>