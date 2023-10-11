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

	cout << "직각삼각형의 한변: ";
	cin >> x;
	cout << "직각삼각형의 한변: ";
	cin >> y;

	result = hypot(x, y);

	cout << "빗변: " << result << endl;

	return 0;
}