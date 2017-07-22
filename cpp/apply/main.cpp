#include <iostream>
#include<iomanip>
#include<functional>
using namespace std;

void swap(int& x, int& y);
void print(int x);
void apply(function<void(int)> func, int x);
void apply(void (*fp)(int), int x);

int main(){
    int x = 4;
    int y = 5;

    std::cout << std::setw(20) << std::left << "<< x >> " << std::setw(20) << " has value: " << x << "\n";
    std::cout << std::setw(20) << std::left << "<< y >> " << std::setw(20) << " has value: " << y << "\n";

    swap(x, y);
    std::cout << std::setw(20) << std::left << "<< x >> " << std::setw(20) << " has value: " << x << "\n";
    std::cout << std::setw(20) << std::left << "<< y >> " << std::setw(20) << " has value: " << y << "\n";

    apply(print, x);
    apply(print, x);

    return 0;
}

void apply(function<void(int)> func, int x){
    std::cout << "world" << "\n";
    func(x);
}

void apply(void (*fp)(int), int x){
    std::cout << "hello" << "\n";
    (*fp)(x);
}

void print(int x){
    std::cout << std::setw(20) << std::left << "<< x >> " << std::setw(20) << " has value: " << x << "\n";
}

void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}
