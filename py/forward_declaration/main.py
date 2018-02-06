
def main():
    hello(5)

def coin(y):
    if y > 0:
        print("coin")
        hello(y-1)

def hello(x):
    if x > 0:
        print("hello")
        coin(x-1)

if __name__ == '__main__':
    main()
