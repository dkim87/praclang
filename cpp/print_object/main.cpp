#include <iostream>
#include "print_bitn.h"
using namespace std;


class person{
    const char *name;
    public:
    person(){};
    person(const char *_name):name(_name){};
};

class student:person{
    int id;
    int age;

    public:
    student(){id = 1, age = 2;};

    student(int _id, int _age):id(_id), age(_age){};

    void cry(){
        std::cout << "my age is " << age << std::endl;
    }

};

int hello(){
    int x = -1;
    int y = -1;
    int z = x + y;
    return z;
}

int main(){

    student ss[3];

    printf("%lu\n", sizeof *ss);
    print_bitn(ss, sizeof *ss);


    return 0;
}
