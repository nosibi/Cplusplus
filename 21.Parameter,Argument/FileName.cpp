#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

	int time1, time2;
	cout << "������ �Է��Ͻÿ�.\n";
	cin >> time1;
	cout << "������ �� �� �� �Է��Ͻÿ�.\n";
	cin >> time2;
	helloCPP(time1, time2);

	return 0;
}

void helloCPP(int a, int b) {
	for (int i = 0; i < a; i++)
		cout << "Hello\n";

	for (int i = 0; i < b; i++)
		cout << "C++\n";

}

// Parameter �Լ��� Ư���� ��Ÿ���� �Ű�����
// Argument �Լ��� ȣ���� �� ���� ���Ǵ� ����, ��������