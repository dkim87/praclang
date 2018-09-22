#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void bar(T t){
}

template<class ...Ts>
void foo(Ts... args){
}

int main(){
    foo(1);
    foo(1, 2);

    return 0;
}
