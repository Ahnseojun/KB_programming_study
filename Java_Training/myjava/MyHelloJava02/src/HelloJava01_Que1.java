import java.util.*;

public class HelloJava01_Que1 {

	public static void main(String[] args) {
		int[] numbers = new int[5];
		// numbers �迭�� [0,0,0,0,0]�� ��
		// ���� 0 �� ���� ��쵵 �����Ƿ� numbers�� ���� �ְ� �� ������ max, min ���� �� ��
		Scanner s = new Scanner(System.in);
		
		for(int i = 0; i<numbers.length; i++) {
			System.out.println(i+1 + "��° �� �Է� : ");
			numbers[i] = s.nextInt();
		}
		
		// ���� ù��° ���� max,min���� ����
		
		int max = numbers[0];
		int min = numbers[0];
		
		//foreach ��
		for (int i : numbers) {
			if(i > max ) {
				max = i;
			}
			if(i < min) {
				min = i;
			}
		}
		
		System.out.println("foreach // ���ִ� : " + max);
		System.out.println("�ּڰ� : " + min);
		
		for(int i = 0; i<numbers.length; i++) {
			if(numbers[i] > max) {
				max = numbers[i];
			}
			if(numbers[i] < min) {
				min = numbers[i];
			}
		}
		
		System.out.println("�ִ� : " + max);
		System.out.println("�ּڰ� : " + min);
	}
}
