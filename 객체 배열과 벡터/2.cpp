#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
bool compare(string& s, string& s1) {
	return s < s1;
}

int main() {

	int n;
	
	cout << "���ڿ��� ���� : ";
	cin >> n;
	cout << endl;

	vector<string> v(n);

	for (auto& elem : v) {
		cout << "���ڿ��� �Է��Ͻÿ� : ";
		cin >> elem;
	}

	sort(v.begin(), v.end(),compare);
	
	for (auto& elem : v) {
		cout << elem << endl;
	}


	return 0;
}

