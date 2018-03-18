arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]

def binary_search_two_improved(arr, target):
    print("mission! search:", target)
    start = 0
    end = len(arr)-1
    while(start < end):
        mid = (start + end ) // 2

        print_arr_position_start_mid_end_mid(arr, start, mid, end)

        if target <= arr[mid]:
            end = mid
        elif arr[mid] < target:
            start = mid + 1

    if arr[start] == target: # use start or end cuz mid is not updated
        return start
    return len(arr) # array out of bound




def binary_search_two(arr, target):
    """
    This method does not work.
    Due to the nature of int divide which the remainders are forgotten, mid will always be equal to start
    in the case where start + 1 == end.
    This results in an endless loop.

    Therefore, instead of
        ```
        if target < arr[mid]:
            end = mid - 1
        ```
    the following is recommended
        ```
        if arr[mid] < target:
            start = mid + 1
        ```
    """
    print("mission! search:", target)
    start = 0
    end = len(arr)-1
    while(start < end):
        mid = (start + end ) // 2

        print_arr_position_start_mid_end_mid(arr, start, mid, end)

        if target < arr[mid]:
            end = mid - 1
        elif arr[mid] <= target:
            start = mid
    return -1

def binary_search(arr, target):
    """
    Unlike binary_search_two_improved,
    start <= end inside while loop is crucial for this method to work.
    In case of edge cases such as

    8, 9
    ^
    ^
       ^

    We need to align start and end such as

    ^
    ^
    ^

    in order to terminate the loop.
    """

    print("mission! search:", target)
    start = 0
    end = len(arr)-1
    while(start <= end):
        mid = (start + end ) // 2

        print_arr_position_start_mid_end_mid(arr, start, mid, end)

        if arr[mid] < target:
            start = mid + 1
        elif arr[mid] == target:
            return mid
        elif arr[mid] > target:
            end = mid - 1
    return -1

def print_position(index):
    print("-", end="")
    for i in range(index):
        print("   ",end="")
    print("^")

def print_arr_position_start_mid_end_mid(arr, start, mid, end):
    print(arr)
    print_position(start)
    print_position(mid)
    print_position(end)
    print("mid :", mid)



def test_binary_search_two():
    global arr
    assert 4 == binary_search_two(arr, 5)

def test_binary_search_two_improved():
    global arr
    assert 4 == binary_search_two_improved(arr, 5);

    for i in range(len(arr)):
        assert i == binary_search_two_improved(arr, i+1)

    print("wow!")
    print(binary_search_two_improved(arr, 1))
    print(binary_search_two_improved(arr, 9))


def test_binary_search():
    global arr
    assert 4 == binary_search(arr, 5) # pass

    '''
    for i in range(len(arr)):
        assert i == binary_search(arr, i+1)
    '''

    assert 0 == binary_search(arr, 1)
    assert 8 == binary_search(arr, 9)


def test():
    test_binary_search() # pass
    # test_binary_search_two() # fail
    # test_binary_search_two_improved() # pass


def main():
    """this is main function."""
    test()




if __name__ == '__main__':
    main()
