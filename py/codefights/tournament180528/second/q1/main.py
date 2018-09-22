def isDivisibleBy3(inputString):
    strlen = len(inputString)

    arr = list(inputString)
    print(arr)

    cand = []
    i = arr.index('*')

    for n in range(10):
        arr[i] = str(n)
        cand.append(list(arr))

    print(cand)

    strList = map(''.join, cand)
    intList = map(int, strList)
    print(list(intList))

    divisible = []



def main():
    """this is main function."""

    inputString = "1*0"
    x = isDivisibleBy3(inputString)
    print(x)

if __name__ == '__main__':
    main()
