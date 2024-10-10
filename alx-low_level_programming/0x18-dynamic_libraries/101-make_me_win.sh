#!/bin/bash
wget -P /tmp https://github.com/Adewale66/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
