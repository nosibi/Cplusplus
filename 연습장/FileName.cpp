#include <iostream>
using namespace std;

void prt(int n);
const float k = 3.45;

int main() {
	int a;
	cout << "�� ȸ �ݺ��Ͻǰǰ���?\n";
	cin >> a;
	prt(a);

	int b;
	cout << "���� �Է��ϼ���\n";
	cin >> b;
	float val = rount(b);
	cout << val;
}

void prt(int n) {
	for (int i = 0; i < n; i++)
		cout << i + 1 << "ȸ " << "�ݺ��մϴ�" << endl;

}

float rount(int l) {

	return l * l * k;
}