lis = [x/2 for x in range(30)]

gen = (x/2 for x in range(30))

print(lis)
print(len(lis))


print(len(range(10)))

x = range(10)
xi = iter(x)

print(xi.__next__())
print(xi.__next__())
print(xi.__next__())

