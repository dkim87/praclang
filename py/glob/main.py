import os, glob

def print_dir():
    x = glob.glob('/Users/dqmacair/mymanual/*')

    for fn in x:
        print(fn)

    from pathlib import Path
    print(Path.home())

    prdir = str(Path.home()) + "/praclang"
    print(prdir)


    print(os.path.expanduser("~"))

def print_fp():
    with open(os.path.expanduser("~")+"/main.py") as fp:

        print("fp = ", fp)
        x = fp.read()
        print(x)
        fp.seek(0)

        x = fp.readline()
        print(x)
        fp.seek(0)

        print(fp)
        x = fp.readlines()
        print(x)
        fp.seek(0)

        for l in fp.readlines():
            print(l)


def main():
    """this is main function."""
    #print_dir()
    print_fp()
if __name__ == '__main__':
    main()
