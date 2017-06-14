#include <iostream>
#include<iomanip>
using namespace std;

template< class T >
auto cin_valid( T& v )
{
    std::string s;
    for(;;)
    {
        std::getline( std::cin, s );
        std::istringstream ss( s );
        ss >> v >> std::ws;
        if( !ss.fail() && ss.eof() )
            break;
        std::cerr << "invalid input. try again ";
    }
}

int main(){
    int x;
    cin_valid(x);
    printf("%d\n", x);

return 0;
}
