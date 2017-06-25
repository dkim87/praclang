import random

def main():
    print("hello world")
    #unsorted = [1, 5, 2 ,9 ,3 ,6,2 ,4]
    #quick_sort(unsorted,0,len(unsorted)-1)
    #check_sorted(unsorted)

    i = 10
    total_sorted = 0
    while(i > 0):
        random.seed(i)

        randomlist = random.sample(range(100), 20)
        print("randomlist:", randomlist)
        quick_sort(randomlist, 0, len(randomlist)-1)
        if check_sorted(randomlist):
            total_sorted+=1
        i-=1
    print("total_sorted", total_sorted)


def quick_sort(unsorted, start, end): # index

    size = (end-start+1)
    stack = [0]*(size)
    top=-1

    # initialize stack

    top+=1
    stack[top]=start
    top+=1
    stack[top]=end

    while(top>=0):
        print("top:",top)
        end = stack[top]
        top-=1
        start = stack[top]
        top-=1

        print("start:", start, "end", end)

        if end-start <= 0:
            continue

        pivot_index = end # last index
        i = start
        while (i < pivot_index):
            if i < pivot_index and unsorted[i] >= unsorted[pivot_index]:
                if(pivot_index != i+1):
                    swap(unsorted, pivot_index-1, pivot_index)
                swap(unsorted, i, pivot_index) # pivot-1 element would go to the new blank on the left side. i element would come to the right next of pivot.
                pivot_index -= 1
                print_progress(unsorted, start, end, i, pivot_index)
                continue

            print_progress(unsorted, start, end, i, pivot_index)
            i += 1

        print("before:", end="")
        print(stack)

        top += 1
        stack[top] = pivot_index+1
        top += 1
        stack[top] = end
        top += 1
        stack[top] = start
        top += 1
        stack[top] = pivot_index-1

        print("after:", end="")
        print(stack)

def swap(mylist, a, b):
    tmp = mylist[a]
    mylist[a] = mylist[b]
    mylist[b] = tmp

def print_index(index):
    print(" ", end="")
    for i in range(index):
        print("    ", end="")
    print("v")

def print_pivot(pivot_index):
    print(" ", end="")
    for i in range(pivot_index):
        print("    ", end="")
    print("^")

def print_progress(mylist, start, end, index, pivot_index):
    print_index(index-start)
    for i in range(start,end+1):
        print("[",mylist[i],"]",sep="", end=" ")
    print("")
    print_pivot(pivot_index-start)

def check_sorted(mylist):
    print(mylist)
    for i in range(len(mylist)-1):
        if mylist[i]>mylist[i+1]:
            print("Not Sorted!!")
            return False
    print("Sorted!")
    return True






main()
