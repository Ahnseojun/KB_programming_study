import java.util.Scanner;


public class Main0805 {
	public static void main(String args[]) {
		//출력문 print /  println / printf
		System.out.print("print() : 줄바꿈 못함 '\\n' 을 써야함   \n");
		System.out.println("println() : 줄바꿈 함");
		System.out.println();

		// 입력문
		// System.in : 사용자에게 입력을 요청
		// Scanner : 입력받은 값을 읽엇 시스템에게 전달
		Scanner s = new Scanner(System.in);  //입력값 위치도 지장있어서 이 줄 이후로 Scanner를 받음
		
		//주요 입력문
		String name = s.next();  // 공백없는 문자열
		System.out.println("이름 : " + name);
		
		int age = s.nextInt();
		System.out.println("나이 : " + age);
		
		boolean gender = s.nextBoolean();  // true : 남자 false : 여자
		if(gender == true) {System.out.println("성별 : 남자");}
		else System.out.println("성별 : 여자");
		
		double height = s.nextDouble(); 
		System.out.println("키 : "+ height);
		
		char bloodtype = s.next().charAt(0); // 몇번째에(at) 있는 문자를 가져온다
		System.out.println("혈액형 : "+ bloodtype);
		
		s.nextLine(); // nextLine이 있으면 한번더 enter 값을 없애야해서 적어줘야함
		String mood = s.nextLine();
		System.out.println("내 상태 : " + mood);
	}
}