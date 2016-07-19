# Create a list containing a vector, a matrix and a list.
list_data <- list(c("Jan","Feb","Mar"), matrix(c(3,9,5,1,-2,8), nrow=2), list("green",12.3))
# Give names to the elements in the list.
print("created")
print(list_data)
names(list_data) <- c("1st Quarter", "A_Matrix", "A Inner list")
print("named")
print(list_data)

# Add element at the end of the list. 
list_data[4] <- "New element" 
print("new element added")
print(list_data[4])
print(list_data)

# Remove the last element.
list_data[4] <- NULL
# Print the 4th Element.
print("manipulated into null")
print(list_data[4])
print(list_data)
# Update the 3rd Element.
list_data[3] <- "updated element"
print("3rd updated")
print(list_data[3])

print("finally printed")
print(list_data)

print("doing what I want")
list_data[2] <- NULL
print(list_data)

print("experiment: is the 3rd now 2nd?")
print(list_data[2])
