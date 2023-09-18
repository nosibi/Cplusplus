#include <iostream>

using namespace std;

int main() {

	//1. 변수란? 변할 수 있는 수
	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)
	*/

	/*
	1.숫자로 시작할 수 없음
	2. c++에서 사용하고 있는 키워드는 사용 불가
	3. white space(여백) 사용 불가
	ex)
	int 7aa;
	int return;
	int aa aa;
	*/
	int a; //int라는 자료형에 a라는 이름의 변수 선언
	a = 7; // 선언된 변수에 값을 넣음

	int b = 3; // 선언된 동시에 값을 넣는다 == 초기화

	a = 5; b = 10; //변수는 넣는 값을 변경하면 바꿀 수 있음

	// 변수는 사용되기 이전에 정의되어야 함(선언 -> 삽입)
	cout << a << endl << b << endl;

	cout << "a = " << a << endl << "b = " << b << endl;

	/* { int c;
	{ d = 4;
	c = 3;

	}int d; }
	*/

	// 변수의 주소값(어디에 저장되는지)
	cout << "a의 주소값은 " << &a << endl << "b의 주소값은 " << &b;

	return 0;

}