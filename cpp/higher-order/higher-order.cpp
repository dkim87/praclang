#include<iostream>
using namespace std;

typedef string (*strfp)(string, string);

string add_greeting(string greeting_word,string name){
    return greeting_word + name;
}

strfp greeting(string country){
    add_greeting(,);
}

int main(){
    std::cout << add_greeting("hello","deon") << std::endl;
    strfp myptr = greeting("안녕");

}
