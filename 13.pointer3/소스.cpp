#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


struct Mystruct {
	char name[20];
	int age;
};


#define SIZE 20
int main() {

	char animal[SIZE];
	char* ps;

	cout << "동물의 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //실행 시간에 배열의 크기를 결정하는 것이 메모리적 차원에서 더 유리 
	strcpy(ps, animal);

	cout << "입력하신 동물의 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물의 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다" << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다" << endl;
	cout << "복사된 데이터의 주소값은 원본과 다릅니다" << endl;

	//동적 구조체 생성
	//temp* ps = new temp;
	
	Mystruct* temp = new Mystruct;
	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살 이군요!" << endl;


	return 0;
}