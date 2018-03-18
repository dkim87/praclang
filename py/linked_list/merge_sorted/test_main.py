import unittest
import main

class TestMain(unittest.TestCase):
    def test_main(self):
        print("hello!")
        l1 = main.stringToListNode("[1, 2, 4]")
        l2 = main.stringToListNode("[1, 3, 5]")
        print(main.listNodeToString(l1))
        print(main.listNodeToString(l2))

        ans = main.Solution().mergeTwoLists(l1, l2)
        print(main.listNodeToString(ans))

if __name__ == '__main__':
    unittest.main()
