def main():
    """this is main function."""
    # my solution

    arr = list(range(5))
    print()

    '''
        t = Tower(5)
        t.print()
        t.move_disc(0, 1)
        t.print()
    '''

    t = Tower(3)
    t.hanoi()

    t = Tower(3)
    t.hanoi_iter()

class Tower():
    def __init__(self, num):
        self.count = 0
        self.num = num
        #self.cols = [[1, 2, 3, 4], [2, 3 , 4], [3, 4]]
        self.cols =[ list(range(num, 0, -1)), [], [] ]

    def print(self):
        print("###################")
        height = max(len(c) for c in self.cols)
        for r in range(height, 0, -1):
            for i in range(3):
                if len(self.cols[i]) >= r:
                    print(self.cols[i][r-1], end="")
                print("\t", end="")
            print("")
        print("-------------------")
        print("fst\tsnd\ttrd")
        print("move count: ", self.count)

    def move_disc(self, c1, c2):
        self.cols[c2].append(self.cols[c1].pop())
        self.count += 1
        self.print()

    def hanoi(self, f=0, to=1, n=None):
        n = n if n else self.num
        if n == 1:
            self.move_disc(f, to)
            return
        self.hanoi(f, 3-f-to, n-1)
        self.move_disc(f, to)
        self.hanoi(3-f-to, to, n-1)

    def hanoi_iter(self, frm=0, to=1, n=None):
        n = n if n else self.num
        aux = 2
        total = 2 ** n - 1
        aux, to = (to, aux) if n % 2 == 0 else (aux, to)
        i = 1
        while i <= total:
            if i%3 == 1:
                self.move_disc(frm, to)
            elif i%3 ==2:
                self.move_disc()
            else:
                self.move_disc()
            i+=1


if __name__ == '__main__':
    main()
