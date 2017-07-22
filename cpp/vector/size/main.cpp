#include <iostream>
#include<iomanip>
#include <vector>
using namespace std;

int main(){
    vector<int> v1(2);
    std::cout << std::setw(20) << std::left << "<< v1.size() >> " << std::setw(20) << " has value: " << v1.size() << "\n";
    v1.push_back(3);
    std::cout << std::setw(20) << std::left << "<< v1.size() >> " << std::setw(20) << " has value: " << v1.size() << "\n";

    /* output:
<< v1.size() >>      has value:         2
<< v1.size() >>      has value:         3
     */


    return 0;
}
