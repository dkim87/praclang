#include<stdio.h>

int check_vowel(char);

int main(){

    char a;
    scanf("%c",&a);
    
    a= check_vowel(a);
    
    printf("%c",a);

    return 0;
}

int check_vowel(char a){
    if (a>='A' && a<= 'Z')
	a = a+'a'-'A';
    return a;
}
