#include<stdio.h>

int Q_Q_5(int Q_5_1, int Q_5_2) {
	int sum = 0;
	for (int i = Q_5_1; i <= Q_5_2; i++) {
		sum += i;
	}
	return sum;
}

int Q_Q_6(int Q_6_1, int Q_6_2) {
	int sum = 1;
	for (int i = Q_6_1; i <= Q_6_2; i++) {
		sum *= i;
	}
	return sum;
}

int Q_7(char sign) {
	int num1, num2;
	rewind(stdin);
	printf("num1 num2 �� �Է� ");
	scanf_s("%d %d", &num1, &num2);

	int sum = Q_Q_5(num1, num2);
	int mult = Q_Q_6(num1, num2);

	switch (sign)
	{
	case'+': 
		printf("%d", sum);
		break;

	case'x':
	case'X':
		printf("%d", mult);
		break;
	default:
		printf("����ó��");
		break;
	}

}

int main() {

	printf("���� �Է� : ");
	int Q_5_1, Q_5_2;
	scanf_s("%d %d", &Q_5_1, &Q_5_2);
	int Q_R_5 = Q_Q_5(Q_5_1, Q_5_2); // Q_5(1, 10) �� 55�� ���� ��ȯ
	printf("%d �̴�\n", Q_R_5);


	printf("���� �Է� : ");
	int Q_6_1, Q_6_2;
	scanf_s("%d %d", &Q_6_1, &Q_6_2);
	int Q_R_6 = Q_Q_6(Q_6_1, Q_6_2);
	printf("%d �̴�\n", Q_R_6);

	
	printf("-------------------------------------\n");

	char sign;
	printf("��ȣ : ");
	rewind(stdin);
	scanf_s("%c", &sign, 1);  //���ڸ� �� ����
	Q_7(sign);


	return 0;
}