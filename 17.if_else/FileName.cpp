#include <iostream>
using namespace std;

int main() {

	// 분기 구문 : if 구문
	/*if (조건)-> true or false 구분(False일 경우 다음 구문으로 넘어감)
		코드*/
	if (true)
		cout << "조건이 참입니다.";

	if (false)
		cout << "조건이 거짓입니다.";

	cout << " 프로그램이 종료되었습니다.";

	if (true) {
		cout << "조건이 ";
		cout << "참입니다" << endl;

	}
	// else문
	if (false) {
		cout << "조건이 거짓입니다.";
	}
	else {
		cout << "조건이 ";
		cout << "거짓입니다.";
	}
	cout << endl;

	// 확장

	if (false)
		cout << "else로";
	else {
		if (true)
			cout << "선행되는 조건문이 거짓";
		else
			cout << "if문이 거짓";
	}

	return 0;
}