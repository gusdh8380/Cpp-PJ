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
			cout << "�̸��� �Է��Ͻÿ� : " << name << endl;
			cout << "��ȭ��ȣ�� �Է��Ͻÿ� : " << tel << endl;
		}
};

int main() {
	string n, t, s;
	vector<Contact> v(3);

	for (auto& elem : v) {
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> n;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> t;

		elem = Contact(n, t);
	}

	cout << "Ž���ϰ� ���� �̸��� �Է� : ";
	cin >> s;

	for (auto& elem : v) {
		if (elem.getName() == s)
			elem.print();
	}
	return 0;
}