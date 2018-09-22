#include <iostream>
using namespace std;

class Parent{
    public:
        Parent(int a, int b):p1(a), p2(b){};
    protected:
        int p1, p2;
};

class Child : public Parent{
    public:
        Child(int a, int b, int c, int d):Parent{a,b}, c1(c), c2(d){};
        void Process1(const Child& p){
            int t = p.p1;
            std::cout << t << std::endl;
        }
        void Process2(const Parent& p){
            int t = p.p1; // error occurs... wow strange
            // https://www.codentalks.com/t/topic/3190/2
            std::cout << t << std::endl;
        }
    protected:
        int c1, c2;
};

int main(){
    Child c{1,2,3,4};
    c.Process1((Child &)c);
    c.Process2((Parent &)c);


    return 0;
}
