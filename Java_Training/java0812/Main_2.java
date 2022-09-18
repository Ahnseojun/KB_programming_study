class Score {
	public int korea;
	public int math;
	public int english;
	public int society;
	public int science;
	
	//생성자
	public void Score() {
		this.korea = 50;
		this.math = 50;
		this.english = 50;
		this.society = 50;
		this.science = 50;
	}
	
	public void Score(int korea, int english, int math) {
		this.korea = korea;
		this.english = english;
		this.math = math;		
	}
	
	public void Score(int korea, int english, int math, int society, int science) {
		this.korea = korea;
		this.math = math;
		this.english = english;
		this.society = society;
		this.science = science;
	}
	
	// 멤버 함수
	public void getInfoI() {
		System.out.println("  -- getInfoI() -- ");
		System.out.println("국영수사과 평군 : "+ (korea + english + math + society + science) / 5.0);
	}
	
	public void getInfoII() {
		System.out.println(" -- getInfoIII() -- ");
		System.out.println("국영수 평균 : "+ (korea + english + math) / 3.0 );
	}
	
	public void getInfoIII() {
		System.out.println(" -- getInfoIII() -- ");
		System.out.println("국영수사과 평균 :"+ (korea + english + math+ society + science) / 5.0 );
	}	
}


public class Main_2 {
	public static void main (String args[]) {
	
		Score s1 = new Score();
		
		s1.Score();
		s1.getInfoI();
		
		s1.Score(100, 90, 40);
		s1.getInfoII();
		
		s1.Score(50, 60, 70, 65, 90);
		s1.getInfoIII();				
	}
}
