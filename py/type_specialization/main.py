# https://stackoverflow.com/questions/9225679/how-to-have-different-input-types-for-the-same-function

# cool, it supports

def aFunction(string = '', dicti = {}):
    if not string:
         print ('you gave string as input')
    if not dicti:
         print ('you gave a dict as input')

def main():
    """this is main function."""
    aFunction(string = 'test')
    dict = {};
    dict['test'] = 'wow'
    aFunction(dicti = dict)

if __name__ == '__main__':
    main()

