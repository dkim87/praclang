#include <iostream>
#include<iomanip>
#include<memory>
using namespace std;

int main(){
    int a=4;
    std::cout << std::setw(20) << std::left << "<< a >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &a << std::setw(25) << " and set(get) value of " << a << "\n";
    //std::unique_ptr<int> ap(new int(6));
    auto ap = make_unique<int>(4);
    std::cout << std::setw(20) << std::left << "<< *ap >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &*ap << std::setw(25) << " and set(get) value of " << *ap << "\n";



    return 0;
}
