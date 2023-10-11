#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Contact {
	string name;
	string tel;
public:
		Contact() :name{ "" }, tel{ "" } {}
		Contact(string n, string t) :name{ n }, tel{ t } {}
		string getName() { return name; }
		string getTel() { return tel; }

		void print() {
			cout << "이름을 입력하시오 : " << name << endl;
			cout << "전화번호를 입력하시오 : " << tel << endl;
		}
};

int main() {
	string n, t, s;
	vector<Contact> v(3);

	for (auto& elem : v) {
		cout << "이름을 입력하시오 : ";
		cin >> n;
		cout << "전화번호를 입력하시오 : ";
		cin >> t;

		elem = Contact(n, t);
	}

	cout << "탐색하고 싶은 이름을 입력 : ";
	cin >> s;

	for (auto& elem : v) {
		if (elem.getName() == s)
			elem.print();
	}
	return 0;
}