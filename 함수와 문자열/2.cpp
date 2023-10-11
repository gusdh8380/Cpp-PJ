#include <iostream>
using namespace std;
//인라인 함수, 디폴트 인수 사용
inline double cal_volume(double r, double n=10) {
	double vol;
	vol = (4.0 / 3.0) * 3.14 * pow(r, 3);

	return vol;
}


int main() {
	double radius;
	double volume;
	std::cout << "반지름을 입력하시오 :" << std::endl;
	std::cin >> radius;
	volume = cal_volume(radius);

	std::cout << "구의 부피는 :" <<volume<< std::endl;

}