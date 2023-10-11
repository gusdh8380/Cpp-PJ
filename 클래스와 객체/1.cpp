#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	int age;

public:
	void set(string name, int age);
	void print();
};

void Person::set(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Person::print()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

int main()
{
	Person p;

	p.set("��ö��", 21);
	p.print();

	return 0;
}