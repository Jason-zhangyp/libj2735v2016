/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_CauseCode_H_
#define	_CauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseCode {
	CauseCode_reserved	= 0,
	CauseCode_trafficCondition	= 1,
	CauseCode_accident	= 2,
	CauseCode_roadwor	= 3,
	CauseCode_adverseWeatherCondition_Adhesion	= 6,
	CauseCode_hazardousLocation_SurfaceCondition	= 9,
	CauseCode_hazardousLocation_ObstacleOnTheRoad	= 10,
	CauseCode_hazardousLocation_AnimalOnTheRoad	= 11,
	CauseCode_humanPresenceOnTheRoad	= 12,
	CauseCode_wrongWayDriving	= 14,
	CauseCode_rescueAndRecoveryWorkInProgress	= 15,
	CauseCode_adverseWeatherCondition_ExtremeWeatherCondition	= 17,
	CauseCode_adverseWeatherCondition_Visibility	= 18,
	CauseCode_adverseWeatherCondition_Precipitation	= 19,
	CauseCode_slowVehicle	= 26,
	CauseCode_dangerousEndOfQueue	= 27,
	CauseCode_vehicleBreakdown	= 91,
	CauseCode_postCrash	= 92,
	CauseCode_humanProblem	= 93,
	CauseCode_stationaryVehicle	= 94,
	CauseCode_emergencyVehicleApproaching	= 95,
	CauseCode_hazardousLocation_DangerousCurve	= 96,
	CauseCode_collisionRisk	= 97,
	CauseCode_signalViolation	= 98,
	CauseCode_dangerousSituation	= 99
} e_CauseCode;

/* CauseCode */
typedef long	 CauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseCode;
asn_struct_free_f CauseCode_free;
asn_struct_print_f CauseCode_print;
asn_constr_check_f CauseCode_constraint;
ber_type_decoder_f CauseCode_decode_ber;
der_type_encoder_f CauseCode_encode_der;
xer_type_decoder_f CauseCode_decode_xer;
xer_type_encoder_f CauseCode_encode_xer;
oer_type_decoder_f CauseCode_decode_oer;
oer_type_encoder_f CauseCode_encode_oer;
per_type_decoder_f CauseCode_decode_uper;
per_type_encoder_f CauseCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseCode_H_ */
#include <asn_internal.h>