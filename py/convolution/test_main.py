import unittest
from main import *

class TestMain(unittest.TestCase):

    def test_conv(self):
        pass
        # test_conv_sub0()
        # test_conv_sub1()
        # test_conv_sub2()

    def test_hello(self):
        self.assertEqual(1,1)
        self.assertEqual(-1+1,0)
        self.assertEqual(-1-1,-2)
        self.assertSetEqual({1,2,3}, {1,3,2})
        self.assertSetEqual({1,2,3}, {1,4, 2})

    def test_conv_rep(self):
        x = [0, 1, 2]
        y = conv(x, x)
        self.assertListEqual(y, [0, 1, 2, 1, 2, 3, 2, 3, 4])

        #print(y)

        y1 = conv_rep(1, x, x)
        #print(y1)

        assert(y == y1) # pass

        y = conv(y, x)
        #print(y)
        y1 = conv_rep(2, x, x)
        #print(y1)
        assert(y == y1) # pass

        y = conv(y, x)
        y1 = conv_rep(3, x, x)
        assert(y == y1) # pass

    def test_makeDscrtBins(self):
        arr = [1, 3, 4, 5]
        bin = makeDscrtBins(arr)
        #print(bin) # [1 2 3 4 5 6] # pass

        arr = [0.5, 1.5, 1]
        bin = makeDscrtBins(arr, 0.5)
        #print(bin) # [0.5 1 1.5 2] # pass

        arr = [0, 1, 1, 2, 2, 2, 3, 3, 4]
        arr = np.array(arr)
        arr = arr / 2
        #print(arr)
        bin = makeDscrtBins(arr, 1/2)
        #print(bin) # this one is obviously different
        #plot_hist(arr, bin)
        bin = makeDscrtBins(arr, 1/3)
        #print(bin) # with this one
        #plot_hist(arr, bin)

if __name__ == '__main__':
    unittest.main()
