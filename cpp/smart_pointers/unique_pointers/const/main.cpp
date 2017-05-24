#include <iostream>
using namespace std;

class myclass {
public:
    int x;
    int y;
    myclass():x(4),y(5){};
    void printinfo();
    void printinfo()const;
};

void myclass::printinfo(){
    cout << "variable << x and y -- value: " << x << " and " << y << endl;
}

void myclass::printinfo()const{
    cout << "variable << x and y -- value: " << x << " and " << y << endl;
}


int main(){

    std::shared_ptr<myclass> const spc(new myclass()); // spc is const, not *spc
    const std::shared_ptr<myclass> csp(new myclass()); // csp is const, not *csp
    std::shared_ptr<const myclass> scm(new myclass()); // *scm is const, not scm
    std::shared_ptr<myclass const> smc(new myclass()); // *smc is const, not smc
    spc->printinfo();
    csp->printinfo();
    scm->printinfo();
    smc->printinfo();

    std::cout << "modified:" << std::endl;
    spc->x = 6;
    csp->x = 7;
    scm = spc;
    smc = csp;
    spc->printinfo();
    csp->printinfo();
    scm->printinfo();
    smc->printinfo();

    return 0;
}
