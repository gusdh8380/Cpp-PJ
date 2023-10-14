// 1번 코드에서 스마트 포인터로 재구성 하기
#include<iostream>
#include<cstdlib> // for rand()
#include<ctime> // for time()

using namespace std;

class Point {
   int x, y;

public:
   Point(int x, int y) : x(x), y(y) {}
   Point() : x{ 20 }, y{ 10 } {}
   void setX(int x) { this->x = x; }
   void setY(int y) { this->y = y; }
   int getX() { return x; }
   int getY() {
      return y;
   }
};

int main() {
   unique_ptr<Point> p(new Point(100,200));
   //다른 구현 방법! auto p = make_unique<Point>();
   p->setX(30);
   p->setY(30);
   
   return 0;
}