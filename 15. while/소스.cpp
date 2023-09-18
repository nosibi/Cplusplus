#include <iostream>

using namespace std;

int main() {
	//while 문, do while 문
	// ( )내부는 bool형 구조로 false(=0)일 경우 중단, True(!=0)일 경우 계속 진행
	/*
	while 기본구조

	int i = 0;
	while (i < 3) {
		//code
		i++;
	}
	*/
	
	// while 예시
	string str = "combo";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	// while (int i = 0;) while문에서는 counter가 소괄호 안으로 들어올 수 없다
	cout << "----------" << endl;

	// for, while 비교
	for (int k = 0; k < 5; k++) {
		cout << "for문 입니다." << endl;
	}

	int j = 0;
	while (j < 4) {
		cout << "while문 입니다." << endl;
		j++;
	}
	//cout << k << endl; counter값을 외부에서 호출 불가
	cout << j << endl;
	
	cout << "----------" << endl;

	// do while
	int a = 0;
	do {
		cout << "while문 입니다.\n" << endl;
		a++;	
	
	} while (a < 3);

	cout << "----------" << endl;

	/*차이점
	do while : 반복 먼저 실행 후 조건 검사
	while : 조건 검사 후 반복 실행
		*/
	bool f = false;
	do {
		cout << "do while은 반복 먼저 실행합니다" << endl;
	} while (f);


	int k = 0;
	do {
		cout << "k의 값은 " << k << endl;
		k++;
	} while (k != 8);

	return 0;
}