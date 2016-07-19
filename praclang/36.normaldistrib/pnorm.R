x<-seq(-10,10,by=.2)

y<-pnorm(x,mean=2.5,sd=2)

png(file="pnorm.png")

plot(x,y)
dev.off()
