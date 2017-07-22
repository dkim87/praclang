from tkinter import *
from decimal import *

'''
top row frame
------------------------------
num-pad frame | operator frame
------------------------------
'''

# main
window = Tk()
window.title="my Calculator application"

# Display UI
## Entry Frame
toprow_frame = Frame(window)
toprow_frame.grid(row=0,column=0, columnspan=2, sticky=W)

## Entry display
display = Entry(toprow_frame, width=45, bg="yellow")
#display = Entry(toprow_frame, bg="yellow")
display.grid()

## Button Frame
### Numpad Button Frame
numpad_frame = Frame(window)
numpad_frame.grid(row=1,column=0, sticky=W)
### Variable that will be used for buttons
numpad_tuple = (
        '7','8','9',
        '4','5','6',
        '1','2','3',
        '0','.','='
        )

# Define click()
'''
def click1():
    display.insert(END, "1")
Button(window, text="1", width=5, command=click1).grid(row=1, column=0)
def click2():
    display.insert(END, "2")
Button(window, text="2", width=5, command=click2).grid(row=2, column=0)
def click3():
    display.insert(END, "3")
Button(window, text="3", width=5, command=click3).grid(row=3, column=0)
'''
# these occupy to many lines. How to simplify these?

#!!! Crucial!!!
def click(key):
    if key == '=':
        try:
            result = str(eval(display.get()))
            '''
            print(type(END)) # str
            print(END) # end
            '''
            display.insert(END, " = " + result)
        except:
            display.insert(END,"---> error! unable to evaluate (click function) ")
    elif key == 'C':
        display.delete(0,END)
    else:
        display.insert(END, key)

### Buttons for numpad
### index numbers for creating buttons
r = 0 # row counter
c = 0 # column counter
for numtext in numpad_tuple: # from 9, 8, ..., 0, ., =
    # Define local mycmd().. wow
    def mycmd(deflt=numtext): # default is numtext.. wow
        click(deflt)
    Button(numpad_frame, text=numtext, command=mycmd).grid(row=r,column=c) # button is a higher-order function. It accepts function as an argument.
    # no nested for loop required.. wow
    c=c+1
    if c>2:
        r+=1
        c=0

## operator frame
operator_frame=Frame(window)
operator_frame.grid(row=1,column=1,sticky=W)

### Variables that will be used for operator buttons
operator_tuple = (
        '+','-','*','/','(',')','C'
        )

### Buttons for operators
c=0
r=0
for optext in operator_tuple:
    def mycmd(deflt=optext):
        click(deflt)
    Button(operator_frame, text=optext, width=3,command=mycmd).grid(row=r,column=c)
    c+=1
    if c>1:
        c=0
        r+=1

# Key shortcuts, binds --> failed
#for num in range(0,10,1):
#    def mycmd(deflt=str(num)):
#        click(deflt)
#    window.bind('<'+str(num)+'>', mycmd)

# main loop
window.mainloop()
