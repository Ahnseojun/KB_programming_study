#include<stdio.h>
#include"MyStructs.h" // 구조체접근

void printAnimal(Animal ani) {

	printf("동물명 : %s\n", ani.name);
	printf("동물종 : %s\n", ani.speices);
	printf("동물코드 : %s\n", ani.code);
	printf("\n");
}

Food FoodTruck() {
	Food f;
	printf("음식의 가격은 ? ");
	scanf_s("%d", &f.price);
	printf("음식명 ? ");
	rewind(stdin);
	gets(f.name);
	return f;
}

int main() {

	Animal a1 = { "햄토리", "뉴트리아", "0001" };
	Animal a2 = { .name = "흰둥이", .speices = "개", .code= "0002" };
	
	Animal a3;
	strcpy(a3.name, "피카츄");
	strcpy(a3.speices, "쥐");
	strcpy(a3.code, "0003");

	Animal a4;
	printf("이름 :");
	gets(a4.name);
	printf("종 :");
	gets(a4.speices);
	printf("코드 :");
	gets(a4.code);

	printf("%s %s %s\n", a1.name, a1.speices, a1.code);
	printf("%s %s %s\n", a2.name, a2.speices, a2.code);
	printf("%s %s %s\n", a3.name, a3.speices, a3.code);
	printf("%s %s %s\n", a4.name, a4.speices, a4.code);

	Food f1 = { 5500, "학식" };
	Food f2 = { .price = 7000, .name="일식"};
	Food f3;
	f3.price = 5000;
	strcpy(f3.name, "한식");

	Food f4;
	printf("가격 = ");
	scanf_s("%d", &f4.price);
	rewind(stdin);
	printf("제품명 = ");
	gets(f4.name);
	
	printf("%s %d\n", f1.name, f1.price);
	printf("%s %d\n", f2.name, f2.price);
	printf("%s %d\n", f3.name, f3.price);
	printf("%s %d\n", f4.name, f4.price);

	printAnimal(a1);
	printAnimal(a2);
	printAnimal(a3);


	printf("음식 차 갑니다 \n");
	Food myFood = FoodTruck();
	printf("%s %d\n", myFood.name, myFood.price);
	return 0;
}