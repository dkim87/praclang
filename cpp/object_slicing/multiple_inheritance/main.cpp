#include <iostream>
using namespace std;

struct A{
    int a;
};

struct B{
    int b;
};

struct C: A, B{
    int c;
};

int main(){
    C x;
    x.a = 1;
    x.b = 2;
    x.c = 3;

    cout << &x << '\n';
    cout << (A*)&x << '\n';
    cout << (B*)&x << '\n';

    A y = x;
    B z = x;
    return 0;
}
