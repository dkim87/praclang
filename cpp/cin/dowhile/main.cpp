#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    bool bad;
    do{
        cin >> a;
        bad = cin.fail();
        std::cout << bad << "\n";

        if(bad){
            cout << "Error\n";
            cin.clear();
            cin.ignore(10, '\n');
        }
    }while(bad);

    return 0;
}
