import random
import sys

def one_third_prob():
    x = binary_rand()
    y = binary_rand()
    if x and y:
        return one_third_prob()
    elif x ^ y:
        return False
    elif not (x and y):
        return True

def test_one_third_prob():
    sum = 0
    for i in range(3000):
        time = 0
        sum += one_third_prob()
    print(sum)

def binary_rand():
    return random.randint(0,1)

def test_binary_rand():
    sum = 0
    for i in range(1000):
        sum += binary_rand()
    print(sum)


def main():
    """this is main function."""
    #random.seed(1)
    test_binary_rand() # pass
    test_one_third_prob() # pass

if __name__ == '__main__':
    main()
