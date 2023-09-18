#include <iostream>
#include <cstring>

// strlen 문자열의 길이를 반환, cstring이라는 헤더파일에 전가되어 있음
// sizeof 변수의 byte의 크기를 반환
// cin >> 사용자의 입력값을 꺽새 옆에 저장
// cin.getline() whitespace가 있어도 입력값을 받음

using namespace std;

int main() {

	const int size = 15;
    char name[size];
	char name2[size] = "123man";

	cout << "안녕하세요. 저는 " << name2 << " 입니다!. 성함이 어떻게 되시나요?\n";
	//cin >> name;
	cin.getline(name, size);
	cout << "음, " << name << "씨, 당신의 이름은 " << strlen(name) << "자입니다\n";
	cout << sizeof(name) << "바이트 크기의 배열에 저장되었습니다. \n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: " << name2 << endl;


	//c++에서 문자열을 다루는 방법 중 하나인 string

	/*
	c 스타일에서 string 객체를 초기화할 수 있음
	cin을 사용하여 string 객체에 키보드 입력을 저장 가능
	cout을 사용하여 string 객체를 디스플레이 가능
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 대해 접근 가능	

	배열을 다른 배열에 통째로 대입 불가
	-> string에서는 가능
	*/

	char ch1[20];
	char ch2[20] = "tiger";
	//ch1 = ch2; 불가능

	string str1;
	string str2 = "cat";
	str1 = str2;

	cout << str1 << endl;
	cout << str1[1] << endl;
	// 1.string은 char과 다르게 배열의 사이즈를 지정해주지 않아도 됨.
	// 2. 다른 배열에 삽입 가능




	return 0;
}