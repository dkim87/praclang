int printf(const char *, ...);

int main() {
    int x = 1;
    while(x << 1) {
        printf("%-30s %x\n", "<<x>> has value of", x);
        printf("%-30s %x\n", "<<~x>> has value of", ~x);
        x <<= 1;
    }
    //return !printf("%d??/n", ~x);
    return !printf("%d\n", ~x);
}
