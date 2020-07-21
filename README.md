# libj2735v2016
SAE J2735-2016 C Library build using asn1c compiler output

Requires J2735_201603DA.ASN file purchased from SAE J2735-2016 which is copyrighted

# Packages
1. sudo apt-get install asn1c build-essential cmake
2. sudo apt-get remove asn1c

# Build and install asn1c (make, make install)
1. mkdir -p ~/src/asn1c
2. cd ~/src/asn1c
3. git clone https://github.com/vlm/asn1c.git
4. ./configure
5. make
6. sudo make install

# Build j2735 library
1. ./gen.sh
2. cmake .
3. make

# Headers are all in the src directory
