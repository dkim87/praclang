# myGlossary_Start.py

from tkinter import *

# key functions:

def click():
    entered_text = entry.get()
    output.delete(0.0, END)
    definition = my_glossary[entered_text]
    output.insert(END, definition)
    try:
        definition=my_glossary[entered_text]
    except:
        definition="단어의 정의를 찾을 수 없습니다."
    output.insert(END, definition)

# Main:

window = Tk()
window.title("My Coding Club Glossary")

# Label create

Label(window, text="Insert the definition of the word and press enter key: ").grid(row=0,column=0, sticky=W)

# Text Entry widget


entry = Entry(window, width=20, bg="light green").grid(row=1,column=0,sticky=W)



# Submit button 
Button(window, text="submit", width=5, command=click).grid(row=2,column=0,sticky=W)

# Another label
Label(window, text="\n Definition:").grid(row=3,column=0, sticky=W)

# Text box creation
output=Text(window, width=75, height=6, wrap=WORD, background="light green")
output.grid(row=4, column=0, columnspan=2, sticky=W)

# Dictionary

##### Repeat main

window.mainloop()

