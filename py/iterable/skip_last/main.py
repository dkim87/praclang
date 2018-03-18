# How to skip last iterator?
# https://stackoverflow.com/a/10079265/6154359
# genius way

cars = [1, 2, 3, 4, 5]

itercars = iter(cars)
print(itercars)
prev = next(itercars)
print(prev)
for car in itercars:
    print(car)

    # use prev, not car

    prev = car
    print("prev is ", prev, ", car is ", car)

# of course
for car in cars[:-1]:
    print(car)

# of course
for (i, x) in enumerate(cars):
    if i!=0:
        print(x)

