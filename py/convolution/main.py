"""
This module derives the distribution of sums of n independent discrete random variable.
Given a list x,
- conv(x,y) gives X+X
- conv_rep(2, x, y) gives y + x + x (add x 2 times)
- add_indep_dscrt_rand_then_plot(x, y, t, b)
"""
import matplotlib.pyplot as plt
import numpy as np


### core start ###

def conv_rep(i, y, x):
    """ use recursion to implement repeated y = conv(y,x) \\ y = conv(y,x) ... """
    """ conv_rep(2, y, x) is equivalent to two lines of y = conv(y,x) """
    if i == 0:
        return y
    else:
        y = conv(y,x)
        return conv_rep(i-1, y, x)


def makeDscrtBins(arr, step = 1): # bnum = number of bins
    """make discrete bin"""
    arr = np.array(arr)
    ua = np.unique(arr)
    l = len(ua)
    min = ua.min()
    max = ua.max()
    # if [1, 2, 3], step must be 1
    # if [0.5, 1, 1.5], step must be 0.5
    # step = (max - min) / (l-1)
    bins = np.arange(min, max+2*step, step)
    # why +2 instead of +1?
    # matplolib: [0 1) for all others but [n-1 n] for the last element. Inconsistent for integer arrays.
    # why +1 in the first place?
    # range(a, b) function gives from a to b-1
    return bins

def conv(x, y):
    """ theoretically, this must be used for summing two independent discrete random variables. """
    """ currently testing ... """
    z = []
    for i in x:
        for j in y:
            z.append(i+j)
    return z

def add_indep_dscrt_rand_then_plot(x, y, times, bstep = 1): # bstep = binstep
    y = conv_rep(times, y, x)
    y = np.array(y)
    bins = makeDscrtBins(y, bstep)
    plot_hist(y, bins)
    return y

def plot_hist(y, bins):
    plt.hist(y, bins)
    plt.show()


### core end ###

### test start ###


def test_conv():
    pass
    # test_conv_sub0()
    # test_conv_sub1()
    # test_conv_sub2()

def test_conv_sub0():
    # https://stackoverflow.com/questions/34167607/r-how-to-get-a-sum-of-two-distributions
    # R port
    A = [1,  2,  3,  3,  3,  4,  4,  5,  6,  7]
    B = [11, 13, 15, 17, 17, 18, 18, 19, 20, 22]
    y = conv(A, B)
    y = np.array(y)
    bins = makeDscrtBins(y)
    plot_hist(y, bins)
    # pass (seems correct)

def test_conv_sub1():
    x = [0, 1, 2]
    y = list(x)
    # y = conv(y, x) # first sum
    # y = conv(y, x) # second sum
    iter = 9 #  == 10 * X
    n = iter + 1
    y = add_indep_dscrt_rand_then_plot(x, y, iter)
    print(y)
    '''
    # replaced by add_indep_dscrt_rand_then_plot(x, iter) function
    y = conv_rep(iter, x, x) # 10th sum
    y = np.array(y)
    bins = makeDscrtBins(y)
    plot_hist(y, bins)
    '''
    y = y / n # average out
    bins = makeDscrtBins(y, 1/n) # step decreased by one 10th
    plot_hist(y, bins)

def test_conv_sub2():
    x = [0, 0, 0, 8] # mean of 2
    y = list(x)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)
    y = add_indep_dscrt_rand_then_plot(x, y, 1)


def test_conv_repeat():
    x = [0, 1, 2]
    y = conv(x, x)
    print(y)

    y1 = conv_rep(1, x, x)
    print(y1)

    assert(y == y1) # pass

    y = conv(y, x)
    print(y)
    y1 = conv_rep(2, x, x)
    print(y1)
    assert(y == y1) # pass

    y = conv(y, x)
    y1 = conv_rep(3, x, x)
    assert(y == y1) # pass

def test_makeDscrtBins():
    arr = [1, 3, 4, 5]
    bin = makeDscrtBins(arr)
    print(bin) # [1 2 3 4 5 6] # pass

    arr = [0.5, 1.5, 1]
    bin = makeDscrtBins(arr, 0.5)
    print(bin) # [0.5 1 1.5 2] # pass

    arr = [0, 1, 1, 2, 2, 2, 3, 3, 4]
    arr = np.array(arr)
    arr = arr / 2
    print(arr)
    bin = makeDscrtBins(arr, 1/2)
    print(bin) # this one is obviously different
    plot_hist(arr, bin)
    bin = makeDscrtBins(arr, 1/3)
    print(bin) # with this one
    plot_hist(arr, bin)

def test_compare_convolve():
    A = [1,  2,  3,  3,  3,  4,  4,  5,  6,  7]
    B = [11, 13, 15, 17, 17, 18, 18, 19, 20, 22]
    y = conv(A, B)
    y = np.array(y)
    z = np.convolve(A, B)
    print(y)
    print(z)

    # bins = makeDscrtBins(y)
    # plot_hist(y, bins)
    # pass (seems correct)


def test():
    """test function"""
    pass
    # test_conv()
    # test_makeDscrtBins()
    # test_conv_repeat()
    # test_compare_convolve()

### test end ###


def main():
    """this is main function."""
    test()


if __name__ == '__main__':
    main()
