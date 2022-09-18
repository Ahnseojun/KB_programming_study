#include<stdio.h>

void no_changeValue(int a, int b) {
	a = b;
}

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int inputNum() {
	int a;
	scanf_s("%d", &a);
	return a;
}

int printNum(int b) {
	printf("%d\n", b);
}

int main() {

	int q = 3;
	no_changeValue(q, 300);
	printf("%d\n", q);

	printf("----------------------\n");

	int a = 3;
	int b = 5;
	printf("변경 전\n");
	printf("%d %d\n", a, b);

	swap(&a, &b);

	printf("변경 후\n");
	printf("%d %d\n", a, b);

	printf("----------------------\n");

	int num1, num2;
	printf("num1 num2 값 입력");
	scanf_s("%d %d", &num1, &num2);

	printf("변경 전\n");
	printf("%d %d\n", num1, num2);

	swap(&num1, &num2);

	printf("변경 후\n");
	printf("%d %d\n", num1, num2);

	printf("----------------------\n");

	int c = inputNum();
	int d = inputNum();

	printNum(c);
	printNum(d);

	swap(&c, &d);

	printNum(c);
	printNum(d);
	printf("----------------------\n");

	return 0;
}