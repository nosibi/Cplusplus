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
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�" << endl;
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�" << endl;
		break;
	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�" << endl;
		break;
	case 4:
		cout << "�Է��Ͻ� ���� 4�Դϴ�" << endl;
		break;
	case 5:
		cout << "�Է��Ͻ� ���� 5�Դϴ�" << endl;
		break;
	}
	cout << "switch ������ �������ϴ�";


	return 0;
}