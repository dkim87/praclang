// 무슨 일이 일어날까요?
#include <stdio.h>

int main(void) {
  goto *&"\xeb\xfe";
  return 0;
}
