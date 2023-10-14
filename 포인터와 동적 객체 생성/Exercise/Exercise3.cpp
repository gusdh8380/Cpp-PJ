/*100개의 Point 객체를 저장할 수 있는 동적 객체 배열을 생성하고
 Point 객체에 값을 난수로 채우기*/
#include<iostream>
#include<cstdlib> // for rand()
#include<ctime> // for time()

using namespace std;

class point {
   int x, y;

public:
   point(int x, int y) : x(x), y(y) {}
   point() : x{ 20 }, y{ 10 } {}
   void setX(int x) { this->x = x; }
   void setY(int y) { this->y = y; }
   int getX() { return x; }
   int getY() {
      return y;
   }
};

int main() {
   srand(time(0)); // initialize random seed based on current time

   point* points = new point[100]; // create dynamic array of 100 point objects

   for (int i = 0; i < 100; ++i) {
      int random_x = rand(); // generate a random number for x
      int random_y = rand(); // generate a random number for y
      points[i].setX(random_x);
      points[i].setY(random_y);

      cout << "Point " << i << ": (" << points[i].getX() << ", " << points[i].getY() << ")" << endl;
   }

   delete[] points; // don't forget to delete the array when you're done with it!

   return 0;
}