"""for dinner"""
import random

def main():
    '''main function'''
    get_dinner()

def get_dinner():
    '''get dinner'''
    print("hello world!")
    dinner_list = (
        "mc pizza",
        "pizza bro",
        "hot pot",
        "kor-chi",
        "kkanta",
        "subway",
        )

    #random.seed(1)
    #print(random.getstate())
    i = 0
    while i < 10:
        rand_int = random.randint(0, len(dinner_list)-1)
        index = rand_int
        print(dinner_list[index])
        i += 1

def get_frequency():
    '''test if randint function is uniform'''
    frequency = [0] * 10
    trial = 1000000
    #random.seed(1)
    while trial > 0:
        rand_int = random.randint(0, 9)
        frequency[rand_int] += 1
        trial -= 1
    print(frequency)
    return frequency

if __name__ == '__main__':
    main()
    get_frequency()
