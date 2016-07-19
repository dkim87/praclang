# Accessing vector elements using position.

t<-c("Sun","Mon","Tue","Wed","Thurs","Fri","Sat")
u<-t[c(2,3,6)]
print(u)

a<-c(t[2],t[3],t[6])
a

# Accessing vector elements using logical indexing.

v<-t[c(TRUE,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE)]
print(v)

# Accessing vector elements using negative indexing.

x<-t[c(-2,-5)]
print(x)

# Accessing vector elements using 0/1 indexing.

y<-t[c(0,0,6,3,3,0,1)]
print(y)

z<-t[c(-2,6)]
print(z)


