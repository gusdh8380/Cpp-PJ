#include <iostream>
#include <string>

using namespace std;

bool U(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool L(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool N(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}

int main()
{
	string pw;

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (U(pw) && L(pw) && N(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	return 0;
}