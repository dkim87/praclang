# https://askubuntu.com/questions/495981/access-to-column-in-python-like-awk
import sys
f = sys.stdin

for line in f:
    fields = line.strip().split()
    print(fields[0])
