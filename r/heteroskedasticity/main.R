# https://www.r-bloggers.com/how-to-detect-heteroscedasticity-and-rectify-it/

lmmod <- lm(dist ~ speed, data = cars) # initial model

par(mfrow = c(2, 2)) # init 4 charts in 1 panel
plot(lmmod)

