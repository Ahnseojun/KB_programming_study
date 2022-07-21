#include<stdio.h>

int a = 10;
static int b = 20;

int upPrint() {

	a++;
	b++;
	printf("%d %d\n", a, b);
}