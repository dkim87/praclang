#include <iostream>
using namespace std;
constexpr size_t SIZE = 1024 * 1024 * 10;
char hello[SIZE]; // this works
// global variables are stored in 'code' area

int main(){

    char hello[SIZE]; // this leads to segmentation fault
    // local variables are storde in 'data' area, and stack has a limit of 1MB - 4MB depending on OS.
    printf("hello %d\n", hello[100]);

    return 0;
}
