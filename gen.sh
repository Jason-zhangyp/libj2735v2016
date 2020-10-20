#!/bin/sh

# cmake cleanup necessary
rm -rf CMakeCache.txt CMakeFiles cmake_install.cmake src/*

# generate C code
mkdir -p src
asn1c -D src -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-BER -no-gen-OER -no-gen-APER -no-gen-example J2735_201603DA.ASN

# missing files
cp /usr/local/share/asn1c/asn_codecs_prim_xer.c src

# prep for build
cmake .
