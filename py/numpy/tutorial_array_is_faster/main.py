"""just a main one"""
# https://www.youtube.com/watch?v=8JfDAm9y_7s

import time
import sys

import numpy as np

S = range(1000) # contain integer values from 0 to 999

D = np.arange(1000)

# reason why numpy array takes over less memory space than list
print(sys.getsizeof(5)*len(S))
print(D.size*D.itemsize)

# reaosn why numpy array is faster than list
SIZE = 1000000

L1 = range(SIZE)
L2 = range(SIZE)

A1 = np.arange(SIZE)
A2 = np.arange(SIZE)

start = time.time()
result = [ (x,y) for x,y in zip(L1,L2) ]
print((time.time()-start)*1000) # converting into msecs

start = time.time()
result = A1 + A2
print((time.time()-start)*1000) # converting into msecs
