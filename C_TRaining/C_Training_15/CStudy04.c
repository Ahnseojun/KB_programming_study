#include<stdio.h>
#include"MyStructs.h" // 구조체접근

int main() {

	//1명
	StudentSocre  s1 = { .kor = 100, .eng = 0, .math = 50 };
	
	//3명
	StudentSocre students[3] = { {.kor = 100, .eng = 10, .math = 90},
		{.kor = 2100, .eng = 100, .math = 90}, {.kor = 100, .eng = 100, .math = 100} };

	students[0].kor = 50;
	printf("%d %d %d\n", students[0].kor, students[1].kor, students[2].kor);

	printf("\n---------------\n");

	KBStudent student1 = { .cSocre = 10, .javaSocre = 10, .name = "안서준" };
	printf("%d %d %s\n", student1.cSocre, student1.javaSocre, student1.name);

	printf("\n---------------\n");

	KBStudent student[5];

	for (int i = 0; i < 5; i++) {
		printf("학생 c 점수, java 점수, 이름 입력 ");
		scanf_s("%d %d", &student[i].cSocre, &student[i].javaSocre);
		gets(student[i].name);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d %d %s\n", student[i].cSocre, student[i].javaSocre, student[i].name);
	}
	
	printf("\n---------------\n");
	int Csum = 0;
	int Jsum = 0;

	for (int i = 0; i < 5; i++) {
		Csum += student[i].cSocre;
		Jsum += student[i].javaSocre;
	}

	printf("4) cSocre = %d, javaSocre = %d\n\n", Csum,Jsum);

	double Cavg = 0;
	double Javg = 0;

	for (int i = 0; i < 5; i++) {
		Cavg = Csum / 5.0;
		Javg = Jsum / 5.0;
	}
	
	printf("5) cSocre_avg = %.2f, javaSocre_avg = %.2f\n\n", Cavg, Javg);

	int max = student[0].cSocre;
	int min = student[0].cSocre;
	int index_max = 0;  // 1등 인덱스

	for (int i = 0; i < 5; i++) {
		if (max < student[i].cSocre) {
			max = student[i].cSocre;
			index_max = i;
		}
	}
	printf("c 1등 %s", student[index_max].name);






	return 0;
}