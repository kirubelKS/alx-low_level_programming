#!/bin/bash
wget -P /temp/ https://raw.github.com/kirubelKS/alx-low_level_programminf/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so