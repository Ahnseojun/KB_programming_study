#include<stdio.h>
#include"MyStructs.h" // ����ü����

void printAnimal(Animal ani) {

	printf("������ : %s\n", ani.name);
	printf("������ : %s\n", ani.speices);
	printf("�����ڵ� : %s\n", ani.code);
	printf("\n");
}

Food FoodTruck() {
	Food f;
	printf("������ ������ ? ");
	scanf_s("%d", &f.price);
	printf("���ĸ� ? ");
	rewind(stdin);
	gets(f.name);
	return f;
}

int main() {

	Animal a1 = { "���丮", "��Ʈ����", "0001" };
	Animal a2 = { .name = "�����", .speices = "��", .code= "0002" };
	
	Animal a3;
	strcpy(a3.name, "��ī��");
	strcpy(a3.speices, "��");
	strcpy(a3.code, "0003");

	Animal a4;
	printf("�̸� :");
	gets(a4.name);
	printf("�� :");
	gets(a4.speices);
	printf("�ڵ� :");
	gets(a4.code);

	printf("%s %s %s\n", a1.name, a1.speices, a1.code);
	printf("%s %s %s\n", a2.name, a2.speices, a2.code);
	printf("%s %s %s\n", a3.name, a3.speices, a3.code);
	printf("%s %s %s\n", a4.name, a4.speices, a4.code);

	Food f1 = { 5500, "�н�" };
	Food f2 = { .price = 7000, .name="�Ͻ�"};
	Food f3;
	f3.price = 5000;
	strcpy(f3.name, "�ѽ�");

	Food f4;
	printf("���� = ");
	scanf_s("%d", &f4.price);
	rewind(stdin);
	printf("��ǰ�� = ");
	gets(f4.name);
	
	printf("%s %d\n", f1.name, f1.price);
	printf("%s %d\n", f2.name, f2.price);
	printf("%s %d\n", f3.name, f3.price);
	printf("%s %d\n", f4.name, f4.price);

	printAnimal(a1);
	printAnimal(a2);
	printAnimal(a3);


	printf("���� �� ���ϴ� \n");
	Food myFood = FoodTruck();
	printf("%s %d\n", myFood.name, myFood.price);
	return 0;
}