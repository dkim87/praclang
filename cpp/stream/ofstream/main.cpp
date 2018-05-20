#include <iostream>
#include <fstream>

using namespace std;

int main(){

    {
        ofstream of("myLog.txt");

        of << "Honesty is the best policy." << endl;

        //cout << ofstream::app << end;
        printf("%lu\n", sizeof (ofstream::app));
        printf("%d\n", ofstream::app);
        printf("%d\n", ofstream::in);
        printf("%d\n", ofstream::out);
        printf("%d\n", ofstream::in | ofstream::out);

        printf("ios::app = %d\n", ios::app);
        printf("ios::ate = %d\n", ios::ate);
        printf("ios::binary = %d\n", ios::binary);
        printf("ios::in = %d\n", ios::in);
        printf("ios::out = %d\n", ios::out);
        printf("ios::trunc = %d\n", ios::trunc);
    }

    return 0;
}
