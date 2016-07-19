#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int val;
    char str[20];
    char str2[20];
    scanf("%s",str);
    scanf("%s",str2);
    val = atoi(str);
    printf("%d\n\n",val);
    val = atoi(str2);
    printf("%d\n\n",val);

    return 0;
}

