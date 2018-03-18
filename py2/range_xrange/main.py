import sys
x = range(5)
b = range(10)
y = x[4]
z = x[3]
print(y)
print(z)

s = sys.getsizeof(x)
print(s)
print(s.__sizeof__())
s = sys.getsizeof(b)
print(s)
print(s.__sizeof__())

for i in x:
    print(i)
    i += 1
    print(i)

from itertools import islice

def generator():
    i = 1
    while True:
        yield i
        i += 1

def take(n, iterable):
    "return first n items of the iterable as a list"
    return list(islice(iterable, n))

print (take(5, generator()))


print(x[1])
print(x[2])
print(x[3])

def frange(f, to, step=1):
    def iterable(index):
        val = f + step * index
        return val if val < to else print("myerror: iob")
    return iterable

y = frange(0, 5, 1)
print(y(1))
print(y(2))
print(y(3))

print(sum(x))
print(max(x))

def frange2(f, to, step=1):
    z = map(lambda z:z, f)

print(type(frange))
print(type(frange2))

print(type(x))
