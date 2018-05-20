import pickle
grades = {'hello': 55, 'Bob': 44}
serial_grades = pickle.dumps(grades)
received_grades = pickle.loads( serial_grades )
print(grades)
print(serial_grades)
print(grades)

class hey:
    def __init__(self):
        self.x = 5
        self.y = 6
        self.next = None

    def pri(self):
        print(self.x, self.y, self.next)

def main():
    """this is main function."""
    h1 = hey()
    print(h1.x)

    h2 = hey()
    print(h2.y)

    h1.next = h2;
    print(h2)
    print(h1.next)

    h1.pri()
    h1.next.pri()
    h2.pri()

    serial_h1 = pickle.dumps(h1)
    serial_h2 = pickle.dumps(h2)
    print(serial_h1)
    print(serial_h2)

    recoh1 = pickle.loads(serial_h1)
    recoh2 = pickle.loads(serial_h2)

    print(recoh1)
    recoh1.pri()
    h1.next.pri()
    print(recoh1.next)
    print(recoh2)
    recoh2.pri()

    print(recoh1.next is recoh2)
    print(recoh1.next == recoh2)

    f = open('tmp.pkl', 'wb')
    p = pickle.Pickler(f)
    p.dump(h1)
    p.dump(h2)
    f.close()

    f = open('tmp.pkl', 'rb')
    up = pickle.Unpickler(f)
    hh1 = up.load()
    hh2 = up.load()

    print(hh1)
    print(hh1.next)
    hh1.next.pri()

    print( hh1.next is hh2 )

    f = open('tmp.pkl', 'wb')
    p = pickle.Pickler(f)
    p.dump(h2)
    f.close()



if __name__ == '__main__':
    main()



