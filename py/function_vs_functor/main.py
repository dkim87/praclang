class myapple():
    def __init__(self, weight, color):
        self.weight = weight
        self.color = color

    def __str__(self):
        return "this is apple with weight of "+ str(self.weight) + " and color of "+ self.color


class myfunctor():
    def __init__(self):
        pass

    def __call__(self, x):
        print(x)

def mypartial(x, func):
    return func(x)

class my_init:
    def __init__(self, x):
        print(x, "from my_init")

def myfunc(x):
    print(x, "wow!")

def cmp_to_key(myfunc):
    class K:
        def __init__(self, obj, *args):
            self.obj = obj
        def __str__(self):
            return str(self.obj) + " and this is K class"
    return K

def return_class():
    class class:
        def __init__(self, )

def main():
    """this is main function."""
    mya = myapple(5, "red")
    mya2 = myapple(6, "green")
    print(mya)
    print(mya2)

    myfunc(mya)
    myfunctor_instance = myfunctor()
    myfunctor_instance(mya)

    mypartial(mya, myfunc)
    mypartial(mya, myfunctor_instance)

    func = cmp_to_key(myfunc)
    print(func(mya))

    mypartial(mya, my_init)


if __name__ == '__main__':
    main()
