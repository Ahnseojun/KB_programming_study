#include<stdio.h>

//2
void season() {
	int month;
	printf("2) �� ���� ");
	scanf_s("%d", &month);

	if (month == 12 || month == 1 || month == 2) {
		printf("�ܿ�\n");
	}
	else if (month == 3 || month == 4 || month == 5) {
		printf("��\n");
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("����\n");
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("����\n");
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
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;

	default:
		printf("error\n");
		break;
	}
}

//4
int calcAge() {
	int year;
	printf("��⵵�� �¾?");
	scanf_s("%d", &year);

	return (2022 - year) + 1; //�ѱ��� ����
}

//5
int born(int y) {
	return 2022 - y +1;

}

int main() {

	int month;
	printf("1) �¾ �� ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;

	default:
		printf("error\n");
		break;
	}

	printf("-----------\n");
	//2��
	season();

	printf("-----------\n");

	//3��

	int month3;
	printf("3) �� ���� ");
	scanf_s("%d", &month3);
	
	printseason(month3);

	printf("-----------\n");
	//4��

	printf("�� %d ���̴�\n",calcAge());
	printf("-----------\n");
	//5��
	int year;
	printf("����? ");
	scanf_s("%d", &year);
	printf("5) �� ���̴� %d ��\n", born(year));


	return 0;
}