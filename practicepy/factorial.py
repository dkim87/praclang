def factorial(x):
    n=1

    while(x>1):
        n*=x
        x-=1

    return n
        


x = factorial(5)
print("a=",x)


print("googol vs. factorial(100):")

googol= 10**100
print(googol)

factohund=factorial(100)
print(factohund)

if(googol>factohund):
    print("googol wins")
else :
    print("facto")

for i in range(100000):
    print(factorial(i))
