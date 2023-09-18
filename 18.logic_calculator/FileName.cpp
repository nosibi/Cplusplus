#include <iostream>
using namespace std;

int main() {
	//논리 표현식 : 하나 이상의 조건을 검사할 경우 사용
	//논리합, 논리곱, 논리부정 연산자

	/*
	논리합 연산자 : 좌항 || 우항(둘 중 하나만 true여도 true)
	논리곱 연산자 : 좌항 && 우항(둘 모두 true여야만 true)
	논리부정 연산자 : !(표현식) -> 표현식이 false일 경우 true
	*/

	cout << "당신의 나이를 입력하십시오\n";
	int age;
	cin >> age;

	if (age < 0 || age > 100)
		cout << "거짓말 하시면 안됩니다";

	else {
		if (20 <= age && age <= 29)
			cout << "당신은 20대이군요";

		else
			cout << "당신의 나이를 잘 모르겠습니다";

	}

	return 0;
}