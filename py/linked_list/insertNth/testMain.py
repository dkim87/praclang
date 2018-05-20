import unittest
import main

def makeLinkedList():
    A = main.Node(1)
    B = main.Node(3)
    C = main.Node(5)
    A.next = B
    B.next = C
    return A

class TestMain(unittest.TestCase):

    def test_insertNthNode(self):
        A = makeLinkedList()
        main.print_Nodes(A)

        D = main.Node(7)
        A = main.insertNode(A, D)
        main.print_Nodes(A)

        A = makeLinkedList()
        A = main.insertNthNode(A, 7, 0)
        main.print_Nodes(A)


        A = makeLinkedList()
        A = main.insertNthNode(A, 7, 1)
        main.print_Nodes(A)


        A = makeLinkedList()
        A = main.insertNthNode(A, 7, 2)
        main.print_Nodes(A)


        A = makeLinkedList()
        A = main.insertNthNode(A, 7, 3)
        main.print_Nodes(A)

        A = makeLinkedList()




if __name__ == '__main__':
    unittest.main()
