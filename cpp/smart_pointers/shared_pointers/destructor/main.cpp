#include <iostream>
#include <memory>
using namespace std;

class mycl{
    public:
    int x;

    mycl(int _x):x(_x){
        cout << _x << " added!" << endl;
    }

    void printx(){
        cout << x << endl;
    }
    ~mycl(){
        cout << "destruct!" << x << endl;
    }
};

void blah(){
    mycl *obj = new mycl(5);
    shared_ptr<mycl> objx(new mycl(6));
    obj->printx();
    objx->printx();

    // delete objx; // no need

}

int main(){
    blah();

    cout << "main end!" << endl;

    // obj is not deleted...
    // power of shared ptr!

    return 0;
}
