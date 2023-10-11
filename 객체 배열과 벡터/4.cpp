#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SMS {
	string sender;
	string receiver;
	string text;

public:
	SMS() {
		sender = "";
		receiver = "";
		text = "";
	}
	SMS(string s, string r, string t) {
		sender = s;
		receiver = r;
		text = t;
	}
	void print() {
		cout << "�߽��� :" << sender << " ������ : " << receiver << " ���� : " << text << endl;
	}
};

int main() {
	SMS sms[3]{

		SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"),
		SMS("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."),
		SMS("010-1234-5678", "010-1234-5679", "�ٵ� 8�� ���ʹ� ���� �����ؾ��� �� ���ƿ�.")
	};

	for (auto& elem : sms) {
		elem.print();
	}
	cout << endl;

	vector<SMS> v;
	
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"));
	v.push_back(SMS("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "�ٵ� 8�� ���ʹ� ���� �����ؾ��� �� ���ƿ�."));

	for (auto& elem : v)
		elem.print();

	return 0;
}