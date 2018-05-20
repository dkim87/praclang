#include <iostream>
#include <cstdio>

using namespace std;

template<class T>
void printT(T t){
    t.hello();
}

class hey{
    public:
    void hello(){
        printf("this is hey!\n");
    }

};

class how{
public:
    void hello(){
        printf("this is how!\n");
    }
};

class container{
public:
    hey he;
    how ho;

    container(){
    }

    void store(hey _he){
        this->he = _he;
    }

    void store(how _ho){
        this->ho = _ho;
    }
};

int main(){

    hey he;
    how ho;

    printT(he);
    printT(ho);

    container con;
    con.store(he);
    con.store(ho);

    printT(con.he);
    printT(con.ho);

    return 0;
}
