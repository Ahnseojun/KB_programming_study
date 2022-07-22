#include<stdio.h>

struct Student {
	int math;
	int eng;
	int kor;
};

int main() {
	struct Student s1;
	
		s1.math = 50;
		s1.eng = 60;
		s1.kor = 100;
	
	struct Student s2;
	
		s2.math = 100;
		s2.eng = 100;
		s2.kor = 0;
	
	struct Student s3;
	
		scanf_s("%d", &s3.math);
		scanf_s("%d", &s3.eng);
		scanf_s("%d", &s3.kor);


	return 0;
}