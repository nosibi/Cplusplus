#include <iostream>

using namespace std;

int main() {

	// ���� ����
	int r = 3;
	float s = r * r * 3.1415926535;
	cout << s << endl;

	const float PIE = 3.1415926535; //��� ����
	// PIE = 3; -> �����߻���(�ٲ� �� ����)

	int r2 = 3;
	float s2 = r2 * r2 * PIE;
	cout << s2 << endl;
	//1. �ٲ� �ʿ䰡 ���� ��
	//2. �ٲ��� �ȵǴ� ��
	//���
	
	const int k = 8;
	cout << "�� ���� ���� " << k * 3 << endl;

	int p = 4;
	p = 3;
	cout << "p���� " << p << endl;

	//�������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��	
	*/

	int a = 3.141592;
	cout << a << endl;

	//���������� �������� ��ȯ
	//typeName(a) (typeName)a

	char ch = 'M';
	cout << (int)ch << "  " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	float f = 3.5049;
	cout << "f�� �����κ��� " << static_cast<int>(f) << endl;

	//C++
	//static_cast<typeName>

	return 0;
}