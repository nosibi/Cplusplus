#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	int a = 77;
	char b = a;
	cout << b << endl;
	// ASCII code에 따라 숫자에 대응하는 문자 출력됨

	char n_char = 'H';
	cout << n_char << endl;

	char k; //선언 후 변수 정의도 가능
	k = 'A';
	cout << k << endl;
	// char k = "A"; char형에 큰 따옴표는 불가
	// null 문자 
	// 한글은 ASCII code에서 지원x ,uni code를 사용해야 함


	// bool : 0 혹은 1(False / True), 0 이외에는 전부 1
	bool p = 0;
	bool o = 1;
	bool i = 10;
	
	cout << p << " " << o << " " << i << endl;

	return 0;
}