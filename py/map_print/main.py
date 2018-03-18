l = [1, 2, 3, 4]
x = iter(l)


z = list(map(lambda x: print('A'), map(print, [1,2,3])))
print(z)

w = (map(lambda x: print('A'), map(print, [1,2,3])) )

for i in w:
    pass



