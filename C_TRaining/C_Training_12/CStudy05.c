#include<stdio.h>
#include<stdlib.h>//�����Ҵ� �� ���  -1

int findMinIndex(int numbers[], int size) {
	int min = *numbers;
	int min_index = 0;
	for (int i = 1; i < size; i++) {
		if (min > numbers[i]) {
			min = numbers[i];
			min_index = i;
		}
	}
	return min_index;
}

int main() {

	int num[5];
	for (int i = 0; i < 5; i++) {
		printf("���� �Է� : ");
		scanf_s("%d", &num[i]);
	}

	int aa = findMinIndex(num, 5);
	printf("%d", aa);

	//�����Ҵ��� ��� -2
	int size;
	printf("������ ũ�� : ");
	scanf_s("%d", &size);
	int* mynumbers = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("���� : ");
		scanf_s("%d", &mynumbers[i]);
	}
	printf("���� ���� ���� �ε����� : %d", findMinIndex(mynumbers, size));

	return 0;
}