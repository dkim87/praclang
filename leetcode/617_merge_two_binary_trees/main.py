def main():
    test()

def test():
    line = "[1, 3, 2, 5]"
    t1 = stringToTreeNode(line)
    line = "[2, 1, 3, null, 4, null, 7]"
    t2 = stringToTreeNode(line)

    str = treeNodeToString(t1)
    print(str)
    str = treeNodeToString(t2)
    print(str)
    ret = Solution().mergeTrees(t1, t2)

class Solution:
    def mergeTrees(self, t1, t2):
        """
        :type t1: TreeNode
        :type t2: TreeNode
        :rtype: TreeNode
        """
        return 1

class TreeNode:
    def __init__(self, val):
        self.right = None
        self.left = None
        self.val = val
        pass

def stringToTreeNode(input):
    import web_pdb; web_pdb.set_trace()
    input = input.strip()
    input = input[1:-1]
    if not input:
        return None

    inputValues = [s.strip() for s in input.split(',')]
    root = TreeNode(int(inputValues[0]))
    nodeQueue = [root]
    front = 0
    index = 1
    while index < len(inputValues):
        node = nodeQueue[front]
        front = front + 1

        item = inputValues[index]
        index = index + 1
        if item != "null":
            leftNumber = int(item)
            node.left = TreeNode(leftNumber)
            nodeQueue.append(node.left)

        if index >= len(inputValues):
            break

        item = inputValues[index]
        index = index + 1
        if item != "null":
            rightNumber = int(item)
            node.right = TreeNode(rightNumber)
            nodeQueue.append(node.right)
    return root

def treeNodeToString(root):
    if not root:
        return "[]"
    output = ""
    queue = [root]
    current = 0
    while current != len(queue):
        node = queue[current]
        current = current + 1

        if not node:
            output += "null, "
            continue

        output += str(node.val) + ", "
        queue.append(node.left)
        queue.append(node.right)
    return "[" + output[:-2] + "]"



'''
def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            t1 = stringToTreeNode(line);
            line = next(lines)
            t2 = stringToTreeNode(line);
            ret = Solution().mergeTrees(t1, t2)

            out = treeNodeToString(ret);
            print(out)
        except StopIteration:
            break


'''
if __name__ == '__main__':
    main()
