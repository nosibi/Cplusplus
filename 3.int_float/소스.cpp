#include <iostream>
#include  <climits> //�巡�� �� F12 ������ �ڼ��ϰ� ���´�

using namespace std;


int main() {

	// ������ : �Ҽ��ΰ� ���� ��
	// ���� ����, 0, ���� ����
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// ������ ũ�⿡ ���� �ڷ����� �����ϴ� ���� �޸𸮸� ȿ�������� ����ϴ� ��

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�" << endl;
	cout << "int���� ����Ʈ �ִ���" << n_int << " �̴�" << endl;

	cout << "short�� " << sizeof n_short << "����Ʈ�̴�" << endl;
	cout << "short���� ����Ʈ �ִ���" << n_short << " �̴�" << endl;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�" << endl;
	cout << "long���� ����Ʈ �ִ���" << n_long << " �̴�" << endl;

	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�" << endl;
	cout << "long long���� ����Ʈ �ִ���" << n_llong << " �̴�" << endl;

	unsigned short k = -1; // -1�� unsigned�� �����Ǵ� ������ �ƴϱ� ������ �������� ���
	cout << k << endl;

	// short�� -32768���� 32767���� ���� ǥ���� �� ����
	// unsigned�� ����� ��� ���� ������ ���� ���� �������� ���ԵǾ� 0~65535���� ���尡��
	

	// �Ǽ��� : �Ҽ��ΰ� �ִ� ��
	float a = 3.14;
	int b = 3.14;
	cout << a << " / " << b << endl;



	return 0;
}