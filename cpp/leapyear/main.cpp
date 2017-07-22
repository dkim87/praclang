#include <iostream>
#include<iomanip>
using namespace std;
bool isleapyear(int year);
void mapcar(void (*fptr)(int), int arr[], int size);
void createyeararr(int arr[], int from, int to);
void printleap(int x);

int main(){
    int years[4096];
    int from = 1500;
    int to = 2200;
    int size = to-from+1;

    createyeararr(years, from, to);
    mapcar(printleap, years, size);


    return 0;
}

void printleap(int x){
    cout << x << " is leapyear? " << isleapyear(x) << "\n";
}

bool isleapyear(int year){
    if (year%4 != 0){ // 2001... 2003 filtered
        return false;
    }
    // 2000, 2004, 2100 ... passed
    // 2000 leap year
    // 2100 not leap year

    //if (year%100==0 && year%400!=0){ // for those among 2000, 2100 and not 2000
    if (year%100==0 && year%400){ // for those among 2000, 2100 and not 2000
        // && takes priority against == and != (precedence issue).
        return false;
    }

    // 2000 2004 remaining
    return true;
}

void mapcar(void (*fptr)(int), int arr[], int size){
    for (int i = 0; i<size; i++){
        (*fptr)(arr[i]);
    }
}

void createyeararr(int arr[], int from, int to){
    int size = to - from + 1;
    for (int i = 0; i<size; i++){
        arr[i] = i+from;
    }
}

void printarr(int arr[], int size){
    for (int i=0; i<size; i++) {
        std::cout << arr[i] << "\n";
    }
}
