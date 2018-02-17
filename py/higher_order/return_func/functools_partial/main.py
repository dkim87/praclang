def sum(a,b):
    return a + b

'''
from functools import partial
sum_3 = partial(sum, 3)
'''

'''
def curry(func, arg1):
    g = lambda arg2: func(arg1, arg2)
    return g
'''

def curry(func, arg1):
    def newfunc(arg2):
        return func(arg1, arg2)
    return newfunc

sum_3 = curry(sum, 3)

x = sum_3(8)
print(x)
x = sum_3(5)
print(x)

from functools import partial
sum1_2 = partial(sum, 1, 2)
print(sum1_2())
