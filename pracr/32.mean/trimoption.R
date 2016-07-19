# Create a vector.
x <- c(12,7,3,4.2,18,2,54,-21,8,-5)
# Find Mean.
result.mean<- mean(x)
result.mean
result.mean <-  mean(x,trim=0.3)
print(result.mean)

result.mean <-  mean(x,trim=0.2)
print(result.mean)
result.mean <-  mean(x,trim=0.24)
print(result.mean)
result.mean <-  mean(x,trim=0.25)
print(result.mean)
result.mean <-  mean(x,trim=0.26)
print(result.mean)

result.mean <-  mean(x,trim=0.35)
print(result.mean)
result.mean <-  mean(x,trim=0.34)
print(result.mean)
