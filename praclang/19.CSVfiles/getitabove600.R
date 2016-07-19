data<-read.csv("input.csv")

info<-subset(data,salary>600 & dept=="IT")

info
