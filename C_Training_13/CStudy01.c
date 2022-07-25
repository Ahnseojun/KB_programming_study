#include<stdio.h>

struct Student {
	char name[100];
	int number;

}typedef Student;
//typedef Student 를 지우면
//구조체를 정의할 때 앞에 struct 를 써야함
// struct Student < 이런 식으로

int main() {
	int a = 10;

	Stduent s1 = { .number = 1, .name = "안서준" };
	printf("%s %d\n", s1.name, s1.number);


	Stduent ss[3]; //학생 3명 가능
	ss[0] = (Stduent){ .number = 2, .name = "박호두" };   //ss[0]에 구조체에 대한 정의를 하기 위해서는 ss[0] = (Student) 를 써야함 //구조체라는 것을 증명하기 위함
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