#include<stdio.h>
#include"MyStructs.h" // ����ü����

int main() {

	//1��
	StudentSocre  s1 = { .kor = 100, .eng = 0, .math = 50 };
	
	//3��
	StudentSocre students[3] = { {.kor = 100, .eng = 10, .math = 90},
		{.kor = 2100, .eng = 100, .math = 90}, {.kor = 100, .eng = 100, .math = 100} };

	students[0].kor = 50;
	printf("%d %d %d\n", students[0].kor, students[1].kor, students[2].kor);

	printf("\n---------------\n");

	KBStudent student1 = { .cSocre = 10, .javaSocre = 10, .name = "�ȼ���" };
	printf("%d %d %s\n", student1.cSocre, student1.javaSocre, student1.name);

	printf("\n---------------\n");

	KBStudent student[5];

	for (int i = 0; i < 5; i++) {
		printf("�л� c ����, java ����, �̸� �Է� ");
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
	int index_max = 0;  // 1�� �ε���

	for (int i = 0; i < 5; i++) {
		if (max < student[i].cSocre) {
			max = student[i].cSocre;
			index_max = i;
		}
	}
	printf("c 1�� %s", student[index_max].name);






	return 0;
}