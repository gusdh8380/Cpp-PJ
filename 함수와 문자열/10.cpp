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

	cout << "동전의 앞면: " << c1 << endl;
	cout << "동전의 뒷면: " << c2 << endl;


	return 0;
}