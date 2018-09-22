//  https://www.codentalks.com/t/topic/3174/2
#include <iostream>
#include <string>

class Test
{
private:
      int nya = 0;
      std::string name;

public:
      Test(std::string name): name(name){}

      ~Test()
      {
            std::cout << "아아 사랑하던 나의 " << name << "은 갔읍니다.\n";
      }

      Test dance()  //Test를 Test&로 바꾸면 재밌는 일이 일어날지도?
      //Test& dance()  //Test를 Test&로 바꾸면 재밌는 일이 일어날지도?
      {
            ++nya;

            std::cout << name << "은 춤을 추고 있읍니다.\n";
            std::cout << nya << "번째 춤을 추고 있읍니다.\n";

            return *this;
      }

      void where()
      {
            std::cout << name << "은 " << this << "에 있읍니다.\n";
      }
};

int main()
{
      Test engels("Friedrich Engels");
      //Test engels = Test("Friedrich Engels");
      //같은 뜻입니다.
      engels.dance().where();
      engels.dance().where();

      Test("Karl Marx").dance().where();
      //춤을 추자마자 소멸자 호출.
      Test("Karl Marx").dance().where();
      //이번에도 추자마자 소멸자 호출. 아까와의 맑스와는 다른 맑스입니다.
      std::cout << "춤추는 모습이 보기 좋군요.\n";

      //Test& mill = Test("John Stuart Mill");
      //임시로 생성한 Rvalue!
      Test&& mill = Test("John Stuart Mill");
      mill.dance().where();
      //뒤지지 않습니다.
      mill.dance().where();
      std::cout << "그래서 저도 한번 춰보았읍니다.\n";

      return 0;
}
