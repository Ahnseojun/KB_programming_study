#include<stdio.h>

int Q_1(int a, int b, int c) {
	int sum = 0;

	for (int i = a; i <= b; i++) {
		if (i % c != 0) {  //c�� ��� ����
			sum += i;
		}
	}
	return sum;
}
int Q_2(int sec) {
	if (sec > 3600) {
		printf("1�ð� �ʰ�");
		return -1;
	}
	else {
		printf("%d�� %d�� �Դϴ�\n", sec / 60, sec % 60);
		return sec / 60; // 123 -> 2 ��ȯ
	}
}

void color() {
	system("color 0a");
}

void change_color(char a, char b) {
	char color[9] = "color ";  //color[1024]�� ��
	color[6] = a;
	color[7] = b;
	color[8] = NULL;
	system(color);
}


int main() {
	//1�� �Ű�����(a,b,c)�� �ؾ���
	int x, y, z;
	printf("a,b,c �� �Է�");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("%d���� %d������ ��(%d ��� ����)\n", x, y, z);
	int result = Q_1(x, y, z);
	printf("��� : %d\n", result);

	//2��
	int sec;
	printf("����? ");
	scanf_s("%d", &sec);
	Q_2(sec);



	//4��
	rewind(stdin);
	printf("ù��° ���� �Է�\n");
	char a = getchar();
	rewind(stdin);
	printf("�ι�° ���� �Է�\n");
	char b = getchar();
	change_color(a, b);

	return 0;
}