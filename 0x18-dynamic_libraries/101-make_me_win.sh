#!/bin/bash
wget -P /tmp https://github.com/Samsontedla/alx-low_level_programming/tree/main/0x18-dynamic_libraries/lib_mask.so
export LD_PRELOAD=/tmp/lib_mask.so
