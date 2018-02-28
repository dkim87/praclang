import unittest
import main

class TestMain(unittest.TestCase):
    def test_solution(self):
        a = [1, 2, 3, 5]
        b = [2, 4, 6, 7]
        median = 3.5
        result = main.Solution().findMedianSortedArrays(a, b)
        self.assertEqual( median, result )

        a = [1, 2, 3]
        b = [1, 3, 4]
        median = 2.5
        result = main.Solution().findMedianSortedArrays(a, b)
        self.assertEqual( median, result )


if __name__ == '__main__':
    unittest.main()
