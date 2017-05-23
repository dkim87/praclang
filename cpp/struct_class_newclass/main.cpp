#include <iostream>
using namespace std;

typedef struct strbook{
    string name;
    int num;
}strbook;

class classbook{
public:
    string name;
    int num;
};

void swap_num(strbook a, strbook b){
    int t = a.num;
    a.num = b.num;
    b.num = t;
}

void swap_num(classbook c, classbook d){
    int t = c.num;
    c.num = d.num;
    d.num = t;
}

void swap_num(classbook *c, classbook *d){
    int t = c->num;
    c->num = d->num;
    d->num = t;
}

int main(){
    strbook bk1, bk2;
    bk1.num = 1;
    bk2.num = 2;
    swap_num(bk1, bk2);

    classbook bk3, bk4;
    bk3.num = 3;
    bk4.num = 4;
    swap_num(bk3, bk4);

    classbook *bk5 = new classbook();
    bk5->num = 5;
    classbook *bk6 = new classbook();
    bk6->num = 6;
    swap_num(bk5, bk6);

    std::cout << "variable <<bk1.num>> - value: " << bk1.num << " ; memory: " << &bk1.num << std::endl;
    std::cout << "variable <<bk2.num>> - value: " << bk2.num << " ; memory: " << &bk2.num << std::endl;
    std::cout << "variable <<bk3.num>> - value: " << bk3.num << " ; memory: " << &bk3.num << std::endl;
    std::cout << "variable <<bk4.num>> - value: " << bk4.num << " ; memory: " << &bk1.num << std::endl;
    std::cout << "variable <<bk5->num>> - value: " << bk5->num << " ; memory: " << &bk5->num << std::endl;
    std::cout << "variable <<bk6->num>> - value: " << bk6->num << " ; memory: " << &bk6->num << std::endl;





    return 0;
}
