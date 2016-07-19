x<-seq(-10,10,by=.1)

y<-dnorm(x,mean=2.5,sd=0.5)

png(file="dnorm.png")

plot(x,y)

dev.off
