# dirty data

QUESTIONS = (
        "혹시 영어가 불편하신가요?",
        "Do you think learning English is not necessary to be a good programmer?",
        "Do you think Linux is not worthy learning?",
        "Do you think learning how to use terminal / to deal with CLI environment is a waste of time?"
        )

CONGRATS = """
#########
CONGRATS!
#########

You are not TTAEL KKAM. Your future is bright!

May the God of programming bless you.

"""

GETOUT = """
You are TTAEL KKAM. Get out.
"""

def add_yn(s):
    return s + " (y/n) : "

def test():

    answers = []

    for i, s in enumerate(QUESTIONS):
        while True:
            print("")
            ans = input(add_yn(s))
            if ans == 'y':
                print(GETOUT)
                exit(0)
            elif ans == 'n':
                break
            else:
                print("Please answer y or n.")
                continue

    print(CONGRATS)


def main():
    """this is main function."""
    test()

if __name__ == '__main__':
    main()
