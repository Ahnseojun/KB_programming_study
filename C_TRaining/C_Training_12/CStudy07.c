#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;

int main() {

	Rectangle resc[5]; //사각형 5개 입력 받기위함
	for (int i = 0; i < 5; i++) {
		printf("사각형의 width와 height를 입력");
		scanf_s("%d %d", &resc[i].width, &resc[i].height);
	}

	Rectangle maxRec = resc[0];
	for (int i = 0; i < 5; i++) {

		if (resc[i].width < 0 || resc[i].height < 0) //2번)음수 예외 처리
			continue;

		int area = resc[i].width * resc[i].height;
		int maxRecArea = maxRec.width * maxRec.height;
		if (maxRecArea < area) {  //넓이가 가장 큰 걸로 교체
			maxRec = resc[i];
		}
	}
	if(maxRec.width > 0 && maxRec.height >= 0) { //2번) 예외처리2

	printf("가장 넓은 사각형의 width : %d, height : %d\n", maxRec.width, maxRec.height);

	}

	return 0;
}