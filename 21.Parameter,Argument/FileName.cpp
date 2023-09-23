#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

	int time1, time2;
	cout << "정수를 입력하시오.\n";
	cin >> time1;
	cout << "정수를 한 번 더 입력하시오.\n";
	cin >> time2;
	helloCPP(time1, time2);

	return 0;
}

void helloCPP(int a, int b) {
	for (int i = 0; i < a; i++)
		cout << "Hello\n";

	for (int i = 0; i < b; i++)
		cout << "C++\n";

}

// Parameter 함수의 특성을 나타내는 매개변수
// Argument 함수를 호출할 때 실제 사용되는 변수, 전달인자