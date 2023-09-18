#include <iostream>

using namespace std;

int main() {

	// 원의 넓이
	int r = 3;
	float s = r * r * 3.1415926535;
	cout << s << endl;

	const float PIE = 3.1415926535; //상수 선언
	// PIE = 3; -> 오류발생함(바뀔 수 없다)

	int r2 = 3;
	float s2 = r2 * r2 * PIE;
	cout << s2 << endl;
	//1. 바뀔 필요가 없는 수
	//2. 바뀌어서는 안되는 수
	//상수
	
	const int k = 8;
	cout << "두 수의 곱은 " << k * 3 << endl;

	int p = 4;
	p = 3;
	cout << "p값은 " << p << endl;

	//데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때	
	*/

	int a = 3.141592;
	cout << a << endl;

	//강제적으로 데이터형 변환
	//typeName(a) (typeName)a

	char ch = 'M';
	cout << (int)ch << "  " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	float f = 3.5049;
	cout << "f의 정수부분은 " << static_cast<int>(f) << endl;

	//C++
	//static_cast<typeName>

	return 0;
}