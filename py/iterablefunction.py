def f(n):
    x=1
    while 1:
        yield n*x
        x+=1
x = 4
X = f(3)

print(X)
