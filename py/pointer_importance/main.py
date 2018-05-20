A = [ [1, 0, 0], [1, 1, 0], [0, 1, 0]]
def main():
    """this is main function."""
    test_reverse()
    # test_2()

def test_reverse():
    global A
    for l in A:
        #l = list(reversed(l))
        l.reverse()

    print(A)

def test_2():
    global A
    for l in A:
        for i, e in enumerate(l):
            l[i] = 2

    print(A)

if __name__ == '__main__':
    main()
