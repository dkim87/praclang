def main():
    for i in range(5):
        for j in range(5):
            print("i", i, "j", j)

    print("recursive version:")
    nestedfor(0,5,0,5)

    print("simple recursive version:")
    nestedfor_simple(0,5,0,5)

def nestedfor(i,imax, j,jmax):
    if(i>=imax or j>=jmax):
        return
    print("i", i, "j", j)
    if(j >= jmax-1):
        nestedfor(i+1,imax,0,jmax)
        return
    nestedfor(i, imax, j+1, jmax)

def nestedfor_simple(i,imax, j,jmax):
    if (i>=imax or j>=jmax):
        return
    print("i", i, "j", j)
    return nestedfor(i+1,imax,0,jmax) if (j >= jmax-1) else nestedfor(i, imax, j+1, jmax)


main()
