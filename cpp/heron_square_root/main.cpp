// Explanation
// https://www.youtube.com/watch?v=sgFZpnj7LVo
// a + epsilon = sqrt(2) ( a is a guess )
// a^2 + 2a*epsilon + epsilon^2 = 2
// epsilon^2 is almost zero (as epsilon is a small number)
// therefore,
// a^2 + 2a * epsilon = 2 (almost)
// epsilon = (2-a^2)/2a
// therefore,
// sqrt(2) = a + epsilon = (a^2 + 2)/2a = b (= a new guess better than a)
// now we made an improvement over a.
// replace this value with a and repeat this process.

#include <iostream>
using namespace std;
double heron_sqrt(double x, double guess, size_t);

int main(){
    double target = 2;
    double guess  = 5;
    size_t times  = 10;
    double ans;

    ans = heron_sqrt(target, guess, times);

    printf("final ans = %.16lf\n", ans);

    /*
    for (size_t i = 0; i < times; ++i) {
        ans = heron_sqrt(target,guess,i);
        printf("%.20lf\n", ans);
    }
    */

    for (size_t i = 0; i < times; ++i) {
        ans = heron_sqrt(target, i, times);
    }

    return 0;
}

double heron_sqrt(double x, double guess, size_t times){
    printf("\n\n");
    printf(">>>>>>>>>>>>\n");
    printf("x is %lf, guess is %lf\n", x, guess);
    printf("mean of guess______________ and x/guess____________ = guess______________\n");

    auto mean =
        [](double n1, double n2)-> double{
            return (n1 + n2)/2;
    };

    for (size_t i = 0; i < times; ++i) {
        printf("mean of %.17lf and %.17lf = ", guess, x/guess);
        guess = mean(guess, x/guess);
        printf("%.17lf\n", guess);
    }

    return guess;
}
