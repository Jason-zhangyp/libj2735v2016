/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "LaneGeometry.h"

static asn_oer_constraints_t asn_OER_type_LaneGeometry_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LaneGeometry_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LaneGeometry_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneGeometry, choice.referenceLane),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceLane"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneGeometry, choice.nodeSet),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeSetLLE,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nodeSet"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LaneGeometry_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceLaneat 159 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nodeSetat 160 */
};
asn_CHOICE_specifics_t asn_SPC_LaneGeometry_specs_1 = {
	sizeof(struct LaneGeometry),
	offsetof(struct LaneGeometry, _asn_ctx),
	offsetof(struct LaneGeometry, present),
	sizeof(((struct LaneGeometry *)0)->present),
	asn_MAP_LaneGeometry_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LaneGeometry = {
	"LaneGeometry",
	"LaneGeometry",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LaneGeometry_constr_1, &asn_PER_type_LaneGeometry_constr_1, CHOICE_constraint },
	asn_MBR_LaneGeometry_1,
	2,	/* Elements count */
	&asn_SPC_LaneGeometry_specs_1	/* Additional specs */
};
