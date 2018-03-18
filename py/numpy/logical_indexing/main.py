import numpy as np

matrix = np.array([[  1.,   2.,   3.,   4.,   5.],
       [  6.,   7.,   8.,   9.,  10.],
       [ 11.,  12.,  13.,  14.,  15.],
       [ 16.,  17.,  18.,  19.,  20.]])



ind = np.where((matrix[:, 0] >= 1) & (matrix[:, 1] <= 8))

a = matrix[ind]
a[0,0] = 0

matrix

a
