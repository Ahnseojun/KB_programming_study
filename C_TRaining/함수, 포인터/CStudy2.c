#include<stdio.h>
// ���� ����
// �������� global
// �������� 
// �������� (�������� ���� / ������ ����)

//���������� �Լ� �ٱ��� ����
int g = 0;
//����
static int s1 = 0; //static Ű���尡 ����(���� ����) 

void upNum(int a, int b) {	// a,b �Ű�����
							// �Ű����� = ��������
							// 
							// 
	static int s2 = 0;		// �׷��ٸ� static��??
	a++;					
	b++;
	g++;
	s2++;
	printf("%d %d %d %d\n", a, b, g, s2);
}

int main() {

	//���������� �Լ��� �߰�ȣ �ȿ� ������
	int num = 10;
	if(num > 0) {
		int n = 100; //���� n�� num�� ������� ������
		upNum(n, num);
		upNum(n, num);
		upNum(n, num);
		printf("n = %d, num = %d\n", n, num);
	}
	g++; // ���������� �Լ� ��𿡼����� ��밡��
	printf("g = %d\n", g);
	printf("s1 = %d\n", s1);
	// upNum(num, n); // ���� n�� if�� �ȿ����� ��
	// printf("n = %d, num = %d\n", n ,num);


	return 0;
}