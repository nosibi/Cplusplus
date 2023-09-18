#include <iostream>

using namespace std;

int main() {

	//����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����
	//�޸� ������ ����

	union myunion {

		int intval;
		long longval;
		float floatval;

	};

	myunion test;
	test.intval = 3;
	cout << test.intval << endl;
	test.longval = 33;
	cout << test.intval << endl;
	cout << test.longval << endl;
	test.floatval = 3.3;
	cout << test.intval << endl;
	cout << test.longval << endl;
	cout << test.floatval << endl;
	
	cout << "---------------" << endl;
	
	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet}; //{0,1,2,3,.....7}
	
	/*
	1. spectrum�� ���ο� �������� �̸����� �����
	2. red,orange,yellow...��� 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� �����	
	*/
	spectrum a = orange;
	cout << a << endl;
	//�����ڵ鳢�� ��� ������ �������� ����
	//ex. spectrum a = orange + green = 1 + 3 = 4 = blue �̷� ���´� �ȵ�

	int b;
	b = blue;
	b = blue + 3;
	cout << "blue�� 4�̹Ƿ� b���� " << b << endl;
	// ������ ���������� ��� ������ �����ϴ�

	enum modification {zero = 0, two = 2, four = 4, six = 6, seven, eight, nine}; //�ʱ�ȭ �����ϸ� �ݵ�� �������� ��, �ʱ�ȭ���� ���� �κ��� �� �κп��� 1�� Ŀ��
	modification c = four;
	cout << c << endl;

	int d = seven;
	cout << "d�� 6+1�̹Ƿ� " << d << "�̴�" << endl;

	return 0;
}