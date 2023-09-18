#include <iostream>

using namespace std;

int main() {

	
	/*
	+ : 2개의 피연산자의 합을 계산
	- : 1번째 피연산자에서 2번째 피연산자의 차를 계산
	* : 2개 피연산자의 곱
	/ : 1번째 피연산자에서 2번째 피연산자를 나눔
	>> : 2개의 피연산자가 모두 정수이면 결과값은 '몫'
	% : 1번째 피연산자를 2번째 피연산자로 나머지를 구함(실수에서는 사용 불가)
	*/
	int a = 10;
	int b = 3;
	int c = 5;
	int multiple = a + b * c; //c++은 일반적인 대수학의 연산 순서를 따른다
	int multiple2 = a / b * c;
	cout << multiple << endl;
	cout << multiple2 << endl;
	
	float p = 10;
	int k = 3;
	cout << p / k << endl; // 하나라도 실수이면 실수값으로 산출됨


	//auto
	auto n = 100; //n은 int
	auto x = 1.5; //x는 float
	auto y = 1.3e12L; //y는 long long


	return 0;
}