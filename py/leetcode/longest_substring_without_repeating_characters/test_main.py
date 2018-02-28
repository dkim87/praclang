import unittest
import main

class TestMain(unittest.TestCase):
    def test_lengthOfLongestSubstring(self):
        str = "helloworld!" # ans = hel - low - world! = 6
        ans = main.Solution().lengthOfLongestSubstring(str, 1)
        self.assertEqual(ans, 6)

        str = "abcabcbb"
        ans = main.Solution().lengthOfLongestSubstring(str, 1)
        self.assertEqual(ans, 3)

        str = "bbbbb"
        ans = main.Solution().lengthOfLongestSubstring(str, 1)
        self.assertEqual(ans, 1)

        str = "pwwkew"
        ans = main.Solution().lengthOfLongestSubstring(str, 1)
        self.assertEqual(ans, 3)
        print("done!")



    def test_il_for(self):
        #main.il_for() # works
        pass

    def test_change_i_for(self):
        #main.change_i_for() # i,j does not change
        pass


if __name__ == '__main__':
    unittest.main()
