#pragma once

// ��������
// ������ �̸�, ������ ����, ���� ���� �ڵ�
// �ǻ߶�� ���� 2���� �̻��� �� ������ ���� ���� �ڵ�� ����

struct MyStruct {
	char name[100];
	char speices[100]; //doge, cat
	char code[100]; //���� �ڵ尡 00007 �̷����̸� "���ڿ�"�� �����ؾ��� / int�� �ϸ� 00007�� 7�� ��


}typedef Animal;

// ���� ����� ���� ��

struct Food {
	int price;
	char name[100];

}typedef Food;


struct StudentScore {

	int kor;
	int eng;
	int math;

}typedef StudentSocre;

struct KBStudent {
	
	int cSocre;
	int javaSocre;
	char name[100];

}typedef KBStudent;