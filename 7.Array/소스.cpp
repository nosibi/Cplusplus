#include <iostream>

using namespace std;

int main() {

	/*
	c++은 복합데이터형을 제공
	사용자 정의대로 새로운 데이터형 생성 가능
	복합데이터형 : 기본 정수형과 부동소수점형(실수)의 조합
	*/

	//Array(배열) : 같은 데이터형의 집합
	//typeName arrayName[arraySize];
	short month[12] = { 1,2,3 };
	cout << month[0] << endl;
	cout << month[3] << endl;

	/*
	1. 배열 원소에 대입한 값들은 콤마로 구분하여 중괄호로 묶어 선언 ex){0,0,0,0}
	2. 초기화를 선언 이후 나중에 할 수 없음
	3. 배열을 다른 배열에 통째로 대입할 수 없다 ex) year = month[12]  (x)
	4. 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공 가능 ex) short year[5] = {0,1,2,3}
	5. 배열을 부분적으로 초기화하면 나머지 원소들은 모두 0으로 설정 ex) month[4] = 0
	6. 배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장
	ex) year[] = {1,2,3}  -> year[3]으로 저장됨
	*/
	short year[] = { 1,2,3 };
	cout << year[3] << endl; //의미없는 값이 출력됨
	cout << year << endl;

	//문자열 : 문자의 배열
	char a[6] = { 'H','e','l','l','o', '\0'}; //Null문자를 이용
	cout << a << endl;
	
	char b[] = "Hello"; //쌍따옴표를 이용하여 초기화하게 되면 명시적으로 Null문자를 포함함
	cout << b << endl;
	
	return 0;
}