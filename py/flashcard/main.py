import csv

def main():
    with open('voca.csv') as csvfile:
        freader = csv.DictReader(csvfile)
        for row in freader:
            print("word: ", row["word"], end="")
            input("")
            print(row["meaning"])
            x = input("y or n?")
            print(x)


main()
