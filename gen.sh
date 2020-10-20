#!/bin/sh

rm -rf CMakeCache.txt CMakeFiles cmake_install.cmake src/*

mkdir -p src
asn1c -D src -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-BER -no-gen-OER -no-gen-APER -no-gen-example J2735_201603DA.ASN

