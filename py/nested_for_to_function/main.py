def nested(x):
    if x > 1:
        nested(x-1)
    for i in range(3):
        print('hello')

def normal():
    """this is main function."""
    for i in range(3):
        for j in range(3):
            print(i, j)


for i in 



def main():
    #normal() # pass
    nested(3)
    trial(1, 1, 1, 3)

if __name__ == '__main__':
    main()
