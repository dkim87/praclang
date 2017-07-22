#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;

bool isprime(int x);
void printprime(int x);
void myapply(void (*fp)(int), vector<int> arr);
void intrange(vector<int>& arr, int from, int to, int step);
void printvec(vector<int> arr);

int main(){

    int from = 2;
    int to = 100;
    int size = to - from + 1;

    vector<int> arr = vector<int>(size);
    intrange(arr, from, to, 1);

    printvec(arr);
    myapply(printprime,arr);

    return 0;
}

bool isprime(int x){
    for (int i=2; i*i<x; i++) {
        if(x%i==0){
            return false;
        }
    }
    return true;
}

void printprime(int x){
    std::cout << x << " is prime? " << isprime(x) << "\n";
}

void myapply(void (*fp)(int), vector<int> arr){
    for (unsigned int i=0; i<arr.size(); i++) {
        (*fp)(arr[i]);
    }
}

void intrange(vector<int>& arr, int from, int to, int step = 1){
    int size = to - from + 1;
    for (int i=0; i<size; i++) {
        arr[i] = from+(i*step);
    }
}

void printvec(vector<int> arr){
    for (unsigned int i=0; i<arr.size(); i++) {
        cout << i << "th element -- " << arr[i] << "\n";
    }
}
