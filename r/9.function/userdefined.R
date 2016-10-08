# Create a function to print squares of numbers in sequence.

new.function<-function(a){
    for(i in 1:a){
        b<-i^2
        print(b)
    }
}

new.function(6)


myfunction1<-function(){
    for(i in 1:5){
        print(i^2)
    }
}

myfunction2<-function(a,b,c){
    result<-a*b+c
    print(result)
}

myfunction1()
myfunction2(5,3,11)
myfunction2(c=11,a=5,b=3)

