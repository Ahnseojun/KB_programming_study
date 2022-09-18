#include<stdio.h>

struct Student {
	char name[100];
	int number;

}typedef Student;


int main() {

	Student ss[4];

	//ss[0] = (Student){.name = "안구구", .number = 1};
	//printf("%d번 학생 %s\n", ss[0].number, ss[0].name);

	printf("\n------------\n");

	for (int i = 0; i < 4; i++) {
		rewind(stdin);
		printf("%d번 학생 이름 ", i);
		scanf_s("%s", &ss[i].name, sizeof(&ss[i]));

		printf("%d번 학생 번호 ", i);
		scanf_s("%d", &ss[i].number);

	
		for (int j = 0; j < i; j++) {
			if (ss[i].number == ss[j].number) {
				i--; //중복제거
				printf("다시 입력\n");

			}
		}
	}
	for (int i = 0 ; i < 4; i++ ) {

		printf("%d번 학생 이름 \"%s\" 번호는 \"%d\"\n\n", i, ss[i].name, ss[i].number);
	}

	return 0;
}
