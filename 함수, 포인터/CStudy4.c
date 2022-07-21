#include<stdio.h>

//1번
//이 a,b는 main의 a,b와 아무 상관없음
//이 a,b,가 값 바뀌어도 main의 a,b는 그대로

void Q1(int a, int b) {
	
	if (a >= b) {
		printf("%d\n", a);
		return;
	}
	printf("%d\n", b);
}

//2번
void Q2(int a, int b) {
	if (a >= b) {
		return a;  //b가 a보다 클 경우 else 안 적어도 됨
	}
		return b;

}

int Q3(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	//printf("2번) num1 = %d num2 = %d", *num1, *num2);
}
//3번 전역변수로 사용
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
	printf("1번) a b 값 : ");
	scanf_s("%d %d", &a, &b);
	//a >= b ? printf("%d\n", a) : printf("%d\n", b);   //삼항연산자	
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