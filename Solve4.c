#include<stdio.h>

int Q_8(int a) {
	printf("1x");
	for (int i = 2; i <= a - 1; i++) {
		printf("%dx", i);
	}
	printf("%d\n", a);

	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum *= i;
	}
	printf("\n%d\n", sum);
	return sum;
}

int Q_9(int b) {
	if (b == 1) {
		return 1;
	}
	else
		return b * Q_9(b - 1);
}

int Q_10(int c) {
	if (c == 0) {
		return 0;
	}
	else if (c == 1) {
		return 1;
	}
	else {
		return Q_10(c - 1) + Q_10(c - 2);
	}
}

int main() {

	int a;
	printf("8) 1부터 몇까지? ");
	scanf_s("%d", &a);

	Q_8(a);
	
	printf("-------------------------\n");

	int b;
	printf("9) 1부터 몇까지? ");
	scanf_s("%d", &b);
	printf("%d\n", Q_9(b));

	printf("-------------------------\n");
	int c;
	printf("10) 1부터 몇까지? ");
	scanf_s("%d", &c);
	printf("%d\n", Q_10(c));
	printf("-------------------------\n");

	return 0;
}