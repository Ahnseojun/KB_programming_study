#include<stdio.h>

struct Student {
	char name[100];
	int number;

}typedef Student;


int main() {

	Student ss[4];

	//ss[0] = (Student){.name = "�ȱ���", .number = 1};
	//printf("%d�� �л� %s\n", ss[0].number, ss[0].name);

	printf("\n------------\n");

	for (int i = 0; i < 4; i++) {
		rewind(stdin);
		printf("%d�� �л� �̸� ", i);
		scanf_s("%s", &ss[i].name, sizeof(&ss[i]));

		printf("%d�� �л� ��ȣ ", i);
		scanf_s("%d", &ss[i].number);

	
		for (int j = 0; j < i; j++) {
			if (ss[i].number == ss[j].number) {
				i--; //�ߺ�����
				printf("�ٽ� �Է�\n");

			}
		}
	}
	for (int i = 0 ; i < 4; i++ ) {

		printf("%d�� �л� �̸� \"%s\" ��ȣ�� \"%d\"\n\n", i, ss[i].name, ss[i].number);
	}

	return 0;
}
