def main():
    """this is main function."""
    a = 1
    b = 2

    i = 1
    while a <= b:
        print(i, "th trial: ", a)
        a += 0.01
        i += 1


if __name__ == '__main__':
    main()
