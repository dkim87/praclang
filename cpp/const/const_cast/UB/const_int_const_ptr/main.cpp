#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    const int a = 10;
    const int *const ptr = nullptr;
    const int **const ptr2 = const_cast<const int **const>(&ptr);

    cout << setw(20) << left << "<< a >> " << setw(20) << " has value: " << a << endl;
    cout << setw(20) << left << "<< &a >> " << setw(20) << " has value: " << &a << endl;
    cout << setw(20) << left << "<< ptr >> " << setw(20) << " has value: " << ptr << endl;
    // cout << setw(20) << left << "<< *ptr >> " << setw(20) << " has value: " << *ptr << endl;
    cout << setw(20) << left << "<< &ptr >> " << setw(20) << " has value: " << &ptr << endl;
    cout << setw(20) << left << "<< ptr2 >> " << setw(20) << " has value: " << ptr2 << endl;
    cout << setw(20) << left << "<< *ptr2 >> " << setw(20) << " has value: " << *ptr2 << endl;
    cout << setw(20) << left << "<< **ptr2 >> " << setw(20) << " has value: " << *ptr2 << endl;
    cout << setw(20) << left << "<< &ptr2 >> " << setw(20) << " has value: " << &ptr2 << endl;

    *ptr2 = &a; // UB
    cout << "Execute: *ptr2 = &a" << endl;

    cout << setw(20) << left << "<< a >> " << setw(20) << " has value: " << a << endl;
    cout << setw(20) << left << "<< &a >> " << setw(20) << " has value: " << &a << endl;
    cout << setw(20) << left << "<< ptr >> " << setw(20) << " has value: " << ptr << endl;
    // cout << setw(20) << left << "<< *ptr >> " << setw(20) << " has value: " << *ptr << endl;
    cout << setw(20) << left << "<< &ptr >> " << setw(20) << " has value: " << &ptr << endl;
    cout << setw(20) << left << "<< ptr2 >> " << setw(20) << " has value: " << ptr2 << endl;
    cout << setw(20) << left << "<< *ptr2 >> " << setw(20) << " has value: " << *ptr2 << endl;
    cout << setw(20) << left << "<< **ptr2 >> " << setw(20) << " has value: " << *ptr2 << endl;
    cout << setw(20) << left << "<< &ptr2 >> " << setw(20) << " has value: " << &ptr2 << endl;

    return 0;
}
