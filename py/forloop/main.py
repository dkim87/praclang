x = [1, 2, 3, 4, 5]

xi = iter(x)

for i in xi.__iter__():
    print(i)

print(next(xi))


print(x.__iter__())

for i in x.__iter__():
    print(i)


