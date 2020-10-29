# libj2735v2016
SAE J2735-2016 C Library build using asn1c compiler output

Requires J2735_201603DA.ASN file purchased from SAE J2735-2016 which is copyrighted.

# Packages
1. sudo apt-get install asn1c build-essential cmake
2. sudo apt-get remove asn1c

# Build and install asn1c (make, make install)
1. mkdir -p ~/src
2. cd ~/src
3. git clone https://github.com/mouse07410/asn1c (mouse branch of https://github.com/mouse07410/asn1c)
4. cd asn1c
5. ./configure
6. make
7. sudo make install

# Build j2735 library
1. cd ~/src
2. git clone https://github.com/nprobert/libj2735v2016.git
3. cd libj2735v2016
4. # copy J2735_201603DA.ASN to this directory
5. ./gen.sh
6. cmake .
7. make

# Headers are all in the src directory
