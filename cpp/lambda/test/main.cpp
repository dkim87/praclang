#include <iostream>
using namespace std;

int main(){
    auto glambda=[](auto a, auto b){ return a + b; };
    int a = glambda(1,2);
    std::cout << a << "\n";

}
