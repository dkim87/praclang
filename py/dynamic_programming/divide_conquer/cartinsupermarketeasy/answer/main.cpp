#include <iostream>
#include <iomanip>
#include "main_origin.cpp"
using namespace std;


int w = 10;
#define H 80
#define W 20
int answers[H][W];
extern int dp[105][105];

int main(){
    CartInSupermarketEasy mycart;

    // does not work with n = 0, as it goes to dp[-1][k], which is undefined.
    /*
    cout << mycart.calc( 45, 5 ) << endl;
    cout << mycart.calc( 0, 0 ) << "\n";
    cout << mycart.calc( 0, 4 ) << "\n";
    cout << mycart.calc(99, 99) << "\n";
    cout << mycart.calc(0, 11) << "\n";
    // cout << mycart.calc(0, 12) << "\n"; # does not work;
    */

    for(int i = 1; i< H; i++){
        cout << "N is " << i << "\n";
        for (int j = 0; j< W; j++){
            answers[i][j] = mycart.calc(i,j);
        }
    }

    cout << "mycalc done" << endl;

    ofstream myfile;
    myfile.open("results.txt");

    auto print2D = [&myfile](int arr[H][W], int h, int w){
        for(int i = 0; i<h; i++){
            for (int j = 0; j<w; j++){
                //printf("%3d, ", arr[i][j]);
                myfile << setw(3) << arr[i][j];
            }
            //puts("");
            myfile << "\n";
        }
    };

    print2D( answers, H, W);

    ofstream dpfile;
    dpfile.open("dp.txt");

    auto printDP = [&dpfile](int arr[105][105], int h, int w){
        for(int i = 0; i<h; i++){
            for (int j = 0; j<w; j++){
                //printf("%3d, ", arr[i][j]);
                dpfile << setw(3) << arr[i][j];
            }
            //puts("");
            dpfile << "\n";
        }
    };

    printDP( dp, H, W );



    return 0;
}
