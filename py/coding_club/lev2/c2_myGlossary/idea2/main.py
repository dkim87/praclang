from tkinter import *


# Key Insertion Function:
def click():
    entered_text = entry.get()
    output.delete(0.0,END)
    try:
        definition=my_glossary[entered_text]
    except KeyError:
        print("keyerror")
        definition="<KEYERROR> The definition does not exist."
    except:
        print("bare error")
    else: # executes if no exception
        print("noerror")
    finally: # executes always
        print("finally")
        output.insert(END,definition)

# Main:
window = Tk()
window.title("My Coding Club Glossary")

'''
Button (Get Question) | Button (Next)
------
Entry
------
Button (Get Answer)
------
 << one empty line due to \n in label
label "Answer:"
------
output
'''

Button(window, text="GET Question", command = click).grid(row = 0, column = 0, sticky = W)
Button(window, text="NEXT", command = click).grid(row = 0, column = 1, sticky = E)
entry = Entry(window)
entry.grid(row = 1, column = 0, sticky = W+E)
Button(window,text="GET ANSWER", command=click).grid(row=2, column=0, sticky=W)
Label(window, text="\nAnswer:").grid(row=3, column=0, sticky=W)
output = Text(window, width=75, height=6, wrap=WORD, background="light green")
output.grid(row=4, column=0, columnspan=2, sticky=W+E)

# Dictionary
my_glossary = {
        'algorithm':'computer step explanation',
        'bug':'program function failure, or a code resulting in malfunction',
        'twobyte':'Numbers that are represented by twobyte'
        }

#### Main Repetition
window.mainloop()

