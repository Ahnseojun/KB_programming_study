#include<stdio.h>
#include<stdlib.h>//동적할당 할 경우  -1

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
		printf("숫자 입력 : ");
		scanf_s("%d", &num[i]);
	}

	int aa = findMinIndex(num, 5);
	printf("%d", aa);

	//동적할당할 경우 -2
	int size;
	printf("사이즈 크기 : ");
	scanf_s("%d", &size);
	int* mynumbers = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("숫자 : ");
		scanf_s("%d", &mynumbers[i]);
	}
	printf("가장 작은 값의 인덱스는 : %d", findMinIndex(mynumbers, size));

	return 0;
}