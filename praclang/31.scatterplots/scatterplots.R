input<-mtcars[,c('wt','mpg')]
print(head(input))

png(file="scatterplot.png")

plot(x=input$wt,y=input$mpg,
     xlab="Weight",
     ylab="Milage",
     xlim=c(2.5,5),
     ylim=c(15,30),
     main="Weight vs Milage"
     )

dev.off()
