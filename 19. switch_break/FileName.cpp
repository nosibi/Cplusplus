#include <iostream>
using namespace std;

int main() {
	/*
	switch (integer-expression)
	{
	case label1:
	     code#1

	case label2:
	     code#2

	case label3:
	     code#3

	case label4:
	     code#4

	case label5:
		 code#5
	}
	*/
	
	int a;
	cout << "숫자를 입력하세요" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "입력하신 값은 1입니다" << endl;
		break;
	case 2:
		cout << "입력하신 값은 2입니다" << endl;
		break;
	case 3:
		cout << "입력하신 값은 3입니다" << endl;
		break;
	case 4:
		cout << "입력하신 값은 4입니다" << endl;
		break;
	case 5:
		cout << "입력하신 값은 5입니다" << endl;
		break;
	}
	cout << "switch 구문이 끝났습니다";


	return 0;
}