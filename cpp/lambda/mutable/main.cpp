#include <iostream>
#include <assert.h>
using namespace std;

int main(){
    int v = 7;
    auto lambda = [v]() mutable {
        std::cout << v << " ";
        ++v;
    };
    assert(v == 7);
    lambda();
    assert(v == 7);
    lambda();
    assert(v == 7);
    lambda();
    assert(v == 7);
    std::cout << v << " ";

    auto lambda2 = [&v]() {
        std::cout << v << " ";
        ++v;
    };

    assert(v == 7);
    lambda2();
    assert(v == 8);
    lambda2();
    assert(v == 9);
    std::cout << v;

    return 0;
}
