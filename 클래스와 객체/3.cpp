#include <iostream>

using namespace std;

class sum {
	int n1, n2;

public:
	void init(int x, int y);
	inline int add();
};

void sum::init(int x, int y)
{
	n1 = x;
	n2 = y;
}

inline int sum::add()
{
	return n1 + n2;
}

int main()
{
	int num1, num2;

	cout << "ù ��° ����: ";
	cin >> num1;
	cout << "�� ��° ����: ";
	cin >> num2;

	sum s;


	s.init(num1, num2);

	cout << "���� ���: " << s.add() << endl;

	return 0;
}