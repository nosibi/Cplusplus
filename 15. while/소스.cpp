#include <iostream>

using namespace std;

int main() {
	//while ��, do while ��
	// ( )���δ� bool�� ������ false(=0)�� ��� �ߴ�, True(!=0)�� ��� ��� ����
	/*
	while �⺻����

	int i = 0;
	while (i < 3) {
		//code
		i++;
	}
	*/
	
	// while ����
	string str = "combo";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	// while (int i = 0;) while�������� counter�� �Ұ�ȣ ������ ���� �� ����
	cout << "----------" << endl;

	// for, while ��
	for (int k = 0; k < 5; k++) {
		cout << "for�� �Դϴ�." << endl;
	}

	int j = 0;
	while (j < 4) {
		cout << "while�� �Դϴ�." << endl;
		j++;
	}
	//cout << k << endl; counter���� �ܺο��� ȣ�� �Ұ�
	cout << j << endl;
	
	cout << "----------" << endl;

	// do while
	int a = 0;
	do {
		cout << "while�� �Դϴ�.\n" << endl;
		a++;	
	
	} while (a < 3);

	cout << "----------" << endl;

	/*������
	do while : �ݺ� ���� ���� �� ���� �˻�
	while : ���� �˻� �� �ݺ� ����
		*/
	bool f = false;
	do {
		cout << "do while�� �ݺ� ���� �����մϴ�" << endl;
	} while (f);


	int k = 0;
	do {
		cout << "k�� ���� " << k << endl;
		k++;
	} while (k != 8);

	return 0;
}