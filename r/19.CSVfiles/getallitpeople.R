# Create a data frame.

data<-read.csv("input.csv")

retval<-subset(data,dept=="IT")

print(retval)
