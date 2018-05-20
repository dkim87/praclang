# if a list x is inputted, output list y which is sub-row of pascal's triangle below x.
#  e.g. x: 1->2->1, y: 1->3->3->1
# pascal_next_line(x):
#   check x is valid? starts with 1? end with 1?
#   ... something ...
#   return y

def pascal_next_line(x):

    '''
    example:

    x <- [1 2 1]
    y.append(1)
    y.append(row[0] + row[1])
    y.append(row[1] + row[2])
    y.append(1)
    y <- [1, 3, 3, 1]
    '''

    y = []
    y.append(1)
    for i in range(len(x)-1):
        y.append(x[i] + x[i+1])
    y.append(1)

    return y

def print_pascal_until_nth_line(n):
    """
    print pascal triangle until nth line
    """
    if n < 1:
        print("n must be greater than 0.")

    y = [1]
    print(y)
    for i in range(n-1):
        y = pascal_next_line(y)
        print(y)

def print_pascal_until_nth_line_recur(n):
    def pascal(n, line_list):
        if n <= 0:
            return
        print(line_list)
        next_line_list = pascal_next_line(line_list)
        pascal(n-1, next_line_list)
    pascal(n, [1])


def main():
    """this is main function."""
    print_pascal_until_nth_line_recur(6)

if __name__ == '__main__':
    main()
