#include <iostream>
#include <cstring>

// strlen ���ڿ��� ���̸� ��ȯ, cstring�̶�� ������Ͽ� �����Ǿ� ����
// sizeof ������ byte�� ũ�⸦ ��ȯ
// cin >> ������� �Է°��� ���� ���� ����
// cin.getline() whitespace�� �־ �Է°��� ����

using namespace std;

int main() {

	const int size = 15;
    char name[size];
	char name2[size] = "123man";

	cout << "�ȳ��ϼ���. ���� " << name2 << " �Դϴ�!. ������ ��� �ǽó���?\n";
	//cin >> name;
	cin.getline(name, size);
	cout << "��, " << name << "��, ����� �̸��� " << strlen(name) << "���Դϴ�\n";
	cout << sizeof(name) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: " << name2 << endl;


	//c++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string

	/*
	c ��Ÿ�Ͽ��� string ��ü�� �ʱ�ȭ�� �� ����
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ���� ����
	cout�� ����Ͽ� string ��ü�� ���÷��� ����
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ���� ���� ����	

	�迭�� �ٸ� �迭�� ��°�� ���� �Ұ�
	-> string������ ����
	*/

	char ch1[20];
	char ch2[20] = "tiger";
	//ch1 = ch2; �Ұ���

	string str1;
	string str2 = "cat";
	str1 = str2;

	cout << str1 << endl;
	cout << str1[1] << endl;
	// 1.string�� char�� �ٸ��� �迭�� ����� ���������� �ʾƵ� ��.
	// 2. �ٸ� �迭�� ���� ����




	return 0;
}