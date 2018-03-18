#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

class Student{
    int id;
    const char* name;

public:
    Student(){id = 0; name = "";};
    Student(int _id, const char* _name):id(_id), name(_name){};
    void cry(){
        std::cout << "no.." << " my id is " << id << " and " << "I'm " << name << std::endl;
    };

    void tellID(){
        std::cout << "my id is " << id << std::endl;
    }

};

void foo(Student stdnt){
    stdnt.tellID();
};

int main(){
    Student *s = new Student(5, "hello world");
    s->cry();

    const size_t SIZE = 10;
    Student ss[SIZE];

    for(size_t i = 0; i < SIZE; i ++ ){
        ss[i] = Student(i, "factory");
    }

    for(auto st : ss){
        st.cry();
    }

    Student *sp[3];
    for (int i = 0; i < 3; ++i) {
        sp[i] = new Student(i, "lol");
    }

    for(auto x : sp){
        x->cry();
    }

    Student *spl = new Student[5];
    std::for_each(spl, spl+5, foo);

    return 0;
}
