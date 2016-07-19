y<-rnorm(50)
y
typeof(y)
class(y)
mode(y)
png(file="rnorm.png")

hist(y, main="Normal Distribution")

dev.off()
