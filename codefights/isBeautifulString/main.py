import string
import collections

"""
    def isBeautifulString(a):

        x = collections.Counter(a)
        prev = a
        for i in string.ascii_lowercase[1:]:
            if x[prev] < x[i]:
                return False
            prev = i
        return True

"""

def isBeautifulString(inputString):
    r = [inputString.count(i) for i in string.ascii_lowercase]
    print(r)
    return r[::-1] == sorted(r)

def main():
    """this is main function."""
    a = isBeautifulString("bbbaacdafe")
    print(a)

if __name__ == '__main__':
    main()
