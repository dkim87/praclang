def increasingarr(arr):
    for i in range(len(arr)):
        arr[i] = i

def factorial(x):
    n=1
    while(x>1):
        n*=x
        x-=1
    return n

def printfac(x):
    print(x, "factorial is :" ,factorial(x))

def mymap(func, arr):
    for i in range(len(arr)):
        func(arr[i])

def main():
    x = factorial(5)
    print("a=",x)

    '''
    print("googol vs. factorial(100):")
    googol= 10**100
    print(googol)
    factohund=factorial(100)
    print(factohund)
    if(googol>factohund):
        print("googol wins")
    else:
        print("factohund wins")
    '''

    '''
    for i in range(100000):
        print(factorial(i))
    '''

    arrlen = 100
    array = [0 for i in range(arrlen)]
    increasingarr(array)
    print(array)

    mymap(printfac, array)

main()
