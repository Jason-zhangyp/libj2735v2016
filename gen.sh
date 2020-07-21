#!/bin/sh

mkdir -p src
asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example J2735_201603DA.ASN
