"""for dinner"""
import random
dinner_tuple = (
    "port chick"
    "home",
    "mc pizza",
    #"pizza bro",
    "hot pot",
    "kor-chi",
    "kkanta",
    "subway",
    )
dinner_list = list(dinner_tuple)


def main():
    '''main function'''
    printarr(get_dinner())
    #test()

def test():
    #test_frequency(100000) # to test uniformity of the distribution
    mat = test_multidimensional_list()
    test_printarr_printmatrix(mat)
    test_linear_indexing(mat)

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

def printarr(arblist): # surprised that this works for matrix as well
    print("--------------------")
    for i in arblist:
        # print(i, sep = "%")
        print(i)
    print("--------------------")

def printmatrix(arbmat):
    h = len(arbmat) # for 10 * 5 matrix, for example, this must be 10
    w = len(arbmat[0]) # this must be 5

    i, j = 0, 0;
    print("--------------------")
    while i < h:
        print(arbmat[i][j], end="-")
        j+=1
        if j==w:
            j = 0
            i += 1
            print("")
    print("--------------------")

def print_matrix2(arbarr):
    print("--------------------")
    w = len(arbarr[0])
    h = len(arbarr)
    for i in range(h):
        for j in range(w):
            print(arbarr[i][j], end="-")
        print("")
    print("--------------------")


def test_printarr_printmatrix(arr): # what are the difference
    #print(arr)
    print([1, 2, 3])
    printarr(arr)
    #printmatrix(arr)
    #print_matrix2(arr)

def test_multidimensional_list():
    freq = [[ (x,y) for y in range(5)  ] for x in range (10)]
    printarr(freq)
    return freq

def test_linear_indexing(arbmat): #
    h = len(arbmat)
    w = len(arbmat[0])

    for i in range(h):
        print("i =", i, ", arbmat =", arbmat[i])


def test_frequency(trial=1000):
    # trial = 100
    numlist = [0, 1, 2, 3, 4, 5, 6, 7]
    l = len(numlist)

    w, h = l, l
    freq = [[0 for y in range(w)] for x in range (h)]

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


