# libj2735v2016
SAE J2735-2016 C Library build using asn1c compiler output
#!/bin/sh

# packages
sudo apt-get install asn1c build-essential cmake
sudo apt-get remove asn1c

# build and install asn1c (make, make install)
mkdir -p ~/src/asn1c
cd ~/src/asn1c
git clone https://github.com/vlm/asn1c.git
./configure
make
sudo make install

# build j2735 library based on J2735-2016 with CAMP additions
./gen.sh
cmake .
make
