#include<iostream>
#include<iomanip>
#include<memory>
using namespace std;

class myclass{
public:
    int x;
    int y;
    myclass():x(4),y(5){};
};

//prototype
void myswap(myclass *obj);
void my_uniq_swap(unique_ptr<myclass>& obj);

int main(){

    myclass *objp = new myclass();
    std::cout << "objp created." << "\n";
    std::cout << std::setw(20) << std::left << "<< objp->x >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &objp->x << std::setw(25) << " and set(get) value of " << objp->x << "\n";
    std::cout << std::setw(20) << std::left << "<< objp->y >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &objp->y << std::setw(25) << " and set(get) value of " << objp->y << "\n";
    std::cout << std::setw(20) << std::left << "<< objp >> " << std::setw(20) << " has value: " << objp << "\n";
    std::cout << std::setw(20) << std::left << "<< &objp >> " << std::setw(20) << " has value: " << &objp << "\n";

    myswap(objp);
    std::cout << "myswap(myclass*) called." << "\n";

    std::cout << std::setw(20) << std::left << "<< objp->x >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &objp->x << std::setw(25) << " and set(get) value of " << objp->x << "\n";
    std::cout << std::setw(20) << std::left << "<< objp->y >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &objp->y << std::setw(25) << " and set(get) value of " << objp->y << "\n";
    std::cout << "swaped!" << "\n";

    //std::unique_ptr<myclass> uniq_objp(new myclass());
    auto uniq_objp = make_unique<myclass>();
    std::cout << "unique_ptr created!" << "\n";

    std::cout << std::setw(20) << std::left << "<< uniq_objp->x >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &uniq_objp->x << std::setw(25) << " and set(get) value of " << uniq_objp->x << "\n";
    std::cout << std::setw(20) << std::left << "<< uniq_objp->y >> " << std::setw(20) << " goes to memory: " << std::setw(20) << &uniq_objp->y << std::setw(25) << " and set(get) value of " << uniq_objp->y << "\n";

    /*
    int t = uniq_objp->x;
    uniq_objp->x = uniq_objp->y;
    uniq_objp->y = t;
    */

    my_uniq_swap(uniq_objp);
    std::cout << "swapped" << "\n";

    std::cout << "variable <<uniq_objp->x>> - value: " << uniq_objp->x << " ; memory: " << &uniq_objp->x << std::endl;
    std::cout << "variable <<uniq_objp->y>> - value: " << uniq_objp->y << " ; memory: " << &uniq_objp->y << std::endl;
    std::cout << "success!" << "\n";

    return 0;
}

void myswap(myclass *obj){
    int t = obj->x;
    obj->x = obj->y;
    obj->y = t;
}

//void my_uniq_swap(unique_ptr<myclass>& obj){
void my_uniq_swap(unique_ptr<myclass>& obj){
    int t = obj->x;
    obj->x = obj->y;
    obj->y = t;
}
