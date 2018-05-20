from main import *

def unit_test():
    """unit test"""

    board = [0 for x in range(9)]
    display_board(board)

    board_initialize(board)
    display_board(board)

    board_change_element(board, 5)
    display_board(board)

    board_initialize(board)
    display_board(board)

    # turn(board, 'o')
    # display_board(board)

    # turn(board, 'x')
    # display_board(board)

    board_change_element(board, 2, 'o')
    board_change_element(board, 1, 'x')
    display_board(board)


    bool = check_column(board, 0, '.')
    print(bool)

    bool = check_column(board, 1, 'o')
    print(bool)

    bool = check_row(board, 0, '.')
    print(bool)

    bool = check_row(board, 1, '.')
    print(bool)

    bool = check_slash(board, '.')
    print(bool)

    bool = check_backslash(board, '.')
    print(bool)

    bool = check_winning_condition(board, char='o')
    print(bool)
    bool = check_winning_condition(board, char='x')
    print(bool)
    bool = check_winning_condition(board, char='.')
    print(bool)

    sanitized_turn(board, 'o')
    display_board(board)
    sanitized_turn(board, 'x')
    display_board(board)

    print("unit test ended.")

unit_test()
