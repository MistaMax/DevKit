#! /bin/bash

if [ ! -d ~/bin/ ]; then
	mkdir ~/bin/
fi

cd cslib

sudo apt-get install csh

make clean

make

cp gccx ~/bin

echo "#add bin to the path" >> ~/.bashrc
echo "PATH=\"\${PATH}\":~/bin:./" >> ~/.bashrc
echo "export PATH" >> ~/.bashrc

echo "#add bin to the path" >> ~/.cshrc
echo "set path = (\$path ~/bin ./)" >> ~/.cshrc
