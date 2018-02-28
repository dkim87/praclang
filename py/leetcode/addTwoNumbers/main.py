class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        def list2Int(ls):
            sum = 0
            digit = 1
            while ls is not None:
                print("while!")
                sum = sum + ls.val * digit
                ls = ls.next
                digit *= 10
            return sum

        x,y = list2Int(l1), list2Int(l2)
        print("x y is")
        print(x, y)
        sum = x + y

        def int2List(intgr):

            L = ListNode( intgr % 10)
            intgr = intgr // 10
            ptr = L
            while intgr != 0:
                ptr.next = ListNode( intgr % 10 )
                intgr = intgr // 10
                ptr = ptr.next
            return L

        return int2List(sum)



import json
def stringToIntegerList(input):
    return json.loads(input)

def stringToListNode(input):
    # Generate list from the input
    numbers = stringToIntegerList(input)

    # Now convert that list into linked list
    dummyRoot = ListNode(0)
    ptr = dummyRoot
    for number in numbers:
        ptr.next = ListNode(number)
        ptr = ptr.next

    ptr = dummyRoot.next
    return ptr

def listNodeToString(node):
    if not node:
        return "[]"

    result = ""
    while node:
        result += str(node.val) + ", "
        node = node.next
    return "[" + result[:-2] + "]"

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    print("reading...")
    lines = readlines() # generator
    print("read finished")

    while True:
        try:
            line = next(lines)
            l1 = stringToListNode(line);
            line = next(lines)
            l2 = stringToListNode(line);

            ret = Solution().addTwoNumbers(l1, l2)
            print(ret)

            out = listNodeToString(ret);
            print(out)
        except StopIteration:
            break



if __name__ == '__main__':
    main()
