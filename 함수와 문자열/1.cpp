#include <iostream>
using namespace std;

int maximum(int x,int y,int z) {
	int max =0;
	int list[] = { x,y,z };
	for (int i = 0; i < 3; i++)
		if (max < list[i])
			max = list[i];

	std::cout << "가장 큰 정수는 :" << max<<std::endl;
	
	return 0;
}


int main() {
	int a;
	int b;
	int c;

	std::cout << "3개의 정수를 입력하시오" << std::endl;
	std::cin >> a>>b>>c ;

	maximum(a, b, c);


}

