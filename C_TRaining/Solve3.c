#include<stdio.h>

int Q_9(int num1) {
	if (num1 == 1)
		return 1;
	else
		return num1 * Q_9(num1 - 1);
}


int main() {

	//1���� n���� ���ϴ� �Լ�
	int factory;
	printf("1���� ����� ��? ");
	scanf_s("%d", &factory);
	int sum = Q_9(factory);
	printf("1���� %d������ ���� %d",factory, sum);

	return 0;
}