#include <iostream>
#include <vector>

using namespace std;

int main(){

    std::vector<int> v = {1, 2, 3};

    std::cout << &v << std::endl;

    std::cout << v[1] << std::endl;

    std::cout << &v[0] << std::endl;
    std::cout << &v[2] << std::endl;
    std::cout << &v[3] << std::endl;
    std::cout << &*(v.begin()) << std::endl;
    std::cout << &*(v.end()) << std::endl; // interesting. same with &v[3] which is UB.

    std::cout << *(v.end()) << std::endl;

    return 0;
}
