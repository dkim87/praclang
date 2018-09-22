def bishopAndPawn(bishop, pawn):
    def bishop_possible_moves(bishop):
        cand = []
        char = bishop[0]
        num = int(bishop[1])
        for i in "abcdefgh":
            for j in [1,2,3,4,5,6,7,8]:
                if i == char:
                    continue

                ord_diff = abs(ord(char) - ord(i))
                nums = (num + ord_diff, num-ord_diff)

                for k in nums:
                    if k in range(1, 9):
                        cand.append(i + str(k))
        return cand

    if pawn in bishop_possible_moves(bishop):
        return True
    return False



def main():
    """this is main function."""
    pass

if __name__ == '__main__':
    main()
