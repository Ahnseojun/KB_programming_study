#include<stdio.h>
#include<stdlib.h>  //동적 배열용

int main() {

	int* dynamic_arr = (int*)malloc(10 * sizeof(int));
	int size;
	printf("배열 사이즈 적기 ");
	scanf_s("%d", &size);

	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		dynamic_arr2[i] = i + 11;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", dynamic_arr2[i]);
	}

	//malloc - 메모리 초기화 x
	//calloc - 0으로 초기화 해줌
	//10칸짜리 숫자 배열 만들었음. 
	//안에 값이 0으로 초기화 되어 있다
	int* mynumbers = (int*)calloc(10, sizeof(4));
	for (int i = 0; i < 10; i++) {
		printf("%d\n", mynumbers[i]);
	}


	//동적 메모리는 프로그래머가 수동으로 할당한 것
	//다 썼다면 free()으로 없애줘야함 안그러면 메모리 누수(memory leak)
	//만약 프로그램이 이대로 끝난다면 굳이 free()를 적을 필요 없음
	//근데 이 뒤에도 프로그램이 계속 되고, 이걸 더이상 안 쓴다면 free()를 사용해야함

	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);

	return 0;
}