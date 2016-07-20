import csv

with open("test.csv") as mycsv:
    myreader=csv.reader(mycsv)

    mydict={}
    for row in myreader:
        mydict[row[0]]=row[1]

print(mydict)

