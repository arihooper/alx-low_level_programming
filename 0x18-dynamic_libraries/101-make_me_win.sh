#!/bin/bash
wget -p /tmp https://github.com/arihooper/alx-low_level_programming/blob/master/0x018-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
