#include <iostream>
using namespace std;

int main(){

    int x;
    string str;

    for(;;){
        //getline(cin, str);
        cin >> x;
        if(cin.eof()){
            cout << "eof!" << endl;
            return 424;
        }
        if (x == -1){
            exit(424);
        }
        cout << x << endl;
    }

    return 0;
}
