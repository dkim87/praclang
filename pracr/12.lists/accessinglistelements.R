# Create a list containing a vector, a matrix and a list.

list_data <- list(c("Jan","Feb","Mar"), matrix(c(3,9,5,1,-2,8), nrow=2), list("green",12.3))

# Give names to the elements in the list.
names(list_data) <- c("1st Quarter", "A_Matrix", "A Inner list")
# Access the first element of the list
print(list_data)
print(list_data[1])
# Access the thrid element. As it is also a list, all its elements will be printed.
print(list_data[2])
print(list_data[3])
# Access the list element using the name of the element
print(list_data$A_Matrix)
