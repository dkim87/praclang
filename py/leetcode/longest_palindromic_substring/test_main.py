import unittest
import main

class TestMain(unittest.TestCase):
    def test_isPalindrome(self):
        s = "helleh"
        expt = main.Solution.isPalindrome(s)
        self.assertTrue(expt)

        s = "arstarsttsratsra"
        expt = main.Solution.isPalindrome(s)
        self.assertTrue(expt)

    def test_longestPalindrome(self):
        s = "acbxbcd"
        res = main.Solution().longestPalindrome(s)
        ans = "cbxbc"
        self.assertEqual(res, ans)

if __name__ == '__main__':
    unittest.main()
