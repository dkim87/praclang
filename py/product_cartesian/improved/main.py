def cartesian_index(*args): # args are numbers like 5, 4, 2, 3
    num_lists = len(args)

    indices = [0] * num_lists

    def inc_index(indices, args, index):
        if index == len(args): # terminating condition
            return True
        indices[index] += 1
        if indices[index] == args[index]:
            indices[index] = 0
            return inc_index(indices, args, index+1)
        return False

    terminate_flag = False
    while(terminate_flag == False):
        yield indices
        terminate_flag = inc_index(indices, args, 0)



def main():
    """this is main function."""

    for i in cartesian_index(3, 2, 2):
        print(i)

    for i in cartesian_index(2, 2, 2, 3):
        print(i)

if __name__ == '__main__':
    main()
