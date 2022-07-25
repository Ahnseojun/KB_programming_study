#include<stdio.h>

struct Student {
	char name[100]; //
	int number;

}typedef Stduent;


int main() {

	Stduent s1 = { .number = 1, .name = "안서준" };
	printf("%s %d\n", s1.name, s1.number);

	Stduent ss[3]; //학생 3명 가능
	ss[0] = (Stduent){ .number = 2, .name = "박호두" };
	printf("%s %d\n", ss[0].name, ss[0].number);

	printf("학생 이름은? ");
	gets(ss[1].name);
	printf("학생번호는? ");
	scanf_s("%d", &ss[1].number);

	ss[2].number = 10;
	strcpy(ss[2].name, "최호준");
	printf("%s %d\n", ss[1].name, ss[1].number);
	printf("%s %d\n", ss[2].name, ss[2].number);


	return 0;
}