# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        i = 0
        j = 0
        merged = ListNode(99)
        head = merged
        while l1 != None and l2 != None:
            if l1.val <= l2.val:
                head.val = l1.val
                l1 = l1.next
            else:
                head.val = l2.val
                l2 = l2.next

            head.next = ListNode(99)
            head = head.next

        if l1 != None:
            print("l1 not null!")
            head.val = l1.val
            head.next = l1.next
        elif l2 != None:
            print("l2 is not None")
            head.val = l2.val
            head.next = l2.next

        return merged

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

    lines = readlines()
    while True:
        try:
            line = next(lines)
            l1 = stringToListNode(line);
            line = next(lines)
            l2 = stringToListNode(line);

            ret = Solution().mergeTwoLists(l1, l2)

            out = listNodeToString(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
