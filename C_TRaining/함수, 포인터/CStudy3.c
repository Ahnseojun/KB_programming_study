#include<stdio.h>
extern int a; // CTest.c���� �� ���� a
extern int b;

void printNum(int); //�Լ��� ����


int main() {
	
	a++;
	//b++;		// ���⼭ ������ ����. static �پ CTest.c�̿ܿ��� �� ��
				// java,c#,c++�� private ���� ��

	printf("%d\n", a);
	upPrint();

	return 0;
}


void printNum(int a) {  //�Լ��� ����
	printf("\n%d", a);
}