

for i in range(2,10):
    if (i>2):
        print ("\nWow, take a break time.")
    if (i==2): 
        print ("Hey let us start the 2nd table.\n")
    elif (i==3):
        print ("Now let us start the 3rd table.\n")
    else:
        print ("Now let us start the", i,"th table.\n")

    for j in range(1, 10):
        print (i, "*", j, "=", i*j)
