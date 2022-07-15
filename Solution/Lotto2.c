#include<stdio.h>

int main() {

	int temp = 0;
	int rtemp = 0;

	// 5 * 6의 숫자를 담을 2차원 배열 생성
	int lotto[5][6] = {NULL};

	// 프로그램 구성 변수들 선언
	int count = 0;
	int numCount = 0;  //나는 이걸 없애고싶다
	int odd = 0;
	int even = 0;

	//랜덤 난수를 위한 시간 함수 사용
	srand((unsigned int)time(NULL));  //unsigned int 는 0부터 양수만unsigned int 는 0부터 양수만 가짐

	// 5줄 생성
	for (int k = 0; k < 5; k++) {
		//6개 난수 추출을 위한 반복문
		for (int i = 0; i < 6; i++) {
			lotto[k][i] = rand() % 45 + 1; // 1~45까지 숫자를 사용, +1을 안하면 0~44의 숫자가 나옴

			//생성된 배열 이전 까지 검사할 반복문
			for (temp = 0; temp < i; temp++) {
				// 만약 이전 배열들과 비교해서 같으면 다시 돌아가서 난수 다시 추출
				if (lotto[k][i] == lotto[k][temp]) {
					i--;
					continue; //break를 사용하면 중복이 나옴
				}
				// 만약 이전 배열들 간 마이너스 절대값(abs)이 1이면 카운트 변수에 누산
				if (abs(lotto[k][i] - lotto[k][temp] == 1)) {
					count += 1;
				}
			}
		
			// 값들이 짝수인지 홀수 인지 검사
			if (lotto[k][i] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
	}






	return 0;
}