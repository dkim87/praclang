#include <iostream>
using namespace std;

int main(void){
    // const *char conpchar = "this is conpchar"; // not accepted
    const char *concharp = "this is concharp"; // same. If * operator is next to varname, the value it is pointing at is const.
    char const *charconp = "this is charconp."; // same as above.
    char *const charpcon = "this is charpcon"; // If * operator is next to const, the pointer itself is const.

    std::cout << "variable <<concharp>> - value: " << concharp << " ; memory: " << &concharp << std::endl;
    std::cout << "variable <<charpcon>> - value: " << charpcon << " ; memory: " << &charpcon << std::endl;
    std::cout << "variable <<charconp>> - value: " << charconp << " ; memory: " << &charconp << std::endl;

    concharp = "concharp changed to other string literal.";
    charconp = "charconp changed to other string literal.";
    //charpcon = "charpcon changed to other string literal.";

    std::cout << "variable <<concharp>> - value: " << concharp << " ; memory: " << &concharp << std::endl;
    std::cout << "variable <<charpcon>> - value: " << charpcon << " ; memory: " << &charpcon << std::endl;
    std::cout << "variable <<charconp>> - value: " << charconp << " ; memory: " << &charconp << std::endl;

    return 0;
}
