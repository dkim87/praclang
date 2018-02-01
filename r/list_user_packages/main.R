# how to use this?
# > source("~/praclang/r/list_user_packages/main.R")
# > list_user_packages()

list_user_packages <- function(){
    ip <- as.data.frame(installed.packages()[,c(1,3,4)])
    rownames(ip) <- NULL
    ip <- ip[is.na(ip$Priority), 1:2, drop=FALSE]
    print(ip, row.names=FALSE)
}

list_user_packages()
