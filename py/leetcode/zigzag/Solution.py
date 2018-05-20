class Solution:
    def convert(self, s, numRows):

        # edge case
        if numRows <= 1:
            return s

        seq = numRows * 2 - 2

        lines = ['' for x in range(numRows)]

        while(len(s) >= seq):
            s1 = self.charsBeforeN(s, seq)
            s = self.charsAfterN(s, seq)

            for i in range(numRows):
                lines[i] += s1[i]

            for i in range(seq-numRows):
                list_index = numRows - i - 2
                s_index = numRows + i
                lines[list_index] += s1[s_index]

        # edge case
        zig = min(numRows, len(s))
        for i in range(zig):
            lines[i] += s[i]

        zag = len(s) - numRows if len(s) > numRows else 0
        for i in range(zag):
            l_i = numRows - i - 2
            s_i = numRows + i
            lines[l_i] += s[s_i]

        # append lines in retu
        retu = ''
        for i in range(len(lines)):
            retu += lines[i]

        return retu


    @staticmethod
    def charsBeforeN(s, n):
        assert len(s) >= n
        return s[:n]

    @staticmethod
    def charsAfterN(s, n):
        assert len(s) >= n
        return s[n:]

