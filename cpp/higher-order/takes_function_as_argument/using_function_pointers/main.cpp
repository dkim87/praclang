#include <iostream>
using namespace std;

// higher order function 'apply'
// This takes function ptr as its argument.

int increase(int value){
    return value+1;
}

int myapply(int (*fp)(int), int b){
    return (*fp)(b);
}

int main(){
    int myint = 5;
    std::cout << myapply(&increase, myint) << "\n";
    std::cout << "Works perfectly!" << "\n";

    return 0;
}
