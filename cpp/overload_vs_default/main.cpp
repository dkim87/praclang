#include <iostream>
using namespace std;

void hello(int x, int y){
    printf("hello! %d %d\n", x, y);
}
void hello(int x, int y, int z = 5){
    printf("hello! %d %d %d\n", x, y, z);
}
int main(){
    hello(1, 2); // right, this is ambiguous

    return 0;
}
