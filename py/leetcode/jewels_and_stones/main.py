class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count = 0
        for s in S:
            if isJewel(s, J):
                count += 1

        return count

def isJewel(candidate, jeweltypes):
    if candidate in jeweltypes:
        return True
    else:
        return False

def main():
    test()

def test():
    case1()
    case2()

def case1():
    J = "aA"
    S = "aAAbbbb"
    res = Solution().numJewelsInStones(J, S)
    assert res == 3

def case2():
    J = "z"
    S = "ZZ"
    res = Solution().numJewelsInStones(J, S)
    assert res == 0



"""
def stringToString(input):
    return input[1:-1].decode('string_escape')


def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('"\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            J = stringToString(line);
            line = next(lines)
            S = stringToString(line);
            ret = Solution().numJewelsInStones(J, S)

            out = str(ret);
            print(out)
        except StopIteration:
            break
"""

if __name__ == '__main__':
    main()
