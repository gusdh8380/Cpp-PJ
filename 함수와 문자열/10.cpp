#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int c1 = 0, c2 = 0;
	int result;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		result = rand() % 2;

		if (result == 0)
			c1++;
		else
			c2++;
	}

	cout << "������ �ո�: " << c1 << endl;
	cout << "������ �޸�: " << c2 << endl;


	return 0;
}