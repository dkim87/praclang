
class Point{
public:
    int x;
    int y;
    Point(int,int);
    Point();
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void Showinfo();
};

class Triangle{
public:
    Point *myPoints;
    Triangle();
    double getArea();
    void Showinfo();
};
