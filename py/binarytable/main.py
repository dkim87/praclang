def printBinary(x=99, lvl = -1):
    print(lvl)
    if lvl == 4:
        print(x, lvl)
    else:
        printBinary(0, lvl + 1)
        printBinary(1, lvl + 1)


printBinary()
