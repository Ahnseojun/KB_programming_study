// ������
// ������ �ּ�(=��ġ_\)�� �����ϴ� Ÿ��
#include<stdio.h>

void changeValue(int* p, int v) {
	*p = v; // p�� ����Ű�� �ִ� ���� v�� �ٲ�
}

void no_changeValue(int* p, int v) {
	//�� �ȿ� �ִ� ���� �ٲ�����
	//main�̳� �� �Լ��� ȣ���� �κ��� ������ �״����
	p = v;
	//p�� �� �Լ����� �����ϱ� ����
}


int main() {

	int ex = 10;
	int* exptr = &ex;
	// int*�� intŸ�� ������ ��ġ
	// ����

	changeValue(exptr, 100);
	printf("ex = %d\n", ex);
	changeValue(&ex, 500);
	printf("ex = %d\n", ex);

	// �Լ��� �Ű������� �ַ� ���� (scanf, swap ��)

	return 0;
}