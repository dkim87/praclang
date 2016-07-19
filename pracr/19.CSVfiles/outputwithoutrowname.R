data<-read.csv("input.csv")

retval<-subset(data, as.Date(start_date)>as.Date("2014-01-01"))

write.csv(retval,"output.csv",row.names=FALSE)
newdata<-read.csv("output.csv")
newdata
