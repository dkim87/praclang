#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    // int i = 5;
    const int i = 5; // UB
    int *ip = const_cast<int*>(&i);
    int &ir = const_cast<int&>(i);


    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &i << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;

    *ip = 6;
    cout << "Execute the following code: *ip = 6" << endl;

    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &ip << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;

    ir = -1;
    cout << setw(20) << left << "<< &i >> " << setw(20) << " has value: " << &ip << endl;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ip >> " << setw(20) << " has value: " << ip << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;
    cout << setw(20) << left << "<< &ir >> " << setw(20) << " has value: " << &ir << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;

    return 0;
}
