#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int x = 0;
    char y = 0;
    string z;
    cin >> x;
    std::cout << std::setw(20) << std::left << "<< x >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &x << std::setw(25) << " and set(get) value of " << x << "\n";
    cin >> y;
    std::cout << std::setw(20) << std::left << "<< y >> " << std::setw(20) << " goes to memory: " << std::setw(20) << static_cast<void*>(&y) << std::setw(25) << " and set(get) value of " << y << "\n";
    cin >> z;
    std::cout << std::setw(20) << std::left << "<< z >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &z << std::setw(25) << " and set(get) value of " << z << "\n";
    printf("%d\n", x);

    return 0;
}
