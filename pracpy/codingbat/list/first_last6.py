#!/usr/local/bin/python3

exArray = [5,4,6]
exArray2 = [6,4,5,2]
exArray3 = [1,2,3]

def first_last6(nums):
    listleng = len(nums)
    if (nums[0] == 6 or nums[listleng -1] == 6):
        return True;
    else:
        return False;

print(first_last6(exArray))
print(first_last6(exArray2))
print(first_last6(exArray3))
