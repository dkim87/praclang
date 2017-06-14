"This is main module."

def main():
    "This is main. Is it funny?"
    xtest = factorial(1)
    print(xtest)

    for i in range(1000):
        print(factorial(i))
        print(i)

def factorial(num):
    "This returns factorial."
    if num > 1:
        return num*factorial(num-1)
    else:
        return 1

main()
