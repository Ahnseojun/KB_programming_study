#include<stdio.h>
//function

void enterKey() {  //�� �� ����
	printf("\n");
}

void printPowerNumer(int n) {  //�Ű������� ���� ���ڸ� ����
	printf("%d\n", n * n);
}

int inputNum() {
	printf("���� �Է� : ");  //���ڸ� �Է¹���
	int n;
	scanf_s("%d", &n);
	return n;
}

int PowerNum(int n, int p) { //n : ����, p: ������
	if (p <= 0) {  //���� ������ ���� ����
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

//2�� ���� �Լ� ����
void printNumber(int m) {  //�Ű����� O, ���� x
	printf("%d\n", m);
}

int main() {
	////1��
	enterKey();// �� �� ����
	printPowerNumer(3);
	enterKey();
	int mynum = inputNum();
	int result = PowerNum(mynum, 3); // n^3
	printf("%d\n", result);

	//2��
	enterKey();
	printNumber(30);
	enterKey();


	//3��
	//powerNum - �Է��� ������ p���� ���
	//�� ����� ȭ�鿡 ���
	printNumber(PowerNum( inputNum(), 3 ) );  //n^3  �Լ� ( �Լ�(), �Լ�() )�� ����ϸ� �����ʿ��� �������� ����  -> �׷��� �Լ�( �Լ�(), 3 ) �� �ϴ°� ����


	//4��
	
	int num = inputNum();
	int power = inputNum();
	printNumber( PowerNum(num, power) );

	return 0;
}