def main():
    for i in range(5):
        if (i%2==0):
            print(i, "is even.")
        else:
            print(i, "is odd.")

    func_for(0,5)


def func_for(i,l):
    print(i)
    if (i >= l):
        return
    if (i%2==0):
        print(i, "is even.")
    else:
        print(i, "is odd.")
    return func_for(i+1, l)











main()
