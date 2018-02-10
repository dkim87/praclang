#include <iostream>
#include "redirect.cpp"
// #include <cstdio> // already included in redirect.cpp

int main()
{
    {
        //redirect run{ "c:\\test\\hello.txt" }; // for windows

        redirect run( "./test.txt" ); // what is the difference between { and (?
        //redirect run{ "./text.txt" }; // ans: this is list initialization.
        printf( "test printf hihi\n" );
        std::cout << "test cout" << std::endl;
    }
    std::cout << "bye~" << std::endl;

    auto *rdr = new redirect("./test2.txt");
    printf("this is for test2 printf\n");
    std::cout << "this is for test2 cout" << std::endl;
    delete rdr;

    printf("bye printf\n");
    std::cout << "bye cout" << std::endl;

    std::string s = "empty string";
    char buff[256] = "empty buff";
    {
        redirect r{ "./test.txt", "rb", stdin };
         std::cin >> s;
        scanf("%s\n", buff);
    }
    std::cout << "string is " << s << std::endl;
    printf("%s\n", buff);

    return  0;
}
