slow_func <- function(){
  x = 0;
  for(i in 1:10000){
    if (i %% 1000 == 0){
      x = x + i;
    }
  }
}
require(compiler)
#enableJIT(3)

slow_func_compiled <- cmpfun(slow_func)
slow_func_compiled()

fo <- function() for (i in 1:1000) slow_func()
fo_c <- function() for (i in 1:1000) slow_func_compiled()

system.time(fo())
system.time(fo_c())
