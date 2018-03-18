def fib_tail(n, a=0, b=1):
    """TODO: Docstring for fib.

    :arg1: TODO
    :returns: TODO

    """
    if n == 0:
        return a
    else:
        return fib_tail(n-1, b, a+b)

def fib_iter(n):
    a = 0
    b = 1
    while n>0:
        a,b = b, a+b # different than a = b; b = a+b; since this one will require a temporary variable to store previous a.
        n -= 1
    return a

def fib_iter_tco(n):
    a, b = 0, 1
    while True:
        if n == 0:
            return a
        else:
            n, a, b = n-1, b, a+b

from tco import *
@with_continuations()
def fib_tail_tco(n, a=0, b=1, self=None):
    if n == 0:
        return a
    else:
        return self(n-1, b, a+b)


def main():
    """this is main function."""
    print("run unit test")
    print(fib_iter_tco(1000))
    print(fib_tail_tco(1000))


if __name__ == '__main__':
    main()
