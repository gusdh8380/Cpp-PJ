#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	int max;
	int min;
	cout << "������ ���� : ";
	cin >> n;
	cout << endl;

	vector<int> v(n);

	for (auto& elem : v) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> elem;
	}

	sort(v.begin(), v.end());
	min = v.front();
	max = v.back();
	cout << "�ִ� " << max << endl;
	cout << "�ּҰ� " << min << endl;

	return 0;
}

