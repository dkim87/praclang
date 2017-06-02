#include<iostream>
using namespace std;

int main(){

    int *x(new int[3]);

    for (int i=0; i<3; i++) {
        cout << x[i] << endl;
    }

    delete[] x;
    x = nullptr;
    delete[] x;

    /*
    for (int i=0; i<3; i++) {
        cout << x[i] << endl;
    }
    */

    return 0;
}
