#include<iostream>
#include<ncurses.h>
using namespace std;

int main(){

    cout << "Press any key to continue..." << endl;

    system("stty raw");

    char input = getchar();
    cout << "\n"<<input<< "\n" << endl;

    system("stty cooked");

    return 0;
}
