#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;

int main() {

	Rectangle resc[5]; //�簢�� 5�� �Է� �ޱ�����
	for (int i = 0; i < 5; i++) {
		printf("�簢���� width�� height�� �Է�");
		scanf_s("%d %d", &resc[i].width, &resc[i].height);
	}

	Rectangle maxRec = resc[0];
	for (int i = 0; i < 5; i++) {

		if (resc[i].width < 0 || resc[i].height < 0) //2��)���� ���� ó��
			continue;

		int area = resc[i].width * resc[i].height;
		int maxRecArea = maxRec.width * maxRec.height;
		if (maxRecArea < area) {  //���̰� ���� ū �ɷ� ��ü
			maxRec = resc[i];
		}
	}
	if(maxRec.width > 0 && maxRec.height >= 0) { //2��) ����ó��2

	printf("���� ���� �簢���� width : %d, height : %d\n", maxRec.width, maxRec.height);

	}

	return 0;
}