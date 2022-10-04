package javastudy1004;
import java.util.*;

public class JavaStudy01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> number1 = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
	
		number1.add(10);
		number1.add(20);
		number1.add(30);
		number1.add(40);
		number1.add(50);
		System.out.println(number1.get(3));
		
		System.out.println("숫자 입력");
		
		int num1;
		num1 = sc.nextInt();

		for(int i = 0 ; i < number1.size(); i++) {
			if(number1.get(i) <= num1) {
				number1.remove(i);
				i--;
			}
		}
		System.out.println(number1);
		// 4번
		
		ArrayList<Integer> number2 = new ArrayList<Integer>();
		
		int min = 1;
		int max = 999999;
		
		for(int i = 0; i < number2.size(); i++) {
			System.out.println(i+1  + "번째 값 입력 : ");
			int inputNum = sc.nextInt();
			
			number2.add(inputNum);
			
			
		
		}
		
		
		
	}
}
