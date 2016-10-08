#include<stdio.h>

main()
{
int i=5;
printf("%d", ++i);
printf("%d", i);
printf("%d", i++);

i=5;
printf("%d %d %d",i++,i,++i);

printf("  %d\n",i);
}

