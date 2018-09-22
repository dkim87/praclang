def minesweeper(matrix):
    h = len(matrix)
    w = len(matrix[0])

    ret = [[None for i in range(w)] for i in range(h)]

    import itertools
    for i,j in itertools.product(range(h), range(w)):
        ret[i][j] = countMines(matrix, i, j)
    return ret

def countMines(matrix,i,j):
    h = len(matrix)
    w = len(matrix[0])
    count = 0
    import itertools

    for c,r in itertools.product(range(-1,2), range(-1,2)):
        if r == c == 0: continue
        n = i+c; m = j+r
        if 0 <= n < h and 0 <= m < w:
            if matrix[n][m]: count += 1
    return count

def main():
    """this is main function."""
    matrix = [[True,False,False,True], 
            [False,False,True,False], 
            [True,True,False,True]]
    ret = minesweeper(matrix)
    print(ret)

if __name__ == '__main__':
    main()
