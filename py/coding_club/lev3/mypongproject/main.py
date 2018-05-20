import table, ball
import tkinter as tk

def main():
    """this is main function."""
    window = tk.Tk()
    window.title("mypong project")
    my_table = table.Table(window, net_colour="green", vertical_net= True)

    print("hello world!")

    window.mainloop()

if __name__ == '__main__':
    main()
