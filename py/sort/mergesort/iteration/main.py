import random

'''
def main():
    i = 100
    total_mustbe_sorted = 100
    total_actual_sorted = 0

    while(i > 0):
        random.seed(i)
        randomlist = random.sample(range(100), 30)
        print("before:", randomlist)
        merge_sort(randomlist, 0, len(randomlist)-1)
        if check_sorted(randomlist):
            print("after: ", randomlist)
            total_actual_sorted+=1
        else:
            print("unsorted: ", randomlist)
        i-=1
    print("total_sorted", total_actual_sorted)
    if (total_mustbe_sorted == total_actual_sorted):
        print("SUCCESS!!")
'''

def main():
    unsorted = [1, 3, 9, 6, 8, 7, 2, 5, 2, 3]
    merge_sort(unsorted,0,len(unsorted)-1)
    if check_sorted(unsorted):
        print(unsorted)
        print("sorted!")
    else:
        print(unsorted)
        print("unsorted!")

def merge_sort(target, start, end):

    stack = [0 for i in range(2*len(target))]
    top = -1

    top += 1
    stack[top] = start
    top += 1
    stack[top] = end

    while(top>=0):
        print(top)
        print(stack)
        end = stack[top]
        top -= 1
        start = stack[top]
        top -= 1

        if end-start <= 0:
            continue
        mid = (start+end)//2

        # for mergesort(left)
        top += 1
        stack[top] = mid+1
        top += 1
        stack[top] = end
        # for mergesort(right)
        top += 1
        stack[top] = start
        top += 1
        stack[top] = mid

    #sort_and_merge(target, start, mid, mid+1, end)

def sort_and_merge(target, lstart, lend, rstart, rend):
    print("call sort and merge:",target, lstart, lend, rstart, rend)
    if(rend-lstart <= 0):
        return

    leng = rend-lstart+1
    left = target[lstart:lend+1] # from mylist[0] to mylist[mid]
    right = target[rstart:rend+1] # from mylist[mid+1] to mylist[end]
    llen = len(left)
    rlen = len(right)
    li = 0
    ri = 0

    for i in range(leng):
        print("before:", target)
        if(li>=llen):
            target[lstart+i:rend+1] = right[ri:rend+1]
            return

        if (ri>=rlen):
            target[lstart+i:rend+1] = left[li:lend+1]
            return

        if left[li] < right[ri]:
            target[lstart+i] = left[li]
            li += 1
        elif right[ri] <= left[li]:
            target[lstart+i] = right[ri]
            ri += 1
            print("after:", target)

def check_sorted(mylist):
    for i in range(len(mylist)-1):
        if mylist[i]>mylist[i+1]:
            return False
    return True

main()
