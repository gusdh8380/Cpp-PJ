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

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> pw;

	if (U(pw) && L(pw) && N(pw))
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;

	return 0;
}