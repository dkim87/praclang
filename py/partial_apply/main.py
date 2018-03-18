import functools as ft

def printp(a, b, c, d, e):
    print(a, b, c, d, e)

## all works
pbcde = ft.partial(printp, 1)
pbcd = ft.partial(printp, 1, e=5)
pbcd = ft.partial(pbcde, e = 5)

## this also works too
class print_class:
    def __init__(self):
        print("good")

    def printp(self, a, b, c, d, e):
        print(a, b, c, d, e)

def outer(args):
    def inner(x):
        print("hello")
    inner.x = args # wth?
    return inner

def main():
    """this is main function."""
    pbcde(2,3,4,5)
    pbcd(2,3,4)

    pc = print_class()
    pcpbcd = ft.partial(pc.printp, 1, e = 6)
    pcpbcd(2, 3, 4)

    outer(5)(5) # curry? lol no


if __name__ == '__main__':
    main()
