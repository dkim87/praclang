#include <iostream>
#include <limits>

using namespace std;

int main(){
    int value = 777;
    std::cout << value << std::endl;
    std::cout << "Hello?" << std::endl;

    std::cout << "Max int value: " << INT_MAX << std::endl;
    std::cout << "Min int value: " << INT_MIN << std::endl;

    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of int: " << sizeof(value) << std::endl;

    return 0;
}
