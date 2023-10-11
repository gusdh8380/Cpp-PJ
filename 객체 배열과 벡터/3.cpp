#include <iostream>
#include <vector>

using namespace std;

class Rect {
	int w, h;
public:
	Rect() :w{ 0 }, h{ 0 } {}
	Rect(int w, int h) : w{ w }, h{ h } {}
	int area() { return w * h; };
	void print() {
		cout << "(" << w << "," << h << ")" << endl;
	}
};

int main()
{
	int num;
	int width, height;

	cout << "사각형의 개수: ";
	cin >> num;

	vector<Rect> vec(num);

	for (auto& elem : vec)
	{
		cout << "사각형의 폭: ";
		cin >> width;
		cout << "사각형의 높이: ";
		cin >> height;

		elem = Rect(width, height);
	}

	for (auto& elem : vec)
	{
		if (elem.area() > 100)
			elem.print();
	}

	return 0;
}