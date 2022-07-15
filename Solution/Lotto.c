#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
// �ζ�
// �ߺ��� ���� �� �ϳ��� ���ڰ� ���;���
// 1 ~ 45���� ��
// �������� ���ڰ� ���;� ��
int main() {

	int Lotto[6]; // �ζǼ��ڸ� ����

	srand((unsigned int)time(NULL));    // ����ɶ����� ������ �� ����
									    // unsigned int �� 0���� �����unsigned int �� 0���� ����� ����

		for (int i = 0; i <6; i++) {
			Lotto[i] = rand() % 45 + 1;     // 1~45���� ���ڸ� ���, +1�� ���ϸ� 0~44�� ���ڰ� ����
			for (int j = 0; j < i; j++) {   // �ζǿ��� �ߺ� ���ڸ� ���Ÿ� ���ؼ� ����

				if (Lotto[i] == Lotto[j]) { // Lotto[i] �� Lotto[j]�� �� (Lotto[0] == Lotto[0] �� �� ���� ���� ������ �ȵ�)
					i--;					// �ߺ��� �߰ߵ� ��� i��° ���� �ٽ� ����
					break;
				}
			}
		}

		//���� ����
		for (int k = 0; k < 6; k++) {
			for (int i = 0; i < 6 - 1; i++) {
				if (Lotto[i] > Lotto[i + 1]) {
					int tmp = Lotto[i];
					Lotto[i] = Lotto[i + 1];
					Lotto[i + 1] = tmp;
				}
			}
		}

		//�ζ� ��ȣ ���
		
		for (int i = 0; i < 6; i++) {
			printf("%d ", Lotto[i]);
		}

		return 0;

}