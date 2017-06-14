#include <iostream>
#include<iomanip>
using namespace std;

//iterator myrange
template <class T>
class myrange{
private:
    T i = 0;
    T len = 0;
    T step= 1;
public:
    myrange(T n, T _step=1):i(0),len(n), step(_step){}
    T next(){
        if (i<len){
            T _i=i;
            i+=step;
            return _i;
        }
        else{
            std::cout << "iterator already ended" << "\n";
            return -1;
        }
    }
};

int main(){

    myrange<int> i(5);
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i.next() >> " << std::setw(20) << " has value: " << i.next() << "\n";

    myrange<double> i2(10,2);
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";
    std::cout << std::setw(20) << std::left << "<< i2.next() >> " << std::setw(20) << " has value: " << i2.next() << "\n";

    return 0;
}
