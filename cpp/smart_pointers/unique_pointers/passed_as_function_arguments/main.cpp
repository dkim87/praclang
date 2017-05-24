#include<iostream>
using namespace std;

class myclass{
public:
    int x;
    int y;
    myclass():x(4),y(5){};
};

void swap(std::unique_ptr<myclass>);
//void swap(std::shared_ptr<myclass>);
void swap(std::shared_ptr<myclass>&);
void swap(myclass&);

int main(){
    std::shared_ptr<myclass> objp(new myclass());
    std::cout << "variable <<objp->x>> - value: " << objp->x << " ; memory: " << &objp->x << std::endl;
    std::cout << "variable <<objp->y>> - value: " << objp->y << " ; memory: " << &objp->y << std::endl;
    std::cout << "address: " << &objp << std::endl;
    swap(objp);

    std::cout << "variable <<objp->x>> - value: " << objp->x << " ; memory: " << &objp->x << std::endl;
    std::cout << "variable <<objp->y>> - value: " << objp->y << " ; memory: " << &objp->y << std::endl;
    swap(*objp);
    std::cout << "variable <<objp->x>> - value: " << objp->x << " ; memory: " << &objp->x << std::endl;
    std::cout << "variable <<objp->y>> - value: " << objp->y << " ; memory: " << &objp->y << std::endl;
    std::unique_ptr<myclass> uniq_objp(new myclass());
    int t = uniq_objp->x;
    uniq_objp->x = uniq_objp->y;
    uniq_objp->y = t;
    std::cout << "variable <<uniq_objp->x>> - value: " << uniq_objp->x << " ; memory: " << &uniq_objp->x << std::endl;
    std::cout << "variable <<uniq_objp->y>> - value: " << uniq_objp->y << " ; memory: " << &uniq_objp->y << std::endl;
    return 0;
}

void swap(std::shared_ptr<myclass> &obj){
    std::cout << "address: " << &obj << std::endl;
    int t = obj->x;
    obj->x = obj->y;
    obj->y = t;
}

void swap(const std::unique_ptr<myclass> obj){
    int t = obj->x;
    obj->x = obj->y;
    obj->y = t;
}

void swap(myclass& obj){
    int t = obj.x;
    obj.x = obj.y;
    obj.y = t;
}
