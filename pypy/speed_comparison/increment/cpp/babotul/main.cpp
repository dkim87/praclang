#include <cstdio>
constexpr int num1 = 20000, num2 = 2000;
//constexpr int num1 = 1000000000, num2 = 100000000;
template < int a >        void haha();
template < int a, int b > void haha();
template <>               void haha< num1 >();
template < int a > void haha() {
      if(!(a % num2))
            printf("%d\n", a);
      haha< a + 1, 0 >();
}
template < int a, int b > void haha() {
      if(!(a % num2))
            printf("%d\n", a);
      haha< a + 1 >();
}
template <> inline void haha< num1 >() {
      if(!(num1 % num2))
            printf("%d\n", num1);
}
int main() {
      haha< 0 >();
      return 0;
}
