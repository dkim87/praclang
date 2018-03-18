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
    }

    return 0;
}
