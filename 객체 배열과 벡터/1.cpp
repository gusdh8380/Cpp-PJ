#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	int max;
	int min;
	cout << "정수의 개수 : ";
	cin >> n;
	cout << endl;

	vector<int> v(n);

	for (auto& elem : v) {
		cout << "정수를 입력하시오 : ";
		cin >> elem;
	}

	sort(v.begin(), v.end());
	min = v.front();
	max = v.back();
	cout << "최댓값 " << max << endl;
	cout << "최소값 " << min << endl;

	return 0;
}

