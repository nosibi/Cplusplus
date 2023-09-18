#include <iostream>

using namespace std;

int main() {
	//변수 선언 과정

	int val = 3;

	int* k;
	k = &val;

	
	cout << k << endl;
	cout << *k << endl;


	//C++ : 객체지향 프로그래밍
	/*
	컴파일(코드를 읽는) 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
	- 배열 생성
	재래적, 절차적 프로그래밍 : 배열의 크기가 컴파일 시간에 미리 결정되어야 함
	객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정 가능
	*/

	// 포인터 : 사용할 주소에 이름을 붙인다
	// 즉, 포인터는 포인터의 이름이 주소를 나타냄
	// 간접값 연산자, 간접 참고 연산자 *

	// int *a; // C style
	// int* b; // C++ style
	// int* c, d; //c는 포인터 변수, d는 int형 변수

	int a = 6; //수
	int* b; //위치, 포인터에 어떠한 정수를 대입하는 것은 아무 의미 없음
	b = &a;

	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;

	*b = *b +1;
	cout << "이제 a의 값은 " << a << endl;

	return 0;
}