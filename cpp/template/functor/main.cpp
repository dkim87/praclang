#include <iostream>
using namespace std;

// not working
template <typename R, typename F, typename S>
R apply(F f, S s){
    return f(s.a, s.b);
}

template <typename S> // works
void print_s(S s){
    std::cout << "print_s" << std::endl;
    std::cout << s.a << std::endl;
    std::cout << s.b << std::endl;
}

// not working
template <typename R, typename F, typename S>
R apply1(F f, S &s){
    return f(s.a);
}

template<typename F, typename S>
int apply4(F f, S s){
    std::cout << "apply4" << std::endl;
    return f(s.a, s.b);
}

template <typename F>
void apply2(F f){
    auto x = 5;
    f(x);
    std::cout << x << std::endl;
}

template <typename F, typename T>
T apply3(F f, T t, T u){
    return f(t, u);
}

template <typename T>
T add(T a, T b){
    return a + b;
}

template <typename T>
struct arg2{
    T a;
    T b;
};

void add1(int &v){
    std::cout << "add1" << std::endl;
    v+=1;
}

int addv(int a, int b){
    std::cout << "addv" << std::endl;
    return a + b;
}

void test_apply4(){
    arg2<int> s = {99, 98};
    int a = apply4(addv, s);
    std::cout << "test_apply4" << std::endl;
    std::cout << a << std::endl;
}

void test(){
    arg2<int> s = {1, 2};
    int ans = apply<int>(add<int>, s); // not worked, now work.
    // reason this did not work when `apply(add, s)`
    // - first, R (return type) could not be deduced. `int ans` gives no clue to apply.
    // - second, add function was not specified. compiler has no idea if add function is add<int> (cuz no function arguments passed).
    std::cout << ans << std::endl;

    apply1<void>(add1, s); // not worked, now work.
    std::cout << "after apply1" << std::endl;
    std::cout << s.a << std::endl;
    // same as above.

    apply2(add1);
    auto x = apply3(addv, 1, 2);
    std::cout << x << std::endl;

    print_s(s);
    test_apply4();
}



int main(){
    test();

    return 0;
}
