import csv

with open('test.csv') as csvfile:
    myread = csv.reader(csvfile, delimiter=',')
    
    quizzes=[]
    answers=[]
    for row in myread:
        print(row)
        

        
        quiz=row[0]
        answer=row[1]

        quizzes.append(quiz)
        answers.append(answer)

    userQuestion = input('ask a question')
    Qindex = quizzes.index(userQuestion)
    print(answers[Qindex])

## Make a dictionary

mydict = {}

for i in range(len(quizzes)):
    mydict[quizzes[i]]=answers[i]

print (mydict)





        
