#include<stdio.h>

//2
void season() {
	int month;
	printf("2) 몇 월생 ");
	scanf_s("%d", &month);

	if (month == 12 || month == 1 || month == 2) {
		printf("겨울\n");
	}
	else if (month == 3 || month == 4 || month == 5) {
		printf("봄\n");
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("여름\n");
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("가을\n");
	}
	else
		printf("error\n");
}

//3
void printseason(int month3) {
	switch (month3)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;

	default:
		printf("error\n");
		break;
	}
}

//4
int calcAge() {
	int year;
	printf("몇년도에 태어남?");
	scanf_s("%d", &year);

	return (2022 - year) + 1; //한국식 나이
}

//5
int born(int y) {
	return 2022 - y +1;

}

int main() {

	int month;
	printf("1) 태어난 달 ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;

	default:
		printf("error\n");
		break;
	}

	printf("-----------\n");
	//2번
	season();

	printf("-----------\n");

	//3번

	int month3;
	printf("3) 몇 월생 ");
	scanf_s("%d", &month3);
	
	printseason(month3);

	printf("-----------\n");
	//4번

	printf("난 %d 살이다\n",calcAge());
	printf("-----------\n");
	//5번
	int year;
	printf("몇년생? ");
	scanf_s("%d", &year);
	printf("5) 내 나이는 %d 살\n", born(year));


	return 0;
}