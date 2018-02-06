def main():
    """this is main function."""
    x = "hello"
    y = x
    z = "hello"

    print(
            id(x),
            id(y),
            id(z)
            )

    print(x is z)
    print(x == z)

    a = "anrsetiaosnretiaorstneainsoetiansroteanrseiotnarsiotenairshetqwfeithqoiwfetqoweftnqewfot"
    b = "anrsetiaosnretiaorstneainsoetiansroteanrseiotnarsiotenairshetqwfeithqoiwfetqoweftnqewfo" + "t"
    print(id(a), id(b))
    print(a is b)
    print(a == b)

    c = 256123451236123612351423412351
    d = 256123451236123612351423412350 + 1
    print(id(c), id(d))
    print(c is d)
    print(c == d)


if __name__ == '__main__':
    main()
