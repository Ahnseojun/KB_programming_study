package my.hello.javastudy;
import java.util.*;

public class HelloJava01 {
	public static void main(String[] args) {
		 
	// 당첨 번호를 몇 번 뽑아낼지 입력  
	Scanner sc = new Scanner(System.in);
	
	int count = sc.nextInt();
	if (count < 1 || count > 5) {
		System.out.println(count + "잘못된 값!");
		return; //main 메소드 끝내기
	}
	
	for(int i = 0; i <count; i++) {
		
		int[] lotto = new int[6];
		for (int j = 0; j < lotto.length; j++) {
			int num = (int)(Math.random()*45)+1;
			
			boolean isDuplicate = false;
			
			for(int k = 0; k < j; k++) {
				if(lotto[k]==num) {
				isDuplicate = true;
				j--;
				break;	
				}
			}
			// isDuplicate 가 false가 되면 앞의 ! 에 의해서 true가 됨
			// ! : not 연산
			if(!isDuplicate) {
				lotto[j]=num;
			}
		
		}
		
		int bns = (int)(Math.random()*45)+1;
		
		for(int j = 0; j < lotto.length; j++) {
			if (bns == lotto[j]) {
				bns = (int)(Math.random()*45)+1;
				j = -1;
			}
		}
	
		Arrays.sort(lotto);
		System.out.print((i+1) + "번째 번호");
		System.out.print(Arrays.toString(lotto));
		System.out.println(" 보너스 번호 " + bns);
	}
	
	
	}
}
