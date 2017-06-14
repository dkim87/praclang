#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // int i = -1;
    const int i = 333333; // UB
    const int& ir = i;
    const int *ip = &i;

    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &i << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;

    cout << "const_cast<int&>" << endl;
    const_cast<int&>(ir) = -60000;
    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &i << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;

    *const_cast<int*>(ip) = -12;
    cout << "const_cast<int*>" << endl;
    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &i << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;


    return 0;
}
