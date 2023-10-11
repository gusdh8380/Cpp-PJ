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
		cout << "발신자 :" << sender << " 수신자 : " << receiver << " 내용 : " << text << endl;
	}
};

int main() {
	SMS sms[3]{

		SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"),
		SMS("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."),
		SMS("010-1234-5678", "010-1234-5679", "근데 8장 부터는 조금 집중해야할 것 같아요.")
	};

	for (auto& elem : sms) {
		elem.print();
	}
	cout << endl;

	vector<SMS> v;
	
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"));
	v.push_back(SMS("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."));
	v.push_back(SMS("010-1234-5678", "010-1234-5679", "근데 8장 부터는 조금 집중해야할 것 같아요."));

	for (auto& elem : v)
		elem.print();

	return 0;
}