#include <iostream>

using namespace std;

int main() {

	// 반복문이란?
	

	//char a[10] = { 'a','b','c','d','e' };

	/*cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;*/
	// 요소가 무한개에 가깝다면 어떻게 출력할 것인지?
	// for문

	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다" << endl;

	}
	/*
	1. 반복문에 사용할 카운터의 값을 초기화, i = 0
	2. 반복문을 진행할 것인지 조건 검사, i < 5
	3. 반복문 몸체를 수행 {몸체} 
	4. 카운터의 값을 변화, i++ 선언(구문안에서 선언해주어도 무방)
	*/
	// 증가연산자, 감소연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl;
	cout << "++b는 " << ++b << endl;
	cout << "이제 a는 " << a << " b는 " <<  b << endl;
	// n++ 은 값을 판단 후 증가, ++n는 증가 후 값을 판단

	for (int k = 0; k < 6;) {
		cout << k << "번째입니다" << endl;
		k = k + 1;
	}

	cout << "------------------" << endl;

	for (int p = 5; p > 0; p--) {
		cout << p << "번째입니다" << endl;
	}
	/*
	좌항이 우항보다

	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다
	*/
	for (int c = 1; c <= 8; c++) {
		cout << c  << endl;

	}


	return 0;
}