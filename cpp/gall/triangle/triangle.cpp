#include <iostream>
#include "figure.h" // 클래스를 정의하기 위해 헤더 파일 포함
using namespace std;

Point::Point(int a, int b) // Point 클래스의 생성자
{
    x = a;
    y = b;
}

Point::Point() // Point 클래스의 default 생성자
{

}

void Point::setX(int xpos) // x 좌표를 설정
{
    x = xpos;
}

void Point::setY(int ypos) // y 좌표를 설정
{
    y = ypos;
}

int Point::getX() // x 좌표 값을 리턴함
{
    return x;
}

int Point::getY() // y 좌표 값을 리턴함
{
    return y;
}

void Point::Showinfo() // 삼각형의 꼭짓점들의 좌표와 삼각형의 넓이를 나타냄
{

    Triangle T;
    cout << "Triangle have ";
    T.Showinfo();
    cout << endl;
    cout << "Triangle area is " << T.getArea() << endl;
}
Triangle::Triangle() // myPoints 객체를 초기화시킴
{
    myPoints = new Point[3]();
}

double Triangle::getArea() // 삼각형의 넓이를 구하는 함수
{
    return ((myPoints[1].getX() - myPoints[0].getX()) * myPoints[2].getY()) / 2;
}

void Triangle::Showinfo() // 삼각형의 꼭짓점들의 좌표를 나타내는 함수
{
    for (int i = 0; i < 3; i++)
    {
        cout << "[" << myPoints[i].getX() << ", " << myPoints[i].getY() << "] ";
    }
}

int main(){
    Triangle *myfig = new Triangle();
    myfig->Showinfo();
}
