#include <iostream>
#include <string>

using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;
public:
	void set(string name, int RAM, double cpu_speed);
	void print();
};

void Computer::set(string name, int RAM, double cpu_speed)
{
	this->name = name;
	this->RAM = RAM;
	this->cpu_speed = cpu_speed;
}

void Computer::print()
{
	cout << "이름: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU 속도: " << cpu_speed << endl;
}

int main()
{
	Computer c;

	c.set("오피스 컴퓨터", 8, 4.2);
	c.print();

	return 0;
}