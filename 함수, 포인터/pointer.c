#include<stdio.h>
//1
//메인에다 변수 선언하고
//그 변수 증가시키는 함수

//2
//숫자 둘 중 하나 크고 작은거 비교
//음수 있으면 양수로 바꾸고
//큰거를 리턴
//그 양수를 바꾼게 메인에다 영향을 줘야함;

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
		printf("a가 큼 %d,", *a);
		return *a;
	}
	else if (*b > *a) {
		printf("b가 큼 %d", *b);
		return *b;
	}
	else
		printf("a b 같음");
	return *a;
}


int main() {
	//1번
	//int num1 = 10;	
	//raise(num1);
	//printf("num1 -> %d\n", num1);

	//raise_pointer(&num1);
	//printf("num1_pointer -> %d\n", num1);
	//printf("-------------------\n");

	//2번

	int a, b;
	printf("a b 값 입력 ");
	scanf_s("%d %d", &a, &b);

	int Q2 = between(&a, &b);
	printf("\n\n\n%d", Q2);
	printf("\n%d %d\n", a, b);


	return 0;
}