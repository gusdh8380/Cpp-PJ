#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int n;

	cout << "문자열을 입력하시오: ";
	getline(cin, s);
	n = s.size() - 1;

	if ((97 < s[0]) && (s[n] < 122))
		s[0] = toupper(s[0]);

	if (s[n] != '.')
		s += '.';

	cout << "결과 문자열: " << s << endl;

	return 0;
}