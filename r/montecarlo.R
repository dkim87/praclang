
# samosa project - montecarlo simulation
samosaSimul <- function(n){
  prob_buy3 <- .50 # this can be variable
  prob_buy1 <- 1-prob_buy3
  mean_customer = 80 
  customer_volatility <- .2
  n_customer1 <- mean_customer*prob_buy1
  n_customer3 <- mean_customer*prob_buy4
  smpl_customer1 <- round(rnorm(10000,n_customer1,n_customer1*customer_volatility),0)
  smpl_customer3 <- round(rnorm(10000,n_customer3,n_customer3*customer_volatility),0)
  demand3 <- smpl_customer3*3
  # pushap 514 737 4527
  # 50 samosas $20
  # $15 for delivery (free for 100 samosas)
  supply <- n # alter this. This is the independent variable.
  demand3[which(demand3>supply)] <- supply
  demand1 <- supply - demand3
  demand1[which(demand1<0)] <- 0
  demand1[which(demand1>smpl_customer1)] <- smpl_customer1[which(demand1>smpl_customer1)]
  demand_total <- demand1 + demand3
  rev_3 <- demand3*2/3
  rev_1 <- demand1
  rev_total <- rev_1 + rev_3
  cost <- supply * 20/50
  if (supply<100){
    cost <- cost + 15
  }
  profit <- rev_total - cost
  return(profit) 
}

print("results:")
input <- seq(90,210,1)
profits <- lapply(input,samosaSimul)
sds <- lapply(profits,sd)
means <- lapply(profits,mean)
means <- unlist(means)
sds <- unlist(sds)
require(ggplot2)
require(plotly)
myplot<-qplot(input,means)
qplot(input,means)
ggplotly(myplot)

Samosa_Supply <- sort(rep(input,1000))
Profit <- unlist(profits)
myplot<-qplot(Samosa_Supply,Profit)
myplot