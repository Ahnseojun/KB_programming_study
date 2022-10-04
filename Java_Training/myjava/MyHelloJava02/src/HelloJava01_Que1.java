import java.util.*;

public class HelloJava01_Que1 {

	public static void main(String[] args) {
		int[] numbers = new int[5];
		// numbers 배열엔 [0,0,0,0,0]이 들어감
		// 값이 0 이 없을 경우도 있으므로 numbers에 값을 넣고 그 다음에 max, min 지정 후 비교
		Scanner s = new Scanner(System.in);
		
		for(int i = 0; i<numbers.length; i++) {
			System.out.println(i+1 + "번째 값 입력 : ");
			numbers[i] = s.nextInt();
		}
		
		// 가장 첫번째 값을 max,min으로 가정
		
		int max = numbers[0];
		int min = numbers[0];
		
		//foreach 문
		for (int i : numbers) {
			if(i > max ) {
				max = i;
			}
			if(i < min) {
				min = i;
			}
		}
		
		System.out.println("foreach // 최최댓값 : " + max);
		System.out.println("최솟값 : " + min);
		
		for(int i = 0; i<numbers.length; i++) {
			if(numbers[i] > max) {
				max = numbers[i];
			}
			if(numbers[i] < min) {
				min = numbers[i];
			}
		}
		
		System.out.println("최댓값 : " + max);
		System.out.println("최솟값 : " + min);
	}
}
