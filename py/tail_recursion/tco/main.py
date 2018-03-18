from tco import *

@with_continuations()
def factorial(n, k = 1, self = None):
    return self(n-1, k * n) if n > 1 else k

print(factorial(1000))


print(factorial(3000))
