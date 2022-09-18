#include<stdio.h>
//배열을 함수의 매겨변수로 넘길땐
//배열의 크기도 같이 넘겨줘야함
// 그리고 매개변수는 int numbers[] 라고 해도 되고
// int* number 라고 해도 됨
// 왜냐하면 배열은 포인터니깐

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

int findMAx(int* numbers, int size) {  //numbers[]도 됨 (int* numbers 대신)
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		if (min > numbers[i]) {
			min = numbers[i];
		}
		printf("numbers2 최솟값 : %d\n", min);
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
	//배열
	//1개의 변수가 여러 개의 값을 관리함
	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[5] = { 1, 4, 7, 6, 298 };

	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	printf("--------------------------\n");

	//1번
	printf("1번\n\n");
	printArr(numbers1,5);
	printf("--------------------------\n");

	//2번
	findMAx(numbers2, 5);
	printf("--------------------------\n");

	//3번
	reverse_arr(numbers1, 5);

	return 0;
}


