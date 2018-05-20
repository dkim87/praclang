def getNthNode(Node, n):
    if n == 0:
        return Node

    return getNthNode(Node.next, n-1)

def insertNode(node_head, new_node):
    tmp = node_head.next
    node_head.next = new_node
    new_node.next = tmp
    return node_head

def insertNthNode(head, data, position):
    newNode = Node(data)

    if position == 0:
        newNode.next = head
        return newNode
    elif position > 0:
        nthNode = getNthNode(head, position-1)
        insertNode(nthNode, newNode)
        return head



class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def print_Nodes(my_node):
    print("start!!")
    while my_node is not None:
        print(my_node.data)
        my_node = my_node.next


def main():
    """this is main function."""

    A = Node(1)
    B = Node(3)
    C = Node(5)

    A.next = B
    B.next = C

    print(getNthNode(A, 0).data)
    print(getNthNode(A, 1).data)
    print(getNthNode(A, 2).data)

    D = Node(7)

    A = insertNode(A, D)

    print_Nodes(A)

if __name__ == '__main__':
    main()
