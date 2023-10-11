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
	cout << "ÀÌ¸§ : " << name << endl;
	cout << "³ªÀÌ : " << age << endl;
}

int main()
{
	Person p;

	p.set("±èÃ¶¼ö", 21);
	p.print();

	return 0;
}