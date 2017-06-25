#include <iostream>
#include<iomanip>
#include<map>
using namespace std;

int main(){
    std::map<char, char> my_map = {
        { 'A', '1' },
        { 'B', '2' },
        { 'C', '3' }
    };

    std::cout << my_map['A'] << "\n";
    std::cout << my_map['B'] << "\n";
    std::cout << my_map['C'] << "\n";
    std::cout << my_map['D'] << "\n";
    std::cout << my_map['1'] << "\n";

    std::map<string, string> mymap2 ={
        { "hello", "world" },
        { "why so", "serious" },
        { "show me", "the money" }
    };

    std::cout << mymap2["hello"] << "\n";
    std::cout << mymap2["why so"] << "\n";
    std::cout << mymap2["show me"] << "\n";

    return 0;
}
