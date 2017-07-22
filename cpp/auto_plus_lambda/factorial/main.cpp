#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    auto factorial = [](int x)->int{
        int ret = 1;
        for(int i=1; i<=x; i++){
            ret = ret * i;
        }
        return ret;
    };

    std::cout << factorial(5) << "\n";
    std::cout << factorial(1) << "\n";
    std::cout << factorial(0) << "\n";

    return 0;
}
