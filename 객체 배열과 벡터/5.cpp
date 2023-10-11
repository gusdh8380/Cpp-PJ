#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
	string name;
	double marks;
public:

	Student(string n,double m) : name{n}, marks{m}{}
	Student() :name{ "" }, marks{ 0.0 } {}
	double get_Marks() { return marks; }
	void print() {
		cout << "이름 : " << name << endl;
		cout << "학점 : " << marks << endl;
	}
};

bool compare(Student& a, Student& b) {
	return a.get_Marks() > b.get_Marks();
}

int main() {
	string name;
	double marks;
	int n;
	cout << "입력할 학생 수 : ";
	cin >> n;
	cout << endl;
	vector<Student> v(n);

	cout << "===============================================================" << endl;
	for (auto& elem : v) {
		cout << "이름 : ";
		cin >> name;
		cout << "학점 : ";
		cin >> marks;

		elem = Student(name, marks);
	}
	cout << "===============================================================" << endl;

	sort(v.begin(), v.end(), compare);


	cout << "===============================================================" << endl;
	for (auto& e : v)
		e.print();
	cout << "===============================================================" << endl;
	
	return 0;

}