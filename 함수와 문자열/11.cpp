#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int n;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, s);
	n = s.size() - 1;

	if ((97 < s[0]) && (s[n] < 122))
		s[0] = toupper(s[0]);

	if (s[n] != '.')
		s += '.';

	cout << "��� ���ڿ�: " << s << endl;

	return 0;
}