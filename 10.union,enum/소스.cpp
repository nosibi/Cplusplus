#include <iostream>

using namespace std;

int main() {

	//공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음
	//메모리 절약이 가능

	union myunion {

		int intval;
		long longval;
		float floatval;

	};

	myunion test;
	test.intval = 3;
	cout << test.intval << endl;
	test.longval = 33;
	cout << test.intval << endl;
	cout << test.longval << endl;
	test.floatval = 3.3;
	cout << test.intval << endl;
	cout << test.longval << endl;
	cout << test.floatval << endl;
	
	cout << "---------------" << endl;
	
	//열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet}; //{0,1,2,3,.....7}
	
	/*
	1. spectrum을 새로운 데이터형 이름으로 만든다
	2. red,orange,yellow...등등 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다	
	*/
	spectrum a = orange;
	cout << a << endl;
	//열거자들끼리 산술 연산은 지원되지 않음
	//ex. spectrum a = orange + green = 1 + 3 = 4 = blue 이런 형태는 안됨

	int b;
	b = blue;
	b = blue + 3;
	cout << "blue는 4이므로 b값은 " << b << endl;
	// 정수형 변수에서는 산술 연산이 가능하다

	enum modification {zero = 0, two = 2, four = 4, six = 6, seven, eight, nine}; //초기화 가능하며 반드시 정수여야 함, 초기화되지 않은 부분은 앞 부분에서 1씩 커짐
	modification c = four;
	cout << c << endl;

	int d = seven;
	cout << "d는 6+1이므로 " << d << "이다" << endl;

	return 0;
}