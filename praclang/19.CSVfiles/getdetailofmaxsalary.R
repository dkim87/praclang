 #Create a data frame.
data <- read.csv("input.csv")
# Get the max salary from data frame.
sal <- max(data$salary)
# Get the person detail having max salary. 
retval <- subset(data, salary == max(salary)) 
print(retval)

