# import progressbar # does not work with python3
# https://stackoverflow.com/questions/3002085/python-to-print-out-status-bar-and-percentage

from time import sleep
import sys



def main():
    """this is main function."""
    print("hello!!", end = '') # deleted
    sys.stdout.write("hello!") # deleted
    print("")
    for i in range(21):
        sys.stdout.write('\r')
# the exact output you're looking for:

        sys.stdout.write("[%-20s] %d%%" % ('='*i, 5*i))
        sys.stdout.flush()
        sleep(0.25)
    print("")
    print("\nend!")


if __name__ == '__main__':
    main()
