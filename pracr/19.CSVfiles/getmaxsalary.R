#Create a data frame.
data<-read.csv("input.csv")

# Get the max salary from data frame.

sal<- max(data$salary)
print(sal)


