#include <iostream>
#include<iomanip>
using namespace std;

void greeting(string with, string to){
    cout << with << to << endl;
}

void greeting_to_deon(string with){
    greeting(with, "Deon");
}
// In functional programming, this is done by
/*
  var greeting_to_deon = greeting("Deon") where greeting is a higher-order-function. Is this necessary in practice?
*/

int main(){
    greeting("hello", "deon");
    greeting_to_deon("hello");

    return 0;
}
