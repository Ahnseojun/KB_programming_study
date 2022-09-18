#include<stdio.h>

struct Student {

	int num;
	char name[100];

}typedef Student; //시작글자 대문자 하기


void printStudent(Student s) {  //구조체를 매개변수로 받아보기

	printf("%d번 학생 %s\n", s.num, s.name);
}


int main() {

	Student s = { .name = "안서준", .num = 1 };
	printStudent(s);
	printf("\n");

	Student students[3]; // Student 구조체에 student 변수 생성
	for (int i = 0; i < 3; i++) {
		int temp;
		printf("학생의 번호?\n");
		scanf_s("%d", &temp);
		int duplicate = 0;

		for (int j = 0; j < i; j++) {
			if(students[j].num == temp){
				printf("중복번호\n");
				i--;
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0) {
			students[i].num = temp;
			printf("이름은\n");
			rewind(stdin);
			gets(students[i].name);
		}

	}
	for (int i = 0; i < 3; i++) {
		printStudent(students[i]);
	}

	return 0;
}