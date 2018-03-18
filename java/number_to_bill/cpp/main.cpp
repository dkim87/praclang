#include <iostream>
#include <string>
int main() {
      int pay = 567890;
      const int         a[ 4 ] = { 10000, 1000, 100, 10 };
      const std::string b[ 4 ] = { "만원", "천원", "백원", "십원" },
                        c[ 2 ] = { "장", "개" };
      std::cout << b[ 0 ] << ": " << (pay / a[ 0 ]) << c[ 0 ] << "\n";
      for(int i = 1; i < 4; ++i)
            std::cout << b[ i ] << ": " << (pay / a[ i ]) % 10 << c[ i / 2 ] << "\n";
      return 0;
}
