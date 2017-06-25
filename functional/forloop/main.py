def main():
    forloop(5)


def forloop(x):
    if x<=0:
        return
    print("hello world")
    forloop(x-1)

main()
