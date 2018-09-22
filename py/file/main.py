def main():
    """this is main function."""
    with open("hello.txt", "r") as file:
        lines = file.readlines()

    # or
    lines2 = [line.rstrip("\n") for line in open("hello.txt", "r")]
    # safer
    with open("hello.txt", "r") as file:
        lines2 = [line.rstrip('\n') for line in file]

    print(lines)
    print(lines2)

    with open("hello.txt", "r") as file:
        for i in file:
            print(i)



if __name__ == '__main__':
    main()
