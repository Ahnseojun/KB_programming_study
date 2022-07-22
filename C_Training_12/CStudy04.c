#include<stdio.h>

#define MAX 1024 //매크로 상수 , 스택보다 먼저 처리됨
				 //이걸 이용해서 배열의 크기를 잡을 수 있다

int main() {
	//배열 안에서 숫자를 넣고
	//거기서 가장 큰 값, 그리고 그 큰 값의 인덱스 출력

	//malloc, calloc을 쓴 이유
	//int num = 5;
	//int numbers2[num]; //변수로 배열 크기 지정x
	int numbers[5];
	int mynumbers[MAX];  
	int size = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("%d번째 숫자 입력 : ", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int max_index = 0;
	for (int i = 1; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			max_index = i;			//정답
		}
	}
	printf("\n최댓값은 [%d]에 있음\n", max_index);

	return 0;
}