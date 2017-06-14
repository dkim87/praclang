#include <iostream>
#include<iomanip>
using namespace std;

class person{
public:
    const char *name;
    int age;
    person(){};
    person(const char *nom, int ag):name(nom),age(ag){};
};

int main(){

    person *myp = new person[100]();
        cout << setw(20) << left << "<< myp >> " << setw(20) << " has value: " << (long int)myp << endl;

    int i = 100000000;
    long int myp_prev;
    long int myp_post;
    /**/
    while (myp != NULL){
        myp_prev = (long int) myp;
        //
        i+= 100000000;
        //
        delete[] myp;
        myp = new person[i]();
        cout << setw(20) << left << "<< myp >> " << setw(20) << " has value: " << (long int)myp << endl;
        myp_post = (long int) myp;
        cout << "difference: " << myp_post - myp_prev << endl;

    }
    /**/
    cout << "hello world!" << endl;

    return 0;
}
