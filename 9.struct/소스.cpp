#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	//�迭 : ���� ���������� ����

	//ex) �౸����
	/*
	string name;
	string position;
	float height;
	float weight;
	*/

	/*struct mystruct {

		string name;
		string position;
		float height;
		float weight;

	} B;

	mystruct A;
	A.name = "son";
	A.position = "striker";
	A.height = 180;
	A.weight = 94;

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {



	};
	cout << B.name << endl;

	mystruct C[2] = {

		{"Kim","keeper",190,60},
		{"Lee","striker",160,50}
	};
	cout << C[0].height << endl;


	struct SBD {
		float Squat;
		float BenchPress;
		float DeadLift;
	};

	SBD K = 
	{
	200,120,220
	
	
	
	};
	cout << "K�� ����Ʈ �߷��� " << K.Squat << "KG �Դϴ�." << endl;

	SBD Kim;
	Kim.Squat = 180;
	Kim.BenchPress = 100;
	Kim.DeadLift = 200;
	cout << "Kim�� ��ġ������ �߷��� " << Kim.BenchPress << "KG �Դϴ�." << endl;

	SBD Lee[3] = {
		{170,90,200},
		{160,80,180},
		{150,70,170}

	};
	cout << "Lee�� ���帮��Ʈ �߷��� " << Lee[1].DeadLift << "KG �Դϴ�." << endl;


	struct struct1
	{
		string name;
		string Class;
		int age;
			
	};
	struct1 a[3] = {
		{"LEE","B",18},
		{"Na","C",29},
		{"Kang","D",15}


	};
	cout << a[1].Class << endl;*/

	struct user_info {

		string name;
		string address;
		int age;
		float weight;
		float height;
	};

	user_info user1;
	user1.name = "Kim";
	user1.address = "Incheon";
	user1.age = 26;
	user1.weight = 92.4;
	user1.height = 179;

	cout << user1.name << endl;

	user_info users[3] = {
		{"Lee","seoul",23,60,170},
		{"Kang","Daejeon",29,78,180},
		{"Park","Yeoncheon",32,96,194}
	};
	cout << users[0].address << endl;
	cout << users[2].height << endl;

	return 0;
     }