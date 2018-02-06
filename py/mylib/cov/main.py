import random as rnd
import math
import numpy as np

def cov(x, y):
    x_mu = x.mean()
    y_mu = y.mean()
    x_mi_mu = x - x_mu
    y_mi_mu = y - y_mu

    z = x_mi_mu * y_mi_mu # Z = (X-mu)(Y-mu)
    return z.mean()

def cov2(x, y):
    xy = x * y
    xym = xy.mean()
    xmym = x.mean() * y.mean()
    return xym - xmym

def main():
    np.random.seed(1)
    x = np.random.rand(10)
    print("x is ", x)
    y = np.random.rand(10)
    print("y is ", y)

    # something unrelated to cov
    m = np.concatenate([[x],[y]]) # strange but works with double nested [],[]
    print(np.shape(m)) # demensions of m
    print(m) # 2 * 10 matrix
    print(m.T) # 10 * 2 matrix, a transpose
    np.savetxt("foo.csv", m.T, delimiter=',') # save m as csv file

    a = cov(x, y)
    b = cov2(x, y)
    c = np.cov(x,y, bias=True)

    #assert(a == b) # this does not work due to a slight difference. machine error
    print(a)
    print(b)
    print(c[1,0])

    # seems like a is closest to the actual value.
    # excel lost one digit in comparison to c[1,0]

if __name__ == '__main__':
    main()
