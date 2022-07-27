#include<stdio.h>

void printYourName(char n[]) {// char* n 도 됨
	printf("너의 이름은 %s입니다\n", n);
}

char* printABC() {
	return "abc\n\n";
}

//매개변수 없이 문자열을 입력받아서 리턴하고 싶을 땐?? //+ 문자열을 리턴받고 싶을 땐
char* returnMyInfo() {
	static char mbti[5];  //static 없으면 이상한 문자나옴 > 함수가 끝나면 사라짐 그래서 포인터가 이상한 곳 가리킴 //static은 프로그램이 끝날 때 까지 유지시킴
	//static 쓰기싫으면 문자열 크기를 넉넉하게 준다 mbti[1024]
	printf("mbti ? ");
	gets(mbti);
	return mbti;
}

char* returnMyMbti(char* mbti) {
	return mbti;
}

int main() {
	printf("이름 입력 ");
	char name[100];
	gets(name);
	printYourName(name);

	printf("%s\n", printABC());

	printf("\n%s", returnMyInfo());

	printf("\n%s", returnMyMbti("ENFJ"));
	printf("\n%s", returnMyMbti(name));

	return 0;
}