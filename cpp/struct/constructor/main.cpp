#include <iostream>
using namespace std;

class student{
    public:
    int id;
    student(int _id = 0){
        id = _id;
    }
};

struct xyz{
    student x = student();
    student y = student(3);
    student z = student(5);
};

int main(){
    struct xyz st;
    std::cout << st.x.id << std::endl;
    std::cout << st.y.id << std::endl;
    std::cout << st.z.id << std::endl;

    return 0;
}
