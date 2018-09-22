def arrayConversion(inputArray):

    while len(inputArray > 1):
        inputArray = consecutiveSum(inputArray)
        if len(inputArray > 1):
        inputArray = consecutiveProduct(inputArray)
    return temp

def consecutiveSum(inputArray):
    arr = []

    for i in range(0, len(inputArray), 2):
        arr.append(inputArray[i] + inputArray[i+1])

    return arr

def consecutiveProduct(inputArray):
    arr = []
    for i in range(0, len(inputArray), 2):
        arr.append(inputArray[i] * inputArray[i+1])

    return arr



def main():
    """this is main function."""
    

if __name__ == '__main__':
    main()
