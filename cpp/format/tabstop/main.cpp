#include <iostream>
#include <iomanip>  // set::setw
using namespace std;

int main(){
    int x = 45;
    int arstarst = 45;
    //cout << format("%-20s \n") % "<<x>> has value: "; // require boost library
    //*
    cout << setw(40) << left << "<<x>> has value: " << x << endl;
    cout << setw(40) << left << "<<arstarst>> has value: " << arstarst << endl;
    cout << setw(20) << left << "<< x >> " << setw(20) << " has value: " << x << endl;
    cout << setw(20) << left << "<< arstarst >> " << setw(20) << " has value: " << arstarst << endl;

    cout << setw(20) << left << "<< arstarst >> " << setw(20) << " goes to memory: " << setw(20) << &arstarst << setw(25) << " and set(get) value of " << arstarst << endl;
    cout << setw(20) << left << "<< arstarst >> " << setw(20) << " goes to memory: " << setw(20) << &arstarst << setw(25) << " and set(get) value of " << arstarst << endl;
    cout << setw(40) << left << "<<x>> goes to memory: " << setw(20) << &x << setw(25) << " and set(get) value of " << x << endl;
    cout << setw(40) << left << "<<arstarst>> goes to memory: " << setw(20) << &arstarst << setw(25) << " and set(get) value of " << arstarst << endl;
    /*/
    cout << setw(40) << "<<x>> has value: " << x << endl;
    cout << setw(40) << "<<arstarst>> has value: " << arstarst << endl;
    cout << setw(40) << "<<arstarst>> has value: " <<arstarst<< endl;
    cout << setw(40) << "<<x>> goes to memory: " << setw(20) <<  &x << setw(30) << " and set(get) value of " << x << endl;
    cout << setw(40) << "<<arstarst>> goes to memory: " << setw(20 )<< &arstarst << setw(30) << " and set(get) value of " << arstarst << endl;
    //*/

    return 0;
}
