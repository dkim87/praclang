#include <iostream>
#include<iomanip>
#include<functional>
using namespace std;

function<string(const string &)> greeting(const string &message){
    // anon function supported by lambda in cpp
    return [message](const string &name) -> string{ // capture message from outside
        return message + ", " + name + "!";
    };
}

/* In other languages which support 'x = function(a, b){}' kind of syntax (that is, all functions are implicit lambda exp), This is written as

x = function(message){
    return function(name) { // capture message omitted
        Return message + ", " + name + "!";
    }
}
*/

int main(){
    auto x = greeting("Hello");
    // Below two lines work as well.
    /*
    function<string(string)> x = greeting("Hello");
    function<string(const string &)> x = greeting("Hello");
    */
    string x_result = x("deon");
    std::cout << x_result << "\n";

    return 0;
}
