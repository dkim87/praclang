#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
    printf("hello\n");

    float fValue = 123.456789;
    cout << sizeof(float) << endl;
    cout << setprecision(20) << fixed << fValue << endl;

    double dValue = 123.456789;
    cout << sizeof(double) << endl;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.456789876543210;
    cout << sizeof(long double) << endl;
    cout << setprecision(20) << fixed << lValue << endl;

    

    return 0;
}
