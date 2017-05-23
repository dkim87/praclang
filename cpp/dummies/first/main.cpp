#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberOfArgs, char* pszArgs[]){
    int celsius;
    std::cout << "Enter the temperature in Cesius" << std::endl;
    std::cin >> celsius;
    std::cout << celsius << std::endl;

    int factor;
    factor = 212 - 32;
    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    std::cout << "Fahrenheit value is:" << std::endl;
    std::cout << fahrenheit << std::endl;

    std::cout << "Press Enter to continue..." << std::endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}



