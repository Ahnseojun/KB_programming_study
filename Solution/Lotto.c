#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
// 로또
// 중복이 없는 단 하나의 숫자가 나와야함
// 1 ~ 45까지 수
// 무작위로 숫자가 나와야 함
int main() {

	int Lotto[6]; // 로또숫자를 저장

	srand((unsigned int)time(NULL));    // 실행될때마다 무작이 값 추출
									    // unsigned int 는 0부터 양수만unsigned int 는 0부터 양수만 가짐

		for (int i = 0; i <6; i++) {
			Lotto[i] = rand() % 45 + 1;     // 1~45까지 숫자를 사용, +1을 안하면 0~44의 숫자가 나옴
			for (int j = 0; j < i; j++) {   // 로또에서 중복 숫자를 제거를 위해서 생성

				if (Lotto[i] == Lotto[j]) { // Lotto[i] 랑 Lotto[j]를 비교 (Lotto[0] == Lotto[0] 일 때 같은 값이 나오면 안됨)
					i--;					// 중복이 발견될 경우 i번째 숫자 다시 뽑음
					break;
				}
			}
		}

		//버블 정렬
		for (int k = 0; k < 6; k++) {
			for (int i = 0; i < 6 - 1; i++) {
				if (Lotto[i] > Lotto[i + 1]) {
					int tmp = Lotto[i];
					Lotto[i] = Lotto[i + 1];
					Lotto[i + 1] = tmp;
				}
			}
		}

		//로또 번호 출력
		
		for (int i = 0; i < 6; i++) {
			printf("%d ", Lotto[i]);
		}

		return 0;

}