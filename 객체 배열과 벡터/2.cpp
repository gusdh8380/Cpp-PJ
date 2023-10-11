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
	
	cout << "문자열의 개수 : ";
	cin >> n;
	cout << endl;

	vector<string> v(n);

	for (auto& elem : v) {
		cout << "문자열을 입력하시오 : ";
		cin >> elem;
	}

	sort(v.begin(), v.end(),compare);
	
	for (auto& elem : v) {
		cout << elem << endl;
	}


	return 0;
}

