#include <iostream>
#include <math.h>

using namespace std;

double hypot(double x, double y)
{
	double N;
	N = sqrt(pow(x, 2) + pow(y, 2));

	return N;
}

int main()
{
	double x, y;
	double result;

	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> x;
	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> y;

	result = hypot(x, y);

	cout << "����: " << result << endl;

	return 0;
}