def boxBlur(image):
    h = len(image)
    w = len(image[0])

    x = [[None for x in range(w-2)] for y in range(h-2)]

    def mean9(image, i,j):
        s = 0
        s += sum(image[i-1][j-1:j+2])
        s += sum(image[i][j-1:j+2])
        s += sum(image[i+1][j-1:j+2])
        return s//9

    import itertools
    print(h,w)
    for i,j in itertools.product(range(1,h-1), range(1,w-1)):
        print(i,j)
        x[i-1][j-1] = mean9(image, i, j)
        print(x)

    return x







def main():
    """this is main function."""
    image = [[1, 1, 1],
            [1, 7, 1],
            [1, 1, 1]]
    ret = boxBlur(image)
    print([[1]] == ret)
    image = [[36,0,18,9], 
 [27,54,9,0], 
 [81,63,72,45]]
    ret = boxBlur(image)
    print([[40,30]] == ret)

if __name__ == '__main__':
    main()
