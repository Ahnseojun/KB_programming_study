#include<stdio.h>
//�迭�� �Լ��� �Űܺ����� �ѱ涩
//�迭�� ũ�⵵ ���� �Ѱ������
// �׸��� �Ű������� int numbers[] ��� �ص� �ǰ�
// int* number ��� �ص� ��
// �ֳ��ϸ� �迭�� �����ʹϱ�

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

int findMAx(int* numbers, int size) {  //numbers[]�� �� (int* numbers ���)
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		if (min > numbers[i]) {
			min = numbers[i];
		}
		printf("numbers2 �ּڰ� : %d\n", min);
		return max;
	}
}

//void reverse_arr(int* numbers, int size)
void reverse_arr(int numbers[], int size)
{
	for (int i = 0; i < size; i++) {
		numbers[i] *= -1;

		printf("%d\n", numbers[i]);
	}
}

int main()
{
	//�迭
	//1���� ������ ���� ���� ���� ������
	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[5] = { 1, 4, 7, 6, 298 };

	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	printf("--------------------------\n");

	//1��
	printf("1��\n\n");
	printArr(numbers1,5);
	printf("--------------------------\n");

	//2��
	findMAx(numbers2, 5);
	printf("--------------------------\n");

	//3��
	reverse_arr(numbers1, 5);

	return 0;
}


