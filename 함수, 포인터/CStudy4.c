#include<stdio.h>

//1��
//�� a,b�� main�� a,b�� �ƹ� �������
//�� a,b,�� �� �ٲ� main�� a,b�� �״��

void Q1(int a, int b) {
	
	if (a >= b) {
		printf("%d\n", a);
		return;
	}
	printf("%d\n", b);
}

//2��
void Q2(int a, int b) {
	if (a >= b) {
		return a;  //b�� a���� Ŭ ��� else �� ��� ��
	}
		return b;

}

int Q3(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	//printf("2��) num1 = %d num2 = %d", *num1, *num2);
}
//3�� ���������� ���
int q = 3;
int z = 5;
void s()
{
	int temp = q;
	q = z;
	z = temp;
}

int main() {
	
	int a, b;
	printf("1��) a b �� : ");
	scanf_s("%d %d", &a, &b);
	//a >= b ? printf("%d\n", a) : printf("%d\n", b);   //���׿�����	
	Q1(a, b);
	printf("-------\n");

	Q2(a, b);
	int result = Q2(a, b);
	printf("%d\n", result);
	printf("-------\n");

	//scanf_s("%d %d", &num1, &num2);

	printf("!--!\n");

	int aa = 3;
	int bb = 5;
	int *num1 = &aa;
	int *num2 = &bb;
	Q3(num1, num2);
	printf("\n%d %d", aa, bb);

	return 0;
}