#include<stdio.h>
//1
//���ο��� ���� �����ϰ�
//�� ���� ������Ű�� �Լ�

//2
//���� �� �� �ϳ� ũ�� ������ ��
//���� ������ ����� �ٲٰ�
//ū�Ÿ� ����
//�� ����� �ٲ۰� ���ο��� ������ �����;

int raise(int p1) {
	p1 += 5;
}

int raise_pointer(int* p1) {
	*p1 += 5;
}

//2
int between(int* a, int* b) {
	if (*a < 0) {
		*a *= -1;
	}
	if (*b < 0) {
		*b *= -1;
	}

	if (*a > *b) {
		printf("a�� ŭ %d,", *a);
		return *a;
	}
	else if (*b > *a) {
		printf("b�� ŭ %d", *b);
		return *b;
	}
	else
		printf("a b ����");
	return *a;
}


int main() {
	//1��
	//int num1 = 10;	
	//raise(num1);
	//printf("num1 -> %d\n", num1);

	//raise_pointer(&num1);
	//printf("num1_pointer -> %d\n", num1);
	//printf("-------------------\n");

	//2��

	int a, b;
	printf("a b �� �Է� ");
	scanf_s("%d %d", &a, &b);

	int Q2 = between(&a, &b);
	printf("\n\n\n%d", Q2);
	printf("\n%d %d\n", a, b);


	return 0;
}