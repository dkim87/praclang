#include <iostream>
#include<string>
using namespace std;

int strindex(char*,char*);
int *mygrep(char*,char*);

void printarr(int* &arr){
    for (int i = 0; i<10; i++){
        std::cout << "variable <<i>> - value: " << i << " ; memory: " << &i << std::endl;
        std::cout << "variable <<arr[i]>> - value: " << *(arr+i) << " ; memory: " << &arr[i] << std::endl;
    }
}

int strindex(char *s, char *t){
    int slen = strlen(s);
    int tlen = strlen(t);
    for (int i = 0; i<slen; i++){
        int sindex = i;
        int tindex = 0;
        for (;s[sindex]==t[tindex];){
            sindex++;
            tindex++;
        }
        if (tindex == tlen)
            return i;
    }
    return -1;
}

int *mygrep(char* s, char* t){
    int indices[100];
    for(int i = 0; i<100; i++){
        indices[i] = 5;
    } // initialize indices to 5
    char ss[100];
    strcpy(ss, s);
    std::cout << "variable <<ss>> - value: " << ss << " ; memory: " << &ss << std::endl;
    cout << "variable <<indices>> -- value: "<<indices<< endl;
    cout << "variable <<&indices[0]>> -- value: "<<&indices[0]<< endl;
    cout << "variable <<indices[0]>> -- value: "<<indices[0]<< endl;
    cout << "variable <<&indices[1]>> -- value: "<<&indices[1]<< endl;
    cout << "variable <<indices[1]>> -- value: "<<indices[1]<< endl;
    return indices;
}

int main(){
    char* s = "Hello world! hello";
    char *t = "ll";
    int x = strindex(s,t);
    std::cout << "variable <<x>> - value: " << x << " ; memory: " << &x << std::endl;
    std::cout << "start" << std::endl;
    int *hello;
    hello = mygrep(s,t);
    std::cout << "variable <<*hello>> - value: " << *hello << " ; memory: " << &*hello << std::endl;
    std::cout << "variable <<hello>> -- value: "<<hello<< std::endl;
    std::cout << "variable <<*(hello+0)>> - value: " << (int)*(hello+0) << " ; memory: " << &*(hello+0) << std::endl;
    std::cout << "variable <<*(hello+1)>> - value: " << (int) *(hello+1) << " ; memory: " << &*(hello+1) << std::endl;

    return 0;
}

