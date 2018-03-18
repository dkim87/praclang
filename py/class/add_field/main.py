class MyClass():

    """Docstring for MyClass. """

    def __init__(self):
        """TODO: to be defined1. """
        self.x = 5
        self.y = 6

def main():
    """this is main function."""
    obj = MyClass()
    print(obj.x, obj.y)

    obj.z = 7
    print(obj.z)

    obj.f = lambda x : x + 5
    print(obj.f(5))

    obj.f = lambda : print("wow")
    obj.f()



if __name__ == '__main__':
    main()
