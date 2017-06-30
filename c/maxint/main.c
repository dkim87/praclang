int printf(const char*, ...);

// hint from mango
int main(){
    int x = 1;
    x <<= 31;
    printf("%-30s %d\n", "<<x>> has value of", x);
    printf("%-30s %d\n", "<<~x>> has value of", ~x);

    x = 1;
    while(x<<1!=0){
        x<<=1;
    }
    return !printf("%d\n", ~x);

}
