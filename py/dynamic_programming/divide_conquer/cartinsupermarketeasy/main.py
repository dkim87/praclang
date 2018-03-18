# https://community.topcoder.com/stat?c=problem_statement&pm=13659
import math

import numpy as np

def create_basic_frame(n,k):
    ans = [[101 for y in range(k)] for x in range(n)]
    ans = np.array(ans)

    for i in range(k):
        ans[0,i] = 0
        ans[1,i] = 1
        ans[2,i] = 2
        ans[3,i] = 3

    for i in range(n):
        ans[i,0] = i
    return ans

def elem_min(ans, r, c):
    print(r,c)

    rfrom = int(math.ceil(r/2))
    rto = r
    print("from to :", rfrom, rto)
    print(ans[rto,c-1])
    a = min( ans[ rfrom : rto , c-1 ])+1
    print(a)
    return a
    pass

def elem_min_rstrct(ans, r, c):
    ksub = (c - 1) // 2
    rfrom = int(math.ceil(r/2))
    rto = r
    return min( ans [ rfrom : rto, ksub ] )+1

def elem_min_wo_min(ans, r, c):
    ksub = (c - 1) // 2
    rfrom = int(math.ceil(r/2))
    return ans [ rfrom, ksub ] + 1

def line(ans, r):
    n = len(ans)
    m = len(ans[0])
    for i in range(1,m):
        # ans[r,i] = elem_min(ans, r, i)
        ans[r,i] = elem_min_rstrct(ans, r, i)
        # ans[r,i] = elem_min_wo_min(ans, r, i)

def my_printarr(arr):
    n = len(arr)
    for i in range(n):
        print(arr[i])

def printans(arr):
    k = len(arr[0])
    print("K ", end="")
    for i in range(k):
        print(i, " ", end="")
    print()

    print('\n'.join([''.join(['{:3}'.format(item) for item in row])
        for row in arr]))

def cart():
    n, k = 101, 101
    ans = create_basic_frame(n,k)

    for i in range(4, n):
        line(ans, i)

    #printans(ans)

    print(ans[15, 4])
    print(ans[7, 100])
    print(ans[45, 5])
    print(ans[100, 100])



def main():
    """this is main function."""
    cart()

if __name__ == '__main__':
    main()


