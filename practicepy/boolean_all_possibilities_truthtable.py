
count=0

while(count<32):
    digit=[0,0,0,0]
    if count%2==0:
        digit[3]=0
    else:
        digit[3]=1

    if count%4<2:
        digit[2]=0
    else:
        digit[2]=1

    
    if count%8<4:
        digit[1]=0
    else:
        digit[1]=1

    if count%16<8:
        digit[0]=0
    else:
        digit[1]=1

    print(digit)

    count+=1

print("Program ended --------------------")
    




    
