#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 100; ++i) {
        int ran = random();
        std::cout << ran << std::endl;
    }

    std::cout << RAND_MAX << std::endl;

    return 0;
}
