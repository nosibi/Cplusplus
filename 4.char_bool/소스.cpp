#include <iostream>

using namespace std;

int main() {
	//char : ���� ������
	int a = 77;
	char b = a;
	cout << b << endl;
	// ASCII code�� ���� ���ڿ� �����ϴ� ���� ��µ�

	char n_char = 'H';
	cout << n_char << endl;

	char k; //���� �� ���� ���ǵ� ����
	k = 'A';
	cout << k << endl;
	// char k = "A"; char���� ū ����ǥ�� �Ұ�
	// null ���� 
	// �ѱ��� ASCII code���� ����x ,uni code�� ����ؾ� ��


	// bool : 0 Ȥ�� 1(False / True), 0 �̿ܿ��� ���� 1
	bool p = 0;
	bool o = 1;
	bool i = 10;
	
	cout << p << " " << o << " " << i << endl;

	return 0;
}