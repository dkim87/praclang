def main():
    """this is main function."""

    '''
    a = 154476802108746166441951315019919837485664325669565431700026634898253202035277999

    b = 36875131794129999827197811565225474825492979968971970996283137471637224634055579

    c = 4373612677928697257861252602371390152816537558161613618621437993378423467772036

    a = 35
    b = 132
    c = 627
    '''

    a = 15447
    b = 3687
    c = 437

    ans = a/(b+c) + b/(a+c) + c/(a+b)

    print(ans)

if __name__ == '__main__':
    main()