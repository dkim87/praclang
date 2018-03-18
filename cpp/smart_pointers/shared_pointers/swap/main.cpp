#include <iostream>
#include<iomanip>
#include<memory>
using namespace std;

class myclass{
public:
    int x;
    int y;
    myclass():x(4),y(5){};
    void printall(){
        std::cout << std::setw(20) << std::left << "<< x >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &x << std::setw(25) << " and set(get) value of " << x << "\n";
        std::cout << std::setw(20) << std::left << "<< y >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &y << std::setw(25) << " and set(get) value of " << y << "\n";
    }
};
void my_shared_swap(shared_ptr<myclass> objp);

int main(){

    myclass *objp = new myclass();
    std::cout << std::setw(20) << std::left << "<< objp >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &objp << std::setw(25) << " and set(get) value of " << objp << "\n";
    objp->printall();

    std::cout << "create shared_objp..." << "\n";

    auto shared_objp = make_shared<myclass>();
    std::cout << std::setw(20) << std::left << "<< shared_objp.use_count() >> " << std::setw(20) << " has value: " << shared_objp.use_count() << "\n";
    shared_objp->printall();

    std::cout << "call my_shared_swap" << "\n";
    my_shared_swap(shared_objp);
    std::cout << std::setw(20) << std::left << "<< shared_objp.use_count() >> " << std::setw(20) << " has value: " << shared_objp.use_count() << "\n";
    shared_objp->printall();

    return 0;
}

//void my_shared_swap(shared_ptr<myclass>& objp){ // use_count remains the same.
void my_shared_swap(shared_ptr<myclass> objp){
    std::cout << std::setw(20) << std::left << "<< objp.use_count() >> " << std::setw(20) << " has value: " << objp.use_count() << "\n";
    int t = objp->x;
    objp->x = objp->y;
    objp->y = t;
}
