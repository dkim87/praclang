class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        paren_open = {'{':1, '(':2, '[':3}
        paren_close = {'}':1, ')':2, ']':3}

        paren_stack = []

        for i in s:
            if i in paren_open:
                paren_stack.append(i)
            elif i in paren_close:
                if len(paren_stack) > 0:
                    j = paren_stack.pop()
                    if paren_close[i] == paren_open[j]:
                        pass
                    else:
                        return False
                else: return False
            else:
                continue

        if not paren_stack:
            return True
        else:
            return False



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
            #s = stringToString(line);
            s = line

            ret = Solution().isValid(s)

            out = (ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
