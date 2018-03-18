class Solution:
    def lengthOfLongestSubstring(self, s, debug = 0):
        debug = 1
        """
        :type s: str
        :rtypeolu int
        """

        max_len=0 # int
        start_index = 0
        end_index = 0
        substr = []
        ltr_dic = {}
        i = 0
        l = 0

        #import pdb; pdb.set_trace()
        #import pudb; pudb.set_trace()
        import ipdb; ipdb.set_trace()
        while(i < len(s)):
            l = s[i]
            if l not in ltr_dic:
                if debug == 1: print(l, "does not exist")
                ltr_dic[l] = i
                end_index = i
                max_len = max(1 + end_index - start_index, max_len)
                i += 1
            elif l in ltr_dic:
                if debug == 1: print(l, "alreay exist in", ltr_dic[l])
                i = ltr_dic[l]+1
                start_index = ltr_dic[l] + 1
                end_index = ltr_dic[l] + 1
                ltr_dic = {} # initialize

        if debug == 1:
            print(start_index)
            print(end_index)
            print(max_len)
            print(max_len)

        return max_len

def change_i_for():
    for i in range(5):
        print("will print infinite?") # no
        if i == 3:
            i = 0

    j = 0
    for j in range(5):
        print("will j print infinite?") # no
        if j == 3:
            j = 0


def il_for():
    s = [1, 2, 3]
    print(s)
    print(enumerate(s))
    for i,l in enumerate(s): # should use enumerate instead of just s
        print(i,l)

def stringToString(input):
    return input[1:-1].decode('string_escape')

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            s = stringToString(line);

            ret = Solution().lengthOfLongestSubstring(s)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    # main()
    print("this is main!")
