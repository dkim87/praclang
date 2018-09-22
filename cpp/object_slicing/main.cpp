// https://stackoverflow.com/questions/274626/what-is-object-slicing

#include <iostream>
using namespace std;

class A{
    public:
    int foo;
};

class B : public A{
    public:
    int bar;
};

int main(){
    B b1;
    B b2;
    b1.foo = 1;
    b1.bar = 2;
    b2.foo = 3;
    b2.bar = 4;

    A& b2_ref = b2;
    b2_ref = b1; // result: 1 2 1 4
    //b2 = b1; // result: 1 2 1 2

    cout << b1.foo << endl;
    cout << b1.bar << endl;
    cout << b2.foo << endl;
    cout << b2.bar << endl;

    /*
    A a1;
    A a2;
    B bs[3];
    bs[0]= a1;
    */ // does not work

    A as[3];
    as[0] = b1;
    as[1] = b2;



    return 0;
}
