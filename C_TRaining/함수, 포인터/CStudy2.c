#include<stdio.h>
// 변수 종류
// 전역변수 global
// 지역변수 
// 정적변수 (정적에도 지역 / 전역이 있음)

//전역변수는 함수 바깥에 선언
int g = 0;
//정적
static int s1 = 0; //static 키워드가 붙음(정적 변수) 

void upNum(int a, int b) {	// a,b 매개변수
							// 매개변수 = 지역변수
							// 
							// 
	static int s2 = 0;		// 그렇다면 static은??
	a++;					
	b++;
	g++;
	s2++;
	printf("%d %d %d %d\n", a, b, g, s2);
}

int main() {

	//지역변수는 함수나 중괄호 안에 선언함
	int num = 10;
	if(num > 0) {
		int n = 100; //변수 n은 num이 양수여야 존재함
		upNum(n, num);
		upNum(n, num);
		upNum(n, num);
		printf("n = %d, num = %d\n", n, num);
	}
	g++; // 전역변수는 함수 어디에서든지 사용가능
	printf("g = %d\n", g);
	printf("s1 = %d\n", s1);
	// upNum(num, n); // 변수 n은 if문 안에서만 됨
	// printf("n = %d, num = %d\n", n ,num);


	return 0;
}