#include <iostream>
using std::cin;
using std::cout;
#include <cstdio>

int main(){
    int x = 5;

    int y;
    cin >> y;

    const int z = y;

    char ca[x]={0,};

    ca[0] = 80;
    ca[1] = 81;

    printf("%s\n", ca);

    char nca[z]={0,};
    ca[0] = 82;
    ca[1] = 83;
    printf("%s\n", ca);


    return 0;
}
