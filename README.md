# libj2735v2016
SAE J2735-2016 C Library build using asn1c compiler output

# packages
1. sudo apt-get install asn1c build-essential cmake
2. sudo apt-get remove asn1c

# build and install asn1c (make, make install)
1. mkdir -p ~/src/asn1c
2. cd ~/src/asn1c
3. git clone https://github.com/vlm/asn1c.git
4. ./configure
5. make
6. sudo make install

# build j2735 library based on J2735-2016 with CAMP additions
1. ./gen.sh
2. cmake .
3. make
