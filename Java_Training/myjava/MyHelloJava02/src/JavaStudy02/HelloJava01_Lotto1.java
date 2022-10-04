package JavaStudy02;
import java.util.*;

public class HelloJava01_Lotto1 {

	public static void main(String[] args) {
		// ArrayList �̿��� �ζ�
		// �迭 ��Ÿ�Ϸ� �ڵ� ¥����
		Scanner s = new Scanner(System.in);
		System.out.println("�󸶳�ġ ����");
		int count = s.nextInt() /1000 ; // 5000 �Է��ϸ� count = 5
		
		if(count < 1 || count > 5) {
			System.out.println("�ݾ� �߸�");
			return;
		}

		for (int i = 0; i < count; i++) {
			ArrayList<Integer> lotto = new ArrayList<Integer>();
			for (int j = 0; j < 6; j++) {
				int num = (int)(Math.random()*45)+1;
				
				boolean isDuplicate = false;
				for(int k=0; k <j; k++) {
					if(lotto.get(k)==num) {
						isDuplicate = true;
						j--;
						break;
					}
				}
				if(!isDuplicate) {
					lotto.add(num);
				}				
			}
			
			int bns = (int)(Math.random()*45) +1;
			for(int j = 0; j < lotto.size();j++) {
				if (bns == lotto.get(j)) {
					j--;
				}
			}
			
			Collections.sort(lotto);
			System.out.print(lotto.toString());
			System.out.println(" ���ʽ� ��ȣ : " + bns);
			lotto.clear();		
		}
	}
}