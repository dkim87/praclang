# Create lists.
list1 <- list(1:5)
print(list1)
list2 <-list(10:14)
print(list2)
# Convert the lists to vectors.
v1 <- unlist(list1)
v2 <- unlist(list2)

print(v1)
print(v2)
# Now add the vectors
result <- v1+v2
print(result)

print("Doing what I should do: adding two lists")

list3<-list1+list2

print(list3)
