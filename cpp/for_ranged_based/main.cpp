#include <iostream>

using namespace std;

class my_class
{
    private:
        int arr[ 10 ];

    public:
        my_class()
        {
            for(int i = 0; i < 10; ++i)
            {
                arr[ i ] = i;
            }
        }

        int* begin()
        {
            cout << "asdf" << endl;

            return arr;
        }

        int* end()
        {
            cout << "fdsa" << endl;

            return arr + 10;
        }
};

int main()
{
    my_class h;

    for(auto i: h) // from h.begin() to h.end(), which is int *, read int
        // relationship of i and h?
        // type of i is derived by : dereferencing the return type of h.begin().
        // i.e. *(h.begin()) = *(int*) = int
    {
        cout << i << ' ';
    }

    return 0;
}
