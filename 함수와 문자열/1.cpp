#include <iostream>
using namespace std;

int maximum(int x,int y,int z) {
	int max =0;
	int list[] = { x,y,z };
	for (int i = 0; i < 3; i++)
		if (max < list[i])
			max = list[i];

	std::cout << "���� ū ������ :" << max<<std::endl;
	
	return 0;
}


int main() {
	int a;
	int b;
	int c;

	std::cout << "3���� ������ �Է��Ͻÿ�" << std::endl;
	std::cin >> a>>b>>c ;

	maximum(a, b, c);


}

