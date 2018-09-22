#include <iostream>
using namespace std;
#include <cstring>

void print_string(string& a){
    auto *p = (unsigned char *)&a;
    for(size_t i = 0; i < sizeof a; ++i){
        printf("%p: %x", p, *p);
        if(*p >= 32 && *p < 127){
            printf("\t:%c", *p);
        }
        printf("\n");
        p++;
    }
}

int main(){
    string a = "hello world!";
    cout << a << endl;
    std::cout << sizeof a << std::endl;
    print_string(a);

    a = "wow!";
    cout << a << endl;
    std::cout << sizeof a << std::endl;
    print_string(a);

    a = "helloworldarstarstarstarst";
    cout << a << endl;
    std::cout << sizeof a << std::endl;
    print_string(a);

    printf("experiment\n");

    char *p = *(char **)&a;
    printf("%p\n", p);
    printf("%s\n", p);
    printf("%x\n", strlen(p));

    return 0;
}
