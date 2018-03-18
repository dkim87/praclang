// https://stackoverflow.com/questions/1174169/function-passed-as-template-argument
#include <iostream>

void add1(int &v)
{
  v+=1;
}

void add2(int &v)
{
  v+=2;
}

template <void (*T)(int &)>
void doOperation()
{
  int temp=0;
  T(temp);
  std::cout << "Result is " << temp << std::endl;
}

int main()
{
  doOperation<add1>();
  doOperation<add2>();
  return 0;
}
