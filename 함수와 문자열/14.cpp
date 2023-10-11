#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	string S, r = "apple", guess;
	int index1, index2;

	srand((unsigned int)time(NULL));

	S = r;

	for (int i = 0; i < S.size(); i++)
	{
		index1 = rand() % 5;
		index2 = rand() % 5;

		swap(S[index1], S[index2]);
	}

	while (true)
	{
		cout << S << "은 어떤 단어가 스크램블된 것일까요? ";
		cin >> guess;

		if (r == guess)
		{
			cout << "축하합니다." << endl;
			break;
		}
	}

	return 0;
}