#include <iostream>
using namespace std;

void prt(int n);
const float k = 3.45;

int main() {
	int a;
	cout << "몇 회 반복하실건가요?\n";
	cin >> a;
	prt(a);

	int b;
	cout << "값을 입력하세요\n";
	cin >> b;
	float val = rount(b);
	cout << val;
}

void prt(int n) {
	for (int i = 0; i < n; i++)
		cout << i + 1 << "회 " << "반복합니다" << endl;

}

float rount(int l) {

	return l * l * k;
}