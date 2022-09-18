#include<stdio.h>

//1��
char* yearTTi(int year) {
	//int a = year % 12 + 1;
	//1 ������ - ��
	switch (year % 12 + 1)
	{
	case 1 :
		return "�� - ������\n";
	case 2:
		return "�� - ��\n";
	case 3:
		return "�� - ��\n";
	case 4:
		return "�� - ����\n";
	case 5:
		return "�� - ��\n";
	case 6:
		return "�� - ��\n";
	case 7:
		return "�� - ȣ����\n";
	case 8:
		return "�� - �䳢\n";
	case 9:
		return "�� - ��\n";
	case 10:
		return "�� - ��\n";
	case 11:
		return "�� - ��\n";
	case 12:
		return "�� - ��\n";
	default:
		return "error\n"; 
	}

}

//2��
void ganzi(int year) {
	char s[12][524] = {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��"};
	char q[10][524] = {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
	
	int a = year % 12;
	int b = year % 10;

	printf("2) ���� �¾ �ش� %s%s �̴�\n", q[b], s[a]);
}

//3��

int* birthMonth(int month) {
	switch (month)
	{
	case 12: 
	case 1: 
	case 2: 
		return "�ܿ�";
	case 3:
	case 4:
	case 5:
		return "��";
	case 6:
	case 7:
	case 8:
		return "����";
	case 9:
	case 10:
	case 11:
		return "����";

	default:
		return "�����ƴ�";
	}
}

char* season(int month)
{
	switch (month)
	{
	case 12: 	
	case 1: 	
	case 2: //���� �̷��� ������ �� ��
		return "�ܿ�";     //���̽� �� 1�پ� ���� �� ����
	case 3:	
	case 4:	
	case 5:
		return "��";
	case 6:	
	case 7:	
	case 8:
		return "����";
	case 9:	
	case 10: 
	case 11:
		return "����";
	default:
		return "����";
	}
}


int length(char* str)
{
	//���ڿ��� ���̸� ���Ϸ���, �� ���ڿ��� ���������� �ݺ����� ����
	//����, ����, Ư������, ������ ��� 1byte
	//�ٵ� �ѱ��̳� ���� ���� 1���ڴ� 2byte
	//���ǹ� üũ�ϱ⵵ ����� ����ó���� ���� �ʴ�.
	//�ϰ� ���� ����� �ѱۿ� ���ؼ��� ����ó�� �غ�����~
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

int main() {
	//1��
	int year;
	printf("1) ���� �¾ ���� ");
	scanf_s("%d", &year);

	printf("%s", yearTTi(year));

	//2��

	ganzi(year);

	//3��
	int month;
	printf("3) ���� �¾ ��? ");
	scanf_s("%d", &month);
	printf("%s\n",birthMonth(month));

	//4��

	printf("4) %s\n", season(4));
	printf("%s\n", season(-1));
	printf("%s\n", season(13));
	printf("%s\n", season(12));
	printf("%s\n", season(6));
	printf("%s\n", season(3));
	printf("%s\n", season(11));
	printf("%d\n", length("abcd1234")); //8  
	printf("%d\n", length("abcd 1234!")); //10

	return 0;
}