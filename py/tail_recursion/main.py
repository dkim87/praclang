from tail_re import tail_recursive
from tail_re import recurse

@tail_recursive
def factorial(n, accumulator=1):
    if n==0:
        return accumulator
    else:
        recurse(n-1, accumulator = accumulator * n)

def facto(n, acc = 1):
    print(n, acc)
    if n == 0:
        print(acc)
        return acc
    else:
        return facto(n-1,acc=acc * n)

def main():
    """this is main function."""
    print( factorial )
    x = factorial(3)

    x = factorial(1000)
    print(x)

    # print(facto(1000)) #maximum recursion error
    import sys
    sys.setrecursionlimit(3000)
    print("recursiion limit extended")
    print(facto(5,1))
    try:
        #facto(1000) # pass
        #facto(2000) # pass
        facto(2994)
        #facto(2995) # not pass
        print("yeah")
    except:
        print("caught it..")
    print("end")

if __name__ == '__main__':
    main()
