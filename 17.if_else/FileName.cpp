#include <iostream>
using namespace std;

int main() {

	// �б� ���� : if ����
	/*if (����)-> true or false ����(False�� ��� ���� �������� �Ѿ)
		�ڵ�*/
	if (true)
		cout << "������ ���Դϴ�.";

	if (false)
		cout << "������ �����Դϴ�.";

	cout << " ���α׷��� ����Ǿ����ϴ�.";

	if (true) {
		cout << "������ ";
		cout << "���Դϴ�" << endl;

	}
	// else��
	if (false) {
		cout << "������ �����Դϴ�.";
	}
	else {
		cout << "������ ";
		cout << "�����Դϴ�.";
	}
	cout << endl;

	// Ȯ��

	if (false)
		cout << "else��";
	else {
		if (true)
			cout << "����Ǵ� ���ǹ��� ����";
		else
			cout << "if���� ����";
	}

	return 0;
}