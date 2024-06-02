/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "CauseTransport.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_CauseTransport_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CauseTransport_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	30,	"transport-resource-unavailable" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseTransport_enum2value_1[] = {
	1,	/* transport-resource-unavailable(1) */
	0	/* unspecified(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseTransport_specs_1 = {
	asn_MAP_CauseTransport_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseTransport_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CauseTransport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CauseTransport = {
	"CauseTransport",
	"CauseTransport",
	&asn_OP_NativeEnumerated,
	asn_DEF_CauseTransport_tags_1,
	sizeof(asn_DEF_CauseTransport_tags_1)
		/sizeof(asn_DEF_CauseTransport_tags_1[0]), /* 1 */
	asn_DEF_CauseTransport_tags_1,	/* Same as above */
	sizeof(asn_DEF_CauseTransport_tags_1)
		/sizeof(asn_DEF_CauseTransport_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CauseTransport_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseTransport_specs_1	/* Additional specs */
};

