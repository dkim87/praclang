def videoPart(part, total):

    def getSeconds(time):
        h = int(time[0:2])
        m = int(time[3:5])
        s = int(time[6:8])
        return s * 60 * 60 + m * 60 + h

    def gcd(a, b):
        while a > 0:
            tmp = a
            a = b % a
            b = tmp
        return b

    print(gcd(15,12))


    partTime = getSeconds(part)
    totalTime = getSeconds(total)
    divisor = gcd(partTime, totalTime)
    return [partTime / divisor, totalTime / divisor]

def main():
    """this is main function."""
    videoPart("02:20:00", "07:00:00")
    

if __name__ == '__main__':
    main()
