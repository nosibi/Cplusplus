#include <iostream>

using namespace std;

int main() {
	// �迭 ��� �ݺ���
	int a[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	 }

	cout << "\n";

	for (int i : a) {
		cout << i;
	}

	cout << "\n";

	int b[10] = { 1, 2, 3, 4, 5 }; //�Ҵ�� ������ ���Ұ� ���� ���
	for (int j : b) {
		cout << j; //������ 0���� ä����
	}


	cout << "\n";

	// ��ø loop : 2���� �迭
	int temp[4][5] = {
		{1,2,3,4,5},
		{11,12,13,14,15},
		{21,22,23,24,25},
		{31,32,33,34,35}
	}; //temp�� 4���� ���Ҹ� ������ �� 4���� ���Ҵ� ���� 5���� ���Ҹ� ����

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	//����
	int k[5] = { 1,2,3,4,5 };
	for (int p = 0; p < 4; p++) {
		cout << "k�� "<< p << "��° ���Ҵ� " << k[p] << endl;

	}

	for (int i : k){

		cout << "k�� ����" << i << endl;
	
	}

	int l[3][2] = {
		{1,2},
		{3,4},
		{5,6}

	};

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 2; col++) {

			cout << l[row][col] << " ";
		}
		cout << "\n";
	}


	return 0;
}