#!/usr/bin/env python3

import os
import sys

path = sys.argv[1]

if path.endswith(".c") and os.path.exists(path):
    os.system(f"gcc {path} && ./a.out && rm a.out")
elif path.endswith(".cpp") and os.path.exists(path):
    os.system(f"g++ {path} && ./a.out && rm a.out")
else:
    print("Invalid file")
