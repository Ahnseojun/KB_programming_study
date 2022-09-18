#include<stdio.h>

struct Rectangle
{
	int width;
	int height;

}typedef Rectangle; // strcut 생략 가능

int area(Rectangle r2) {
	return r2.width * r2.height;
}

int main() {

	struct Rectangle r1;
	r1.width = 50;
	r1.height = 10;
	printf("넓이 : %d\n", r1.width * r1.height);
	

	Rectangle r2;  // typedef Rectangle 때문에 앞에 struct 생략 가능!!!
	scanf_s("%d %d", &r2.width, &r2.height);
	printf("넓이 : %d\n", area(r2));//함수 활용

	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width = r1.width;
	recs[2].height = r2.height;

	return 0;
}