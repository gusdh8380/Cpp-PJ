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
		cout << S << "�� � �ܾ ��ũ����� ���ϱ��? ";
		cin >> guess;

		if (r == guess)
		{
			cout << "�����մϴ�." << endl;
			break;
		}
	}

	return 0;
}