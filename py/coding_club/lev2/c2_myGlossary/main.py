# myGlossary_Start.py

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
label
------
entry
------
button
------
 << one empty line due to \n in label
label "\nDefinition"
------
output
'''

# Create Label:
Label(window, text="Enter a glossary and press the enter button:").grid(row=0, column=0, sticky=W)

# Create Text Enter
entry = Entry(window,width=20,bg="light green")
entry.grid(row=1,column=0,sticky=W+E) # stretched
# Add Submit Button:
Button(window,text="submit", width=5, command=click).grid(row=2, column=0, sticky=W)

# Create another label:
Label(window, text="\nDefinition:").grid(row=3, column=0, sticky=W)

# Create a textbox
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

