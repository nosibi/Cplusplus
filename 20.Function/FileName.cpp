#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);


int main() {
	int a;
	cout << "�ϳ��� ���� �Է��Ͻÿ�" << endl;
	cin >> a;
	cheers(a);
	
	int b;
	cout << "���� ������ ���̸� �Է��Ͻÿ�" << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << "�Դϴ�" << endl;

}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;

	}

}

float circle(int x) {
	return x * x * PIE;
}

/*
	����Ǿ�� �ϴ� �͵�

	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��
	*/

	/*
	�Լ��� ����

	1. ���ϰ��� �ִ� Ÿ��
	typeName functionName(parameter)
	{
	     statements(s);
		 return value;
	}

	2. ���ϰ��� ���� Ÿ��
	void functionName(parameter)
	{

	     statements(s);
		 return; // ������ �� ����
	}
	*/