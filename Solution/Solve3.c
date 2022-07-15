#include<stdio.h>

int Q_9(int num1) {
	if (num1 == 1)
		return 1;
	else
		return num1 * Q_9(num1 - 1);
}


int main() {

	//1부터 n까지 곱하는 함수
	int factory;
	printf("1부터 몇까지 곱? ");
	scanf_s("%d", &factory);
	int sum = Q_9(factory);
	printf("1부터 %d까지의 곱은 %d",factory, sum);

	return 0;
}