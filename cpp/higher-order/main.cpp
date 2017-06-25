#include<iostream>
using namespace std;

typedef string (*strfp)(string, string);

string greeting_with_to(string greeting_word,string name){
    return greeting_word + name;
}

strfp higher_greeting(string greeting_word){
    return greeting_with_to; // greeting_with_to [greeting_word] impossible to express
}

int main(){
    std::cout << greeting_with_to("hello","deon") << std::endl;
    //strfp myptr = greeting("안녕");

    std::cout << "This attempt failed. Checkout the sub directories." << "\n";

}
