x = 0;
def xSetter(n):
    global x
    x = n
xSetter(5)
print(x)
xSetter(5)
print(x)

def ySetter(x, n):
    x = n
ySetter(x, 6)
print(x)

