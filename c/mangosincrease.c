//Thanks to mangos in DC,
//He gave me a present which figures out the largest possible number in int type in C. 


int printf(const char *, ...);

int main() {
    int x = 1;
    while(x << 1) { 
        x <<= 1; 
    } 
    printf("hello!\n");
    return !printf("%d\n", ~x); 
}


//whatever
//
//


