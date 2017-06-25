def pyramid_oneline(n, m, enter=True):
    for i in range(n):
        print(" ", end='')
    for i in range(m):
        print(i, end='')
        i+=1
    for i in range(m):
        print(m-i, end='')
        i+=1
    print("0", end='')
    for i in range(n):
        print(" ", end='')
    if(enter):
        print("")

def pyramid(stairs):
    for i in range(stairs+1):
        pyramid_oneline(i, stairs-i)


def print_blank(rep):
    for i in range(rep):
        print(" ", end="")

def pyramid_shift(stairs, shift):
    for i in range(stairs+1):
        print_blank(shift)
        pyramid_oneline(i, stairs-i)

def beautiful_pyramids(pynum):
    for i in range(pynum):
        pyramid_shift(i, 10-i)

def amazing_pyramids(pynum):
    for i in range(pynum):
        pyramid_shift(pynum-i, i)

def pyramid_reverse(stairs):
    for i in range(stairs+1):
        pyramid_oneline(stairs-i, i)

def pyramid_reverse_shift(stairs, shift):
    for i in range(stairs+1):
        print_blank(shift)
        pyramid_oneline(stairs-i, i)

def beautiful_pyramids_reverse(pynum):
    for i in range(pynum):
        pyramid_reverse_shift(pynum-i, i)

def blank_betw_both(n):
    for i in range(n):
        print(" ", end="")

def pyramids_both(stairs, gap):
    for i in range(stairs+1):
        pyramid_oneline(stairs-i, i, False)
        blank_betw_both(gap)
        pyramid_oneline(i, stairs-i)

def pyramids_both_shift(stairs, gap, shift):
    for i in range(stairs+1):
        print_blank(shift)
        pyramid_oneline(stairs-i, i, False)
        blank_betw_both(gap)
        pyramid_oneline(i, stairs-i)

def beautiful_pyramids_both(pynum, gap):
    for i in range(pynum):
        pyramids_both_shift(pynum-i, gap+2*i, i)

def pyramids_triple(stairs, gap, shift=0):
    for i in range(stairs+1):
        print_blank(shift)
        pyramid_oneline(stairs-i, i, False)
        blank_betw_both(gap)
        pyramid_oneline(i, stairs-i, False)
        blank_betw_both(gap)
        pyramid_oneline(stairs-i, i)


def beautiful_pyramids_triple(pynum, gap):
    for i in range(pynum):
        pyramids_triple(pynum-i, gap+2*i, i)

def pyramids_multiple(stairs, gap, shift=0, mult = 1):
    for i in range(stairs+1):
        print_blank(shift)
        for j in range(mult):
            pyramid_oneline(stairs-i, i, False)
            blank_betw_both(gap)
            pyramid_oneline(i, stairs-i, False)
            blank_betw_both(gap)
        pyramid_oneline(stairs-i, i)

def beautiful_pyramids_multiple(pynum, gap, mult):
    for i in range(pynum):
        pyramids_multiple(pynum-i, gap+2*i, i, mult)

def amazing_pyramids_multiple(pynum, gap, mult):
    for i in range(pynum):
        pyramids_multiple(i, gap+2*pynum-2*i,pynum-i, mult)

def beautiful_and_amazing(repeat, width):
    for i in range(repeat):
        beautiful_pyramids_multiple(6,10, width)
        amazing_pyramids_multiple(6,10, width)

def main():
    pyramid(9)
    beautiful_pyramids(9)
    amazing_pyramids(9)
    beautiful_pyramids_reverse(9)
    pyramids_both(9, 10)
    beautiful_pyramids_both(9, 10)
    pyramids_triple(9, 10)
    beautiful_pyramids_triple(9,10)
    pyramids_multiple(9, 10)
    #beautiful_pyramids_multiple(5,10, 11)
    #amazing_pyramids_multiple(5,20, 11)
    beautiful_and_amazing(4, 28)
main()


