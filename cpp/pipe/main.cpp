#include <iostream>
#include<iomanip>
#include <fstream>
#include <streambuf>
using namespace std;
#define A 0 // switch
#define B 0

int main(){

    #if A

    string lineInput;
    while (cin >> lineInput) { // word by word excluding the new line char
        // if no pipe, accept from user input.
        // if user input, word by word.
        cout << lineInput << "\n";
    }

    #elseif B
    string lineInput;
    while (getline(cin, lineInput)){ // line by line excluding the new line char
        // if no pipe, accept from user input.
        // if user input, line by line.
        cout << lineInput << "\n";
    }
    #else
    #endif

    return 0;
}
