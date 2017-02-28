#include <iostream>
using namespace std;

int main(){
    string number_guessed;
    int int_number_guessed=0;
    
    std::cout << "Guest between 1 and 10" << std::endl;
    getline(cin,number_guessed);
    std::cout << number_guessed << std::endl;
    cin >> number_guessed;
    std::cout << number_guessed << std::endl;

    int_number_guessed = stoi(number_guessed);
    std::cout << "int_num: " << int_number_guessed << std::endl;


    return 0;
}
