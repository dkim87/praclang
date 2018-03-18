"""
this prints the backward call stack sequence for merge sort.
If treat this as a queue and execute this backward, it can emulate merge sort iteratively.
"""

def algo(a, b):
    if a > 1:
        return a-1, b*2
    elif a == 1 and b % 2 == 0: # if b is even
        return a, b-1
    elif a == 1 and b % 2 != 0: # if b is odd
        c, d = a+1, (b+1)/2
        if d % 2 == 0:
            return c, d-1
        elif d % 2 != 0:
            c,d = c+1, (d+1)/2
            if d % 2 == 0:
                return c, d-1
            else:
                print("recursion...")

def algo2(a, b):
    if a > 1:
        return a-1, b*2
    elif a == 1 and b == 1:
        print("finished!")
        return 1, 1
    elif a == 1 and b % 2 == 0: # if b is even
        return a, b-1
    elif a == 1 and b % 2 != 0: # if b is odd
        while b % 2 != 0:
            a, b = a + 1, (b+1)//2
        return a, b-1

def test_algo():
    a, b = 4, 1
    for i in range(10):
        a, b = algo(a, b)
        print(a, b)

def test_algo2():
    a, b = 4, 2
    for i in range(29):
        a, b = algo2(a, b)
        print(a, b)

def test():
    #test_algo()
    test_algo2() # pass

def main():
    """this is main function."""
    test()

if __name__ == '__main__':
    main()
