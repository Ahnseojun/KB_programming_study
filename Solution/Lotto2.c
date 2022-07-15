#include<stdio.h>

int main() {

	int temp = 0;
	int rtemp = 0;

	// 5 * 6�� ���ڸ� ���� 2���� �迭 ����
	int lotto[5][6] = {NULL};

	// ���α׷� ���� ������ ����
	int count = 0;
	int numCount = 0;  //���� �̰� ���ְ�ʹ�
	int odd = 0;
	int even = 0;

	//���� ������ ���� �ð� �Լ� ���
	srand((unsigned int)time(NULL));  //unsigned int �� 0���� �����unsigned int �� 0���� ����� ����

	// 5�� ����
	for (int k = 0; k < 5; k++) {
		//6�� ���� ������ ���� �ݺ���
		for (int i = 0; i < 6; i++) {
			lotto[k][i] = rand() % 45 + 1; // 1~45���� ���ڸ� ���, +1�� ���ϸ� 0~44�� ���ڰ� ����

			//������ �迭 ���� ���� �˻��� �ݺ���
			for (temp = 0; temp < i; temp++) {
				// ���� ���� �迭��� ���ؼ� ������ �ٽ� ���ư��� ���� �ٽ� ����
				if (lotto[k][i] == lotto[k][temp]) {
					i--;
					continue; //break�� ����ϸ� �ߺ��� ����
				}
				// ���� ���� �迭�� �� ���̳ʽ� ���밪(abs)�� 1�̸� ī��Ʈ ������ ����
				if (abs(lotto[k][i] - lotto[k][temp] == 1)) {
					count += 1;
				}
			}
		
			// ������ ¦������ Ȧ�� ���� �˻�
			if (lotto[k][i] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
	}






	return 0;
}