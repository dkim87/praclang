x <- c(151, 174, 138, 186, 128, 136, 179, 163, 152, 131)
# The resposne vector.
y <- c(63, 81, 56, 91, 47, 57, 76, 72, 62, 48)
# Apply the lm() function.
relation <- lm(y~x)
# Find weight of a person with height 170.

a <- data.frame(x=170)
result <-  predict(relation,a)
print(result)

b <- data.frame(x=c(170,175,180))
result<- predict(relation,b)
result
