//coust 사용하기
// 1번 코드에서 스마트 포인터로 재구성 하기
#include<iostream>
#include<cstdlib> // for rand()
#include<ctime> // for time()

using namespace std;

class Point {
   int x, y;

public:
   Point(const int x,const int y) : x(x), y(y) {}
   Point() : x{ 20 }, y{ 10 } {}
   void setX(const int x) { this->x = x; }
   void setY(const int y) { this->y = y; }
   int getX() const { return x; }
   int getY() const { return y; }
};

int main() {
   Point* p = new Point();
   //const Point* const p = new Point();  
   //위 식에도 const를 붙인다면 오류가 발생한다
   p->setX(30);
   p->setY(30);
   delete p;
   return 0;
}