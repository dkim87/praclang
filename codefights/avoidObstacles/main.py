def avoidObstacles(inputArray):
    arr = inputArray
    l = sorted(arr)
    m = max(l)

    found = False

    jump = 2
    jump_inc = False
    while(True):
        jump_inc = False
        for i in range(jump, m+jump, jump):
            print("i is ", i)

            if i in l:
                jump += 1
                jump_inc = True
                break

        if jump_inc:
            continue
        else:
            return jump





def main():
    """this is main function."""
    inputArray = [5, 3, 6, 7, 9]
    ret = avoidObstacles(inputArray)
    print(ret)
    assert ret == 4

if __name__ == '__main__':
    main()
