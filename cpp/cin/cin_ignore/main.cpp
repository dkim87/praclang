#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    cout << "hello world!" << endl;
    cin >> x;
    cin >> y;
    // std::cout << setw(20) << left << "<< x >> " << setw(20) << " has value: " << x << std::endl;
    // std::cout << setw(20) << left << "<< y >> " << setw(20) << " has value: " << y << std::endl;
    std::cout << setw(20) << left << "<< x >> " << setw(20) << " has value: " << x << "\n";
    std::cout << setw(20) << left << "<< y >> " << setw(20) << " has value: " << y << "\n";
    std::cout << "press enter to continue..." << "\n";

    cin.ignore(10,'\n');
    //cin.get();

    std::cout << "x and y?" << "\n";

    /** /
    cin >> x;
    cin >> y;
    std::cout << setw(20) << left << "<< x >> " << setw(20) << " has value: " << x << "\n";
    std::cout << setw(20) << left << "<< y >> " << setw(20) << " has value: " << y << "\n";
    /**/

    return 0;
}
