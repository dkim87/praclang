"""for dinner"""
import random
dinner_tuple = (
    "home",
    "mc pizza",
    "pizza bro",
    "hot pot",
    "kor-chi",
    "kkanta",
    "subway",
    )
dinner_list = list(dinner_tuple)


def main():
    '''main function'''
    printarr(get_dinner())
    print("-----")
    printarr(dinner_list)
    # get_frequency() # to test uniformity of the distribution

def get_dinner():
    '''get dinner'''
    print("hello world!")
    #sampling_wo_replacement(dinner_list, 10)
    mylist = sampling_w_replacement(dinner_list)
    return mylist

def sampling_wo_replacement(mylist, trial):
    #random.seed(1)
    #print(random.getstate())
    i = 0
    while i < trial:
        rand_int = random.randint(0, len(mylist)-1)
        index = rand_int
        print(mylist[index])
        i += 1

def sampling_w_replacement(mylist):
    i = 0
    mylist = list(mylist)

    def swaparr(mylist, i1, i2):
        tmp = mylist[i1]
        mylist[i1] = mylist[i2]
        mylist[i2] = tmp

    i = len(mylist) - 1
    while i >= 0:
        rand_int = random.randint(0, i)
        swaparr(mylist, i, rand_int)
        i -= 1

    # printarr(mylist)
    return mylist

def printarr(arblist):
    for i in arblist:
        print(i, sep = "%")

def printmatrix(arbmat):
    h = len(arbmat)
    i, j = 0, 0;
    while j < h:
        print(arbmat[j][i], end="-")
        i+=1
        if i==h:
            i = 0
            j += 1
            print("")


def test_frequency():
    trial = 1000
    # trial = 100
    numlist = [0, 1, 2, 3, 4, 5, 6, 7]
    l = len(numlist)

    w, h = l, l
    freq = [[0 for y in range(h)] for x in range (w)]

    while trial > 0:
        listcopy = list(numlist) # create new list instead of same ref
        randomized_list = sampling_w_replacement(listcopy)
        # randomized_list = [0, 1, 2, 3, 4, 5, 6, 7] # test


        for i in range(len(randomized_list)):
            val = randomized_list[i]
            freq[i][val] += 1


        trial -= 1


    print("----var-----")
    printmatrix(freq)
    print("----y axis: position-----")
    return freq


# def get_frequency():
#     '''test if randint function is uniform'''
#     frequency = [0] * 10
#     trial = 1000000
#     #random.seed(1)
#     while trial > 0:
#         rand_int = random.randint(0, 9)
#         frequency[rand_int] += 1
#         trial -= 1
#     print(frequency)
#     return frequency

if __name__ == '__main__':
    main()
    # test_frequency()


