#include <iostream>

void add1(int &v)
{
    v+=1;
}

void add2(int &v)
{
    v+=2;
}

    template <typename F>
void doOperation(F f)
{
    int temp=0;
    f(temp);
    std::cout << "Result is " << temp << std::endl;
}

struct add3 {
    void operator() (int &v) {v+=3;}
};

int main()
{
    doOperation(add2);
    doOperation(add3());
    add3 s;
    int x = 5;
    s(x);
    std::cout << x << std::endl;

    doOperation(s); // equivalend to add3()

    add3()(x);
    std::cout << x << std::endl;

    return 0;
}
