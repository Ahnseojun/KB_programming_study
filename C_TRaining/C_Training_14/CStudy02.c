#include<stdio.h>

void printYourName(char n[]) {// char* n �� ��
	printf("���� �̸��� %s�Դϴ�\n", n);
}

char* printABC() {
	return "abc\n\n";
}

//�Ű����� ���� ���ڿ��� �Է¹޾Ƽ� �����ϰ� ���� ��?? //+ ���ڿ��� ���Ϲް� ���� ��
char* returnMyInfo() {
	static char mbti[5];  //static ������ �̻��� ���ڳ��� > �Լ��� ������ ����� �׷��� �����Ͱ� �̻��� �� ����Ŵ //static�� ���α׷��� ���� �� ���� ������Ŵ
	//static ��������� ���ڿ� ũ�⸦ �˳��ϰ� �ش� mbti[1024]
	printf("mbti ? ");
	gets(mbti);
	return mbti;
}

char* returnMyMbti(char* mbti) {
	return mbti;
}

int main() {
	printf("�̸� �Է� ");
	char name[100];
	gets(name);
	printYourName(name);

	printf("%s\n", printABC());

	printf("\n%s", returnMyInfo());

	printf("\n%s", returnMyMbti("ENFJ"));
	printf("\n%s", returnMyMbti(name));

	return 0;
}