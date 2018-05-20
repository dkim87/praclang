#include <iostream>
using namespace std;

int main(){
    constexpr int *p = NULL;
    static_assert(p == nullptr, "not same");

    if(p == nullptr ){
        printf("helol world!\n");
    }

    return 0;
}
