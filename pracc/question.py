
menu = [1,2,3,4] 

while True:
    print ("1.")
    print ("2.")
    print ("3.")
    print ("4.")
    print ("select")
    choice = int(input())
    while choice not in menu: 
	choice = int(input())
    a = int(input("first"))
    b = int(input("second"))
    if choice ==1 :
        answer = a+b
        print(a, "+", b, "equals", answer)
    elif choice ==2 :
        answer = a-b
        print (a, "-", b,"equals" , answer)
    elif choice ==3 :
        answer = a*b
        print (a, "*", b,"equals" , answer)
    elif choice ==4 :
        answer = a/b
        print (a, "/", b, "equals", answer)
    select =(str(raw_input("end? Y/N")))
    while select.capitalize() != "Y" and select.capitalize() != "N":
	    select = raw_input ("end? Y/N ")
    if select.capitalize()== "Y":
            print ("Good job")
            break


 

