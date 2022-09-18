#include<stdio.h>
#include"Student.h"

int main() {
	//학생 1명 평균
	Stu s1 = { .math = 40, .kor = 50, .eng = 55 };
	Stu s2 = { 50, 60, 55}; //math eng kor 순으로 들어감

	int avg = (s1.math + s1.kor + s1.eng) / 3;
	int avg2 = (s2.math + s2.kor + s2.eng) / 3;

	if (avg >= avg2) {
		printf("첫 번째 학생 평균이 더 큼\n");
	}
	else
		printf("두 번재 학생 평균이 더 큼\n");

	Stu students[5];
	for (int i = 0; i < 5; i++) {
		printf("학생의 국 영 수 점수 : ");
		scanf_s("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);
	}

	Stu Elite = students[0];
	int num = 0;
	for (int i = 0; i < 5; i++) {
		int average = students[i].kor + students[i].eng + students[i].math;
		average /= 3;
		int max = Elite.kor + Elite.eng + Elite.math;
		max /= 3;

		if (max < average) {
			Elite = students[i];
			num = i;
		}
	}

	printf("%d번재 학생이 1등\n", num);

	return 0;
}