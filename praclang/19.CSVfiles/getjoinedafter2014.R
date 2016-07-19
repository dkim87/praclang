data<-read.csv("input.csv")

retval<-subset(data, as.Date(start_date)>as.Date("2014-01-01"))

# Write filtered data into a new file.

write.csv(retval,"output.csv")
newdata<-read.csv("output.csv")
newdata
