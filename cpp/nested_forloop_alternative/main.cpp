#include <iostream>
#include <functional>
using namespace std;

struct params{
    int x;
    int y;
    int z;
};

// fail.. design problem... couldn't replace nested forloop
void myfor(int nested, int times, function<void(int a, int b, int c)> myfunc, struct params p){
    for(int i = 0; i < times; i++){
        if(nested == 1){
            myfunc(p.x, p.y, p.z);
        }else{
            myfor(nested - 1, times, myfunc, p);
}}}

void print_xyz(int x, int y, int z){
    std::cout << "1:" << x << " 2:" << y << " 3:" << z << std::endl;
}

void test(){
    print_xyz(1, 2, 3);
}

int main(){
    // test();
    struct params p = {1, 2, 3};
    myfor(3, 2, print_xyz, p);

    return 0;
}

