#include <iostream>

using namespace std;

int main() {
	// 배열 기반 반복문
	int a[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	 }

	cout << "\n";

	for (int i : a) {
		cout << i;
	}

	cout << "\n";

	int b[10] = { 1, 2, 3, 4, 5 }; //할당된 값보다 원소가 적을 경우
	for (int j : b) {
		cout << j; //공백은 0으로 채워짐
	}


	cout << "\n";

	// 중첩 loop : 2차원 배열
	int temp[4][5] = {
		{1,2,3,4,5},
		{11,12,13,14,15},
		{21,22,23,24,25},
		{31,32,33,34,35}
	}; //temp는 4개의 원소를 가지며 그 4개의 원소는 각각 5개의 원소를 가짐

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	//연습
	int k[5] = { 1,2,3,4,5 };
	for (int p = 0; p < 4; p++) {
		cout << "k의 "<< p << "번째 원소는 " << k[p] << endl;

	}

	for (int i : k){

		cout << "k의 원소" << i << endl;
	
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