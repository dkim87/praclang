
"Solution to Snail matrix problem."

def main():
    "main. "
    for i in range(20):
        snail(i)

def snail(dim):
    "solves dim sized snail matrix"
    matrix = [[0 for x in range(dim)] for y in range(dim)]

    begin_num = 1
    x = 0
    size = len(matrix)
    while(1):
        if size<1:
            break
        for i in range(size):
            matrix[x][x+i] = begin_num
            begin_num+=1

        for i in range(1,size):
            matrix[x+i][x+size-1] = begin_num
            begin_num+=1

        for i in range(1,size):
            matrix[x+size-1][x+size-1-i] = begin_num
            begin_num+=1

        for i in range(1, size-1):
            matrix[x+size-1-i][x] = begin_num
            begin_num += 1
        x += 1
        size -= 2

    print_mat(matrix)

def print_mat(matrix):
    "print matrix."
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(matrix[i][j], end="\t")
        print("")
    print("#####")

# not used.
#def inner_matrix(matrix):
#    inner = [[0 for x in range(len(matrix)-2)] for y in range(len(matrix)-2)]
#    for i in range(1, len(matrix)-1):
#        for j in range(1, len(matrix)-1):
#            inner[i-1][j-1] = matrix[i][j]
#    return inner

main()
