#include<stdio.h>
//function

void enterKey() {  //한 줄 띄우기
	printf("\n");
}

void printPowerNumer(int n) {  //매개변수로 받은 숫자를 제곱
	printf("%d\n", n * n);
}

int inputNum() {
	printf("숫자 입력 : ");  //숫자를 입력받음
	int n;
	scanf_s("%d", &n);
	return n;
}

int PowerNum(int n, int p) { //n : 숫자, p: 제곱수
	if (p <= 0) {  //음수 제곱은 하지 말자
		return 1;
	}
	else if (p == 1) {
		return n;
	}
	int num = n;
	for (int i = 0; i < p-1; i++) {
		n *= num;
	}
	return n;
}

//2번 문제 함수 선언
void printNumber(int m) {  //매개변수 O, 리턴 x
	printf("%d\n", m);
}

int main() {
	////1번
	enterKey();// 한 줄 띄우기
	printPowerNumer(3);
	enterKey();
	int mynum = inputNum();
	int result = PowerNum(mynum, 3); // n^3
	printf("%d\n", result);

	//2번
	enterKey();
	printNumber(30);
	enterKey();


	//3번
	//powerNum - 입력한 숫자의 p제곱 출력
	//그 결과를 화면에 출력
	printNumber(PowerNum( inputNum(), 3 ) );  //n^3  함수 ( 함수(), 함수() )를 사용하면 오른쪽에서 왼쪽으로 읽음  -> 그래서 함수( 함수(), 3 ) 로 하는게 좋음


	//4번
	
	int num = inputNum();
	int power = inputNum();
	printNumber( PowerNum(num, power) );

	return 0;
}