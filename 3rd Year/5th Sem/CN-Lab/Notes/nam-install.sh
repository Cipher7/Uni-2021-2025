#!/bin/bash

sudo apt remove nam
wget https://github.com/Cipher7/Uni-2021-2025/blob/main/3rd%20Year/5th%20Sem/CN-Lab/Notes/nam_1.14_amd64.deb
sudo dpkg -i nam_1.14_amd64.deb
echo "NAM 1.14 Ready!!"
