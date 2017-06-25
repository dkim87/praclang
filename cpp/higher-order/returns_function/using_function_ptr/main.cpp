#include <iostream>
using namespace std;

typedef string (*strfp)(string);

// both works

/*
#include <functional>
function<void(string)> greeting(string msg){
//*/
//*

auto greeting(string msg){
    return [msg](string name){
        std::cout << msg<<name << "\n";
    };
}
//*/

int main(){
    auto xy = greeting("hello");
    xy("deon");
    cout << typeid(xy).name() << endl;

    return 0;
}
