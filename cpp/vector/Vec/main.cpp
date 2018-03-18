#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

//template <class T>
class Vec {
    std::vector<double> elems;

    public:
    Vec(size_t n) : elems(n) {}
    Vec(std::initializer_list<double> l) : elems(l) {
        std::cout << "constructed with a " << l.size() << "-element list\n";
    }
    double &operator[](size_t i)      { return elems[i]; }
    double operator[](size_t i) const { return elems[i]; }
    size_t size()               const { return elems.size(); }
};

Vec operator+(Vec const &u, Vec const &v) {
    assert(u.size() == v.size());
    Vec sum(u.size());
    for (size_t i = 0; i < u.size(); i++) {
        sum[i] = u[i] + v[i];
    }
    return sum;
}

int* UB(int a){
    int x = a;
    int * p = &x;
    return p;
}

struct student{
    int id;
    int age;
};

struct student *UB_student(int id, int age){
    struct student a = {id, age};
    struct student *p = &a;
    return p;
}

struct student return_student(int id, int age){
    struct student a = {id, age};
    return a;
}

void test_vec(){

    Vec v0 = {23.4,12.5,144.56,90.56};
    Vec v1 = {67.12,34.8,90.34,89.30};

    Vec v2 = {34.90,111.9,45.12,90.5};
    // Following assignment will call the ctor of Vec which accept type of
    // `VecExpression<E> const&`. Then expand the loop body to
    // a.elems[i] + b.elems[i] + c.elems[i]
    Vec sum_of_vec_type = v0+v1+v2;

    for(size_t i=0;i<sum_of_vec_type.size();++i)
        std::cout << sum_of_vec_type[i] << std::endl;

    for(size_t i=0;i<sum_of_vec_type.size();++i){
        std::cout << "---" << std::endl;
        std::cout << v0[i] << std::endl;
        std::cout << v1[i] << std::endl;
        std::cout << v2[i] << std::endl;

    }
}

void test_UB(){
    std::cout << "test_UB start" << std::endl;
    int *ip;

    for(int i = 0; i< 30; i++){
        ip = UB(i);
        std::cout << *ip << std::endl;
    }
}
void test_UB_student(){
    std::cout << "test_UB_student start" << std::endl;

    struct student *sp;
    for (int i = 0; i < 30; ++i) {
        sp = UB_student(i, i+1);
        std::cout << sp->id << std::endl;
        std::cout << sp->age << std::endl;
    }
}

void test_print_vector(){
    std::vector<int> v;
}

void test(){
    //test_vec();
    test_UB();
    test_UB_student();
}

int main(){
    test();
}
