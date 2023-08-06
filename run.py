import os
import sys

path = sys.argv[1]
os.system(f"gcc {path} && ./a.out && rm a.out")
