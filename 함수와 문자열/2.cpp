#include <iostream>
using namespace std;
//�ζ��� �Լ�, ����Ʈ �μ� ���
inline double cal_volume(double r, double n=10) {
	double vol;
	vol = (4.0 / 3.0) * 3.14 * pow(r, 3);

	return vol;
}


int main() {
	double radius;
	double volume;
	std::cout << "�������� �Է��Ͻÿ� :" << std::endl;
	std::cin >> radius;
	volume = cal_volume(radius);

	std::cout << "���� ���Ǵ� :" <<volume<< std::endl;

}