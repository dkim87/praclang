// https://stackoverflow.com/questions/31007963/how-to-write-my-following-c-code-using-setjmp-longjmp-in-python

#include <setjmp.h>
#include <stdio.h>
jmp_buf env;

void f1(void);
void f2(void);

int main(void)
{
  if (setjmp(env) == 0){
    printf("%p\n", env);
    printf("setjmp returned 0\n");
  }else{
    printf("Program terminates: longjmp called\n");
    return 0;
  }

  f1();
  printf("Pregram terminates normally\n");
  return 0;
}

void f1(void)
{
  printf("f1 begins\n");
  f2();
  printf("f1 returns\n");
}

void f2(void)
{
  printf("f2 begins\n");
  longjmp(env, 1);
  printf("f2 returns\n");
}
