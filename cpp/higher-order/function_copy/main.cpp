#include <iostream>
#include<iomanip>
#include<functional>

using namespace std;

function< function< void(int)> (function<void(int)>)> copy_of_copy(function< function< void(int)> (function<void(int)>)> cf);
//auto mycopy(function<void(int)> vif);
function<void(int)> mycopy(function<void(int)> vif);
void print(int x);

int main(){
    int x = 5;
    print(x);

    //function<void(int)> y = mycopy(print);
    auto y = mycopy(print);
    y(x);
    auto z = mycopy(print);
    z(x);

    //function< function<void(int)> ( function< void(int) > ) > w = copy_of_copy(mycopy);
    auto w = copy_of_copy(mycopy);
    //function<void(int)> a = w(print);
    auto a = w(print);
    a(x);
    auto b = w(print);
    b(x);
    return 0;
}

function< function< void(int)> (function<void(int)>)> copy_of_copy(function< function< void(int)> (function<void(int)>)> cf) {
    return [cf](function<void(int)> vif){
        return [vif](int x){
            vif(x);
            return;
        };
    };
}

//auto mycopy(function<void(int)> vif){
function<void(int)> mycopy(function<void(int)> vif){
    return [vif](int x){
        vif(x);
        return;
    };
}

void print(int x){
    cout << x << endl;
    return;
}
