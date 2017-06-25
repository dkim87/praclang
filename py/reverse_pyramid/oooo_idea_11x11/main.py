def pyramid_oneline(n, m):
    for i in range(n):
        print(" ", end='')
    print("0", end='')
    iii = makeiii(m)
    print(iii*iii, end='')
    print("0", end='')
    for i in range(n):
        print(" ", end='')
    print("")

def pyramid(stairs):
    for i in range(stairs):
        pyramid_oneline(i, stairs-i)
    pyramid_lastline(stairs)

def pyramid_lastline(stairs):
    for i in range(stairs):
        print(" ", end='')
    print("0")

def makeiii(digits):
    retv = 0;
    for i in range(digits):
        retv = 10**i + retv;
    return retv;

def print_blank(rep):
    for i in range(rep):
        print(" ", end="")

def pyramid_shift(stairs, shift):
    for i in range(stairs):
        print_blank(shift)
        pyramid_oneline(i, stairs-i)
    print_blank(shift)
    pyramid_lastline(stairs)

def beautiful_pyramids(pynum):
    for i in range(pynum):
        pyramid_shift(i, 10-i)

def amazing_pyramids(pynum):
    for i in range(pynum):
        pyramid_shift(pynum-i, i)

def pyramid_reverse(stairs):
    for i in range(stairs):
        pyramid_oneline(stairs-i-1, i)


def main():
    beautiful_pyramids(9)
    amazing_pyramids(9)
    pyramid_reverse(9)


main()

