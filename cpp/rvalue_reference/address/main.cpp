#include <iostream>
using namespace std;

/*
void print_int(int i){
    cout << i << '\n';
    cout << &i << '\n';
}
*/

// ambiguous, should choose between int and int&
/*
void print_int(int& i){
    cout << i << '\n';
    cout << &i << '\n';
}
*/

void print_int(int&& i){
    cout << "rvalue ref" << '\n';
    cout << i << '\n';
    cout << &i << '\n';
}

int main(){
    int x = 5;
    int &y = x;
    // int &&z = x; // error
    int &&z = 5;

    cout << &x << '\n';
    cout << &y << '\n';
    // cout << &5 << '\n'; // error
    cout << &z << '\n';

    print_int(std::move(x));
    print_int(std::move(y));
    print_int(std::move(z));


    return 0;
}
