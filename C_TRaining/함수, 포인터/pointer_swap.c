#include<stdio.h>

void swap(int* a, int* b) {	
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int a = 3;
	int b = 5;

	printf("a = %3d b = %3d\n", a, b);

	swap(&a, &b);

	printf("a = %3d b = %3d\n", a, b);

	printf("---------\n");

	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("num1 = %3d num2 = %3d\n", num1, num2);

	swap(&num1, &num2);
	printf("num1 = %3d num2 = %3d\n", num1, num2);

	return 0;
}