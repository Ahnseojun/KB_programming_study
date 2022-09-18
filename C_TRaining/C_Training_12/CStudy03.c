#include<stdio.h>
#include<stdlib.h>

int Q1(int* number, int size) {
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", number[i]);
	//}
	int max = number[0];
	int min = number[0];
	int maxcount = 0;
	int mincount = 0;

	for (int i = 0; i < size; i++) {
		if (max < number[i]) {
			max = number[i];
			maxcount = i;
		}
		if (min > number[i]) {
			min = number[i];
			mincount = i;
		}
	}
	printf("최댓값 : %d\n", max);
	return mincount;
}

int main() {
	
	int size;
	printf("배열 사이즈 ");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++) {
		scanf_s("%d", &dynamic_arr2[i]);
	}

	Q1(dynamic_arr2, size);
	int result = Q1(dynamic_arr2, size);
	printf("%d", result);

	return 0;
}