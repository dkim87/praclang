#include <iostream>
#include<iomanip>
using namespace std;

class Point{
public:
    int x;
    int y;
    Point():x(0),y(0){};
    Point(int _x,int _y):x(_x),y(_y){};
};

void tricky(Point a, Point b){
    a.x = 100;
    a.y = 100;
    Point tmp = a;
    a = b;
    b = tmp;
}

void tricky_with_pointers(Point *ap, Point *bp){
    ap->x = 100;
    ap->x = 100;
    Point *tp = ap;
    ap = bp;
    bp = tp;
}

int main(){
    Point p1 = Point(0,0);
    Point p2 = Point(0,0);
    cout << "X: " << p1.x << " Y: " << p1.y << "\n";
    cout << "X: " << p2.x << " Y: " << p2.y << "\n";
    tricky(p1,p2); // does not work at all, not even for x and y
    std::cout << "tricky!" << "\n";
    cout << "X: " << p1.x << " Y: " << p1.y << "\n";
    cout << "X: " << p2.x << " Y: " << p2.y << "\n";

    Point *pp1 = &p1;
    Point *pp2 = &p2;
    tricky_with_pointers(pp1, pp2); // now same with java
    std::cout << "tricky with pointers!" << "\n";
    cout << "X: " << p1.x << " Y: " << p1.y << "\n";
    cout << "X: " << p2.x << " Y: " << p2.y << "\n";


    return 0;
}
