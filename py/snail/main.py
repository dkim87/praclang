def main():
    for i in range(20):
        snail(i)

def snail(dim):
    matrix = [[0 for x in range(dim)] for y in range(dim)];
    snail_one_layer(matrix,0, dim, 1)
    print_mat(matrix)

def print_mat(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(matrix[i][j], end="\t")
        print("")
    print("#####")

def snail_one_layer(matrix, x, size, begin_num):
    if size<1:
        return
    for i in range(size):
        matrix[x][x+i] = begin_num
        begin_num+=1

    for i in range(1,size):
        matrix[x+i][x+size-1] = begin_num
        begin_num+=1

    for i in range(1,size):
        matrix[x+size-1][x+size-1-i] = begin_num
        begin_num+=1

    for i in range(1,size-1):
        matrix[x+size-1-i][x] = begin_num
        begin_num+=1
    return snail_one_layer(matrix,x+1,size-2, begin_num)

def inner_matrix(matrix):
    inner = [[0 for x in range(len(matrix)-2)] for y in range(len(matrix)-2)]
    for i in range(1, len(matrix)-1):
        for j in range(1, len(matrix)-1):
            inner[i-1][j-1] = matrix[i][j]
    return inner

main()
