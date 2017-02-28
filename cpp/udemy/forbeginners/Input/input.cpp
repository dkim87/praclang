#include <iostream>
using namespace std;

int main(){
    std::cout << "Enter your name:" << std::endl;
    string input;
    cin >> input;

    std::cout << "You entered: " << input << std::endl;

    int value;
    cin >> value;
    std::cout << "You entered:" << value<< std::endl;

    return 0;
}
