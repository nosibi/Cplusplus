#include <iostream>
#include  <climits> //드래그 후 F12 누르면 자세하게 나온다

using namespace std;


int main() {

	// 정수형 : 소수부가 없는 수
	// 음의 정수, 0, 양의 정수
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// 변수의 크기에 따른 자료형을 선택하는 것이 메모리를 효율적으로 사용하는 것

	cout << "int는 " << sizeof n_int << "바이트이다" << endl;
	cout << "int형의 바이트 최댓값은" << n_int << " 이다" << endl;

	cout << "short는 " << sizeof n_short << "바이트이다" << endl;
	cout << "short형의 바이트 최댓값은" << n_short << " 이다" << endl;

	cout << "long은 " << sizeof n_long << "바이트이다" << endl;
	cout << "long형의 바이트 최댓값은" << n_long << " 이다" << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다" << endl;
	cout << "long long형의 바이트 최댓값은" << n_llong << " 이다" << endl;

	unsigned short k = -1; // -1은 unsigned가 지원되는 범위가 아니기 때문에 역순으로 출력
	cout << k << endl;

	// short는 -32768부터 32767까지 수를 표현할 수 있음
	// unsigned를 사용할 경우 음의 구간이 전부 양의 구간으로 편입되어 0~65535까지 저장가능
	

	// 실수형 : 소수부가 있는 수
	float a = 3.14;
	int b = 3.14;
	cout << a << " / " << b << endl;



	return 0;
}