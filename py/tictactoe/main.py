import os
emptychar = '.'

def index(n, m):
    return 3*n + m

def check_winning_condition(board, char = 'o'):
    global check_column, check_row
    win = False
    win = win or check_three(board, char, check_column)
    win = win or check_three(board, char, check_row)
    win = win or check_diagonal(board, char)
    return win

def check_three(board, char, func): # func can be either check_column or check_row
    win = False
    for i in range(3):
        win = win or func(board, i, char)
    return win

def check_column(board, no, char):
    for i in range(3):
        if board[index(i, no)] != char:
            return False
    return True

def check_row(board, no, char):
    for i in range(3):
        if board[index(no, i)] != char:
            return False
    return True

def check_diagonal(board, char):
    return check_backslash(board, char) or check_slash(board, char)

def check_backslash(board, char):
    for i in range(3):
        if board[index(i, i)] != char:
            return False
    return True

def check_slash(board, char):
    for i in range(3):
        if board[index(i, 2-i)] != char:
            return False
    return True

def display_board(board):
    if os.name == 'posix':
        os.system('clear')
    elif os.name == 'nt':
        os.system('cls')

    print("-----")
    for i in range(0, 9, 3):
        print(board[i], end = '|')
        i += 1
        print(board[i], end = '|')
        i += 1
        print(board[i], end = '|')
        i += 1
        print("")
    print("-----")

def board_change_element(board, num, char='o'):
    board[num] = char

def board_initialize(board, char='.'):
    for i in range(len(board)):
        board[i] = char

# not used. Use 'sanitized_turn' function instead, which is an improvement over this.
def turn(board, char = 'o'):
    num = int(input("player " + char + "?: "))
    board_change_element(board, num-1, char)

# ask for input from players.
def sanitized_turn(board, char = 'o'):
    global emptychar

    while True:
        num = input("player " + char + "?: ")

        try:
            num = int(num)

        except ValueError:
            print("must be integer. please try again.")
            continue

        try:
            if board[num-1] == emptychar:
                break;
            else:
                print("already written. Choose other place.")

        except IndexError:
            print("must be bigger than zero and smaller than 10. please try again.")
            continue

    board_change_element(board, num-1, char)

def game_loop():

    global emptychar
    board = [emptychar for x in range(9)]
    display_board(board)

    o_turn = True
    winner = ''
    for i in range(9):
        if o_turn:
            char = 'o'
            o_turn = False
        else:
            char = 'x'
            o_turn = True

        sanitized_turn(board, char)
        display_board(board)
        if check_winning_condition(board, char):
            winner = char
            break

    if winner != '':
        print("winner is "+char+"!")
    else:
        print("tie!")

def main():
    """this is main function."""

    play_again = 'y'
    while play_again == 'y':
        game_loop()

        while True:
            response = input("wanna play again? (y/n): ")
            if response == 'y' or response == 'n':
                play_again = response
                break
            else:
                print("please type y or n.")

    print("Game ended. Thanks for playing!")

if __name__ == '__main__':
    main()
