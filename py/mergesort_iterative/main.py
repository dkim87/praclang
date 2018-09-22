def main():
    """this is main function."""
    x = list(map(int, "1 4 9 2 4 7 3 0".split()))
    print(x)
    print(mergesort(x))
    print(mergesort_iterative(x))
    mergesort(x) == mergesort_iterative(x)

def merge(a, b):
    lst = []
    i = 0
    j = 0
    while 0 <= i < len(a) and 0 <= j < len(b):
        if a[i] <= b[j]:
            lst.append(a[i])
            i += 1
            if i == len(a):
                lst += b[j:]
        else:
            lst.append(b[j])
            j += 1
            if j == len(b):
                lst += a[i:]
    return lst


def mergesort_iterative(x):
    stack = []
    mid = len(x) // 2
    a = x[:mid]
    b = x[mid:]
    stack.append(b)
    stack.append(a)
    while(stack is None):
        x = stack.pop()
        if len(x) > 1:
            mid = len(x) // 2
            a = x[:mid]
            b = x[mid:]
            stack.append(b)
            stack.append(a)
            continue
        if len(x) == 1:
            y = stack.pop()
            stack.append(merge(x,y))


def mergesort(x):
    if len(x) == 1:
        return x

    half = len(x) // 2
    a = mergesort(x[:half])
    b = mergesort(x[half:])
    return merge(a, b)





if __name__ == '__main__':
    main()
