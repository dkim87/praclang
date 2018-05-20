# https://stackoverflow.com/questions/3523174/raw-input-in-python-without-pressing-enter

import curses, time

def input_char(message):
    try:
        win = curses.initscr()
        win.addstr(0, 0, message)
        while True:
            ch = win.getch()
            if ch in range(32, 127):
                break
            time.sleep(0.05)

    except: raise

    finally:
        curses.endwin()
    print(type(ch)) # int
    print(ch) # 116
    print(chr(ch)) # t
    return chr(ch)

def main():
    """this is main function."""
    c = input_char("Press s or n to continue:")
    if c.upper() == 'S':
        print ("yes")
    else:
        print ("again")

if __name__ == '__main__':
    main()
