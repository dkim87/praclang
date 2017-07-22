mylst = [1, 2, 3, 4]
myit = iter(mylst)
print(next(myit)) # 1

for x in mylst: # 1 2 3 4
    print(x, end = " ")

print("")

while True:
    try:
        print(next(myit))
    except StopIteration:
        print("end")
        break;

for x in myit: # 2 3 4
    print(x, end = " ")


