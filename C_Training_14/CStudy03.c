#include<stdio.h>

//1번
char* yearTTi(int year) {
	//int a = year % 12 + 1;
	//1 원숭이 - 신
	switch (year % 12 + 1)
	{
	case 1 :
		return "신 - 원숭이\n";
	case 2:
		return "유 - 닭\n";
	case 3:
		return "술 - 개\n";
	case 4:
		return "해 - 돼지\n";
	case 5:
		return "자 - 쥐\n";
	case 6:
		return "축 - 소\n";
	case 7:
		return "인 - 호랑이\n";
	case 8:
		return "묘 - 토끼\n";
	case 9:
		return "진 - 용\n";
	case 10:
		return "사 - 뱀\n";
	case 11:
		return "오 - 말\n";
	case 12:
		return "미 - 양\n";
	default:
		return "error\n"; 
	}

}

//2번
void ganzi(int year) {
	char s[12][524] = {"신", "유", "술", "해", "자", "축", "인", "묘", "진", "사", "오", "미"};
	char q[10][524] = {"경", "신", "임", "계", "갑", "을", "병", "정", "무", "기" };
	
	int a = year % 12;
	int b = year % 10;

	printf("2) 내가 태어난 해는 %s%s 이다\n", q[b], s[a]);
}

//3번

int* birthMonth(int month) {
	switch (month)
	{
	case 12: 
	case 1: 
	case 2: 
		return "겨울";
	case 3:
	case 4:
	case 5:
		return "봄";
	case 6:
	case 7:
	case 8:
		return "여름";
	case 9:
	case 10:
	case 11:
		return "가을";

	default:
		return "지구아님";
	}
}

char* season(int month)
{
	switch (month)
	{
	case 12: 	
	case 1: 	
	case 2: //원랜 이렇게 적으면 안 됨
		return "겨울";     //케이스 당 1줄씩 적는 게 좋음
	case 3:	
	case 4:	
	case 5:
		return "봄";
	case 6:	
	case 7:	
	case 8:
		return "여름";
	case 9:	
	case 10: 
	case 11:
		return "가을";
	default:
		return "오류";
	}
}


int length(char* str)
{
	//문자열의 길이를 구하려면, 그 문자열이 끝날때까지 반복문을 돌림
	//영문, 숫자, 특수문자, 공백은 모두 1byte
	//근데 한글이나 한자 등은 1글자당 2byte
	//조건문 체크하기도 힘들고 예외처리가 쉽지 않다.
	//하고 싶은 사람은 한글에 대해서도 예외처리 해보세요~
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

int main() {
	//1번
	int year;
	printf("1) 내가 태어난 연도 ");
	scanf_s("%d", &year);

	printf("%s", yearTTi(year));

	//2번

	ganzi(year);

	//3번
	int month;
	printf("3) 내가 태어난 월? ");
	scanf_s("%d", &month);
	printf("%s\n",birthMonth(month));

	//4번

	printf("4) %s\n", season(4));
	printf("%s\n", season(-1));
	printf("%s\n", season(13));
	printf("%s\n", season(12));
	printf("%s\n", season(6));
	printf("%s\n", season(3));
	printf("%s\n", season(11));
	printf("%d\n", length("abcd1234")); //8  
	printf("%d\n", length("abcd 1234!")); //10

	return 0;
}