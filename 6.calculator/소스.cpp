#include <iostream>

using namespace std;

int main() {

	
	/*
	+ : 2���� �ǿ������� ���� ���
	- : 1��° �ǿ����ڿ��� 2��° �ǿ������� ���� ���
	* : 2�� �ǿ������� ��
	/ : 1��° �ǿ����ڿ��� 2��° �ǿ����ڸ� ����
	>> : 2���� �ǿ����ڰ� ��� �����̸� ������� '��'
	% : 1��° �ǿ����ڸ� 2��° �ǿ����ڷ� �������� ����(�Ǽ������� ��� �Ұ�)
	*/
	int a = 10;
	int b = 3;
	int c = 5;
	int multiple = a + b * c; //c++�� �Ϲ����� ������� ���� ������ ������
	int multiple2 = a / b * c;
	cout << multiple << endl;
	cout << multiple2 << endl;
	
	float p = 10;
	int k = 3;
	cout << p / k << endl; // �ϳ��� �Ǽ��̸� �Ǽ������� �����


	//auto
	auto n = 100; //n�� int
	auto x = 1.5; //x�� float
	auto y = 1.3e12L; //y�� long long


	return 0;
}