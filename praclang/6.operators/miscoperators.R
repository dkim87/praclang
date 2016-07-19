v<-2:8
print(v)

v1<-8
v2<-12
p<-1:10
print(v1 %in% p)
print(v2 %in% p)

M=matrix(c(2,6,5,1,10,4),nrow=2,ncol=3,byrow=TRUE)

print(M)
print(t(M))

lt=M%*% t(M)

print(lt)


