def main():
    forloop(5)
    repeat(5, print_hello)


def forloop(x):
    if x<=0:
        return
    print("hello world")
    forloop(x-1)

def repeat(x, func):
    if x<=0:
        return
    func()
    repeat(x-1, func)

def print_hello():
    print("hello!")

main()
