from tkinter import *

# Main

my_window = Tk()
my_window.title("My Flashcard Application")

## declare variables

quizzes=[]
answers=[]

# Get quiz 

my_index=-1
print("my_index:",my_index)

def click_quiz ():
    global my_index
    if(my_index==len(quizzes)):
        pass
    else:
        my_index+=1
        my_quizoutput.delete(0.0,END)
        my_ansoutput.delete(0.0,END)
        aquiz=quizzes[ my_index ]
        my_quizoutput.insert(END,aquiz)

# Get ans

def click_ans():
    my_ansoutput.delete(0.0,END)
    definition=answers[ my_index ]
    my_ansoutput.insert(END,definition)
    


# Button: Quiz

Button(my_window, text="get quiz", width=5, command=click_quiz).grid(row=0, column=0, sticky=E)

# Button: Answer

Button (my_window, text="get ans", width=5, command=click_ans).grid(row=0, column=1, sticky=W)
### column = 0 suspicious

# quiz output Textbox

my_quizoutput=Text(my_window, width=75, height = 2, wrap=WORD, background="light yellow")
my_quizoutput.grid(row=1,column=0, columnspan=2)
### sticky=E excluded

# Label

Label(my_window, text="Definition:").grid(row=2,column=0, sticky=W)

# ans output Textbox

my_ansoutput=Text(my_window, width=75, height=6, wrap=WORD, background="light yellow")
my_ansoutput.grid(row=4,column=0,columnspan=2, sticky=W)
### columnspan=2 not included

# read myFlashcards

import csv

with open("myflashcards.csv") as mycsv:
    myreader = csv.reader(mycsv)

    for row in myreader:
        quizzes.append(row[0])
        answers.append(row[1])

    print(quizzes)
    print(answers)
        

# mainloop

my_window.mainloop()

