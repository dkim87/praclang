class Solution:
    def longestPalindrome(self, s):
        """
        "abcbx"
        first, test ab is palindrome (pivot == s[0.5] == a~b)
        (1 time, max reached)

        then, abc (pivot == s[1.0] == b)
        (1 time, max reached)
        then, pivot is b~c == s[1.5]
        try bc, if not
        try abcb (2 times, max reached)
        then, pivot is c == s[2]
        try bcb,
        try abcbx
        2 times, max reached

        rules:
        max == int(ceil(pivot))
        """
        pivot = 0.5 # starting pivot
        max_len_palindrome = 1 # which is the char itself

    @staticmethod
    def isPalindrome(s):
        return str(s) == str(s)[::-1]

