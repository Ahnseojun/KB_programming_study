#include<stdio.h>

struct Student {
	char name[100];
	int number;

}typedef Student;
//typedef Student �� �����
//����ü�� ������ �� �տ� struct �� �����
// struct Student < �̷� ������

int main() {
	int a = 10;

	Stduent s1 = { .number = 1, .name = "�ȼ���" };
	printf("%s %d\n", s1.name, s1.number);


	Stduent ss[3]; //�л� 3�� ����
	ss[0] = (Stduent){ .number = 2, .name = "��ȣ��" };   //ss[0]�� ����ü�� ���� ���Ǹ� �ϱ� ���ؼ��� ss[0] = (Student) �� ����� //����ü��� ���� �����ϱ� ����
	printf("%s %d\n", ss[0].name, ss[0].number);

	printf("�л� �̸���? ");
	gets(ss[1].name);
	printf("�л���ȣ��? ");
	scanf_s("%d", &ss[1].number);

	ss[2].number = 10;
	strcpy(ss[2].name, "��ȣ��");
	printf("%s %d\n", ss[1].name, ss[1].number);
	printf("%s %d\n", ss[2].name, ss[2].number);


	return 0;
}