#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int x;
    string y;
    string z;
    std::cout << "type int" << "\n";
    std::cin >> x;
    std::cout << "type string" << "\n";
    std::cin >> y;
    std::cout << "type string2" << "\n";
    std::cin >> z;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";

    std::cout << sizeof(y) << "\n";

    std::cout << "end" << "\n";

    return 0;
}
