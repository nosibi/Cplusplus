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

	cout << "������ �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //���� �ð��� �迭�� ũ�⸦ �����ϴ� ���� �޸��� �������� �� ���� 
	strcpy(ps, animal);

	cout << "�Է��Ͻ� ������ �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ������ �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�" << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�" << endl;
	cout << "����� �������� �ּҰ��� ������ �ٸ��ϴ�" << endl;

	//���� ����ü ����
	//temp* ps = new temp;
	
	Mystruct* temp = new Mystruct;
	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!" << endl;


	return 0;
}