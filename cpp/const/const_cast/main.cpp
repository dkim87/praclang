#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i = 5;
    const int& ir = i;
    const int *ip = &i;

    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;

    const_cast<int&>(ir) = 3;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;

    *const_cast<int*>(ip) = 4;
    cout << setw(20) << left << "<< i >> " << setw(20) << " has value: " << i << endl;
    cout << setw(20) << left << "<< ir >> " << setw(20) << " has value: " << ir << endl;
    cout << setw(20) << left << "<< *ip >> " << setw(20) << " has value: " << *ip << endl;


    return 0;
}
