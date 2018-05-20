def main():
    """this is main function."""
    a = 1.9999999999999999998
    b = 2.0000000000000000001

    print(a+b) # must be 3.999999999...99
    print(int(a+b)) # actually becomes 4
    print(int(a)) #
    print(int(b)) # 2

    c = 2
    for i in range(100):
        c += 0.01
    print(c) # must be 3
    print(int(c)) # actually, 2


if __name__ == '__main__':
    main()
