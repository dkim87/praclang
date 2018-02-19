def main():
    """this is main function."""
    test()

def test_generator_end():
    a = multiple3(6)
    print(next(a))
    print(next(a))
    print(next(a))
    print(next(a))
    print(next(a))
    try:
        print(next(a)) # iterator finished
    except:
        print("wow!")




def multiple3(n):
    x = 1
    print(x) # why no print?
    for i in range(5):
        yield x
        x += n
        print(x) # no print?

def test():
    # test_next()
    test_generator_end()

def test_next():
    a = multiple(5)
    b = multiple2(5)

    for i in range(10):
        c = a.__next__()
        d = next(b)
        assert(c == d)
        print("a:", c, ", b:", d)

# generator
def multiple(n):
    x = 1
    while 1:
        yield n*x
        x += 1

def multiple2(n):
    x = n
    while 1:
        yield x
        x += n


if __name__ == '__main__':
    main()
