def sqr(x):
    return x*x

def main():
    """this is main function."""
    x = (5)
    print(x)
    print(type(x))

    x = (5,)
    print(x)
    print(type(x))

    x = (sqr(5))
    print(x)
    print(type(x))

    x = (sqr(5), )
    print(x)
    print(type(x))

    x = [sqr(5)]
    print(x)
    print(type(x))

    x = [sqr(5),sqr(4)]
    print(x)
    print(type(x))

    print(x[:])
    print(type(x[:]))


if __name__ == '__main__':
    main()
