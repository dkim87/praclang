def main():
    """this is main function."""

    print("for")
    for i in range(3):
        for j in range(4):
            print(i, j);

    i = 0;
    j = 0;

    print("while")
    while(True):
        print(i,j)
        j += 1
        if(j == 4):
            i += 1
            j = 0
            if (i == 3):
                i = 0
                break



if __name__ == '__main__':
    main()
