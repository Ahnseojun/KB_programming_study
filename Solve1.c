#include<stdio.h>

int Q_1(int a, int b, int c) {
	int sum = 0;

	for (int i = a; i <= b; i++) {
		if (i % c != 0) {  //c의 배수 제외
			sum += i;
		}
	}
	return sum;
}
int Q_2(int sec) {
	if (sec > 3600) {
		printf("1시간 초과");
		return -1;
	}
	else {
		printf("%d분 %d초 입니다\n", sec / 60, sec % 60);
		return sec / 60; // 123 -> 2 반환
	}
}

void color() {
	system("color 0a");
}

void change_color(char a, char b) {
	char color[9] = "color ";  //color[1024]도 됨
	color[6] = a;
	color[7] = b;
	color[8] = NULL;
	system(color);
}


int main() {
	//1번 매개변수(a,b,c)로 해야함
	int x, y, z;
	printf("a,b,c 값 입력");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("%d부터 %d까지의 합(%d 배수 제외)\n", x, y, z);
	int result = Q_1(x, y, z);
	printf("결과 : %d\n", result);

	//2번
	int sec;
	printf("몇초? ");
	scanf_s("%d", &sec);
	Q_2(sec);



	//4번
	rewind(stdin);
	printf("첫번째 문자 입력\n");
	char a = getchar();
	rewind(stdin);
	printf("두번째 문자 입력\n");
	char b = getchar();
	change_color(a, b);

	return 0;
}