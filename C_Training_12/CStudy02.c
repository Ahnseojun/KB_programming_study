#include<stdio.h>
#include<stdlib.h>  //���� �迭��

int main() {

	int* dynamic_arr = (int*)malloc(10 * sizeof(int));
	int size;
	printf("�迭 ������ ���� ");
	scanf_s("%d", &size);

	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		dynamic_arr2[i] = i + 11;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", dynamic_arr2[i]);
	}

	//malloc - �޸� �ʱ�ȭ x
	//calloc - 0���� �ʱ�ȭ ����
	//10ĭ¥�� ���� �迭 �������. 
	//�ȿ� ���� 0���� �ʱ�ȭ �Ǿ� �ִ�
	int* mynumbers = (int*)calloc(10, sizeof(4));
	for (int i = 0; i < 10; i++) {
		printf("%d\n", mynumbers[i]);
	}


	//���� �޸𸮴� ���α׷��Ӱ� �������� �Ҵ��� ��
	//�� ��ٸ� free()���� ��������� �ȱ׷��� �޸� ����(memory leak)
	//���� ���α׷��� �̴�� �����ٸ� ���� free()�� ���� �ʿ� ����
	//�ٵ� �� �ڿ��� ���α׷��� ��� �ǰ�, �̰� ���̻� �� ���ٸ� free()�� ����ؾ���

	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);

	return 0;
}