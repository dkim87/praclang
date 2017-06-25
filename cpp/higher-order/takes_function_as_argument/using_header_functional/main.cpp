#include <iostream>
#include<iomanip>
#include <functional>
using namespace std;

int myapply(function<int(int)> fx, int value){
    return fx(value);
}

int increase(int value){
    return value+1;
}

int main(){

    std::cout << myapply(increase, 5) << "\n";

    std::cout << "Also works fine." << "\n";

    return 0;
}
