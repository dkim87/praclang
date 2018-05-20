def aaa(a,b,c):
    return a*a, b*b, c*c

def bbb(a,b,c):
    return a-1, b-1, c-1

def main():
    """this is main function."""

    x = bbb(*aaa(1,2,3))
    print(x)

if __name__ == '__main__':
    main()
