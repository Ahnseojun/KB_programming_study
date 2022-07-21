#include<stdio.h>
extern int a; // CTest.c에서 온 변수 a
extern int b;

void printNum(int); //함수의 원형


int main() {
	
	a++;
	//b++;		// 여기서 문제가 생김. static 붙어서 CTest.c이외에선 못 씀
				// java,c#,c++의 private 같은 것

	printf("%d\n", a);
	upPrint();

	return 0;
}


void printNum(int a) {  //함수의 정의
	printf("\n%d", a);
}