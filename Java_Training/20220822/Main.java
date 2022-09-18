import java.util.Scanner;

class Teacher {
	// 클래스 구성요소 : 필드(멤버 변수), 메소드(멤버 함수), 생성자
	// 변수 선언
	private String name;
	private int year;
	private String gender;

	// 함수 선언
	// this를 통해 현재 객체를 참조
	public String getName() {
		return this.name;
	}

	public int getYear() {
		return this.year;
	}

	public String getGender() {
		return this.gender;
	}

	public void setName(String n) {
		this.name = n;
	}

	public void setYear(int y) {
		this.year = y;
	}

	public void setGender(String g) {
		this.gender = g;
	}

	// 생성자 선언
	// 오버로딩 : 매개변수의 수와 종류가 다르면, 동일한 이름의 함수라도 함께 사용 가능
	// 1. 클래스 이름과 동일해야 한다
	// 2. 멤버 함수처럼 따로 호출할 수 없는 메소드
	public Teacher(String n, int y, String g) {
		this.name = n;
		this.year = y;
		this.gender = g;
	}

	public Teacher(String n, String g) {
		this.name = n;
		this.gender = g;
	}
}

public class Main {
	public static void main(String args[]) {
		// 객체 선언
		Teacher[] t = new Teacher[3];
		t[0] = new Teacher("안서준", "남자");
		t[1] = new Teacher("이동준", 2, "남자");
		t[2] = new Teacher("아무무", 3, "미라");

		System.out.println("교사 목록");
		for (int i = 0; i < t.length; i++) {
			System.out.print("이름 : " + t[i].getName());
			System.out.print(" 경력 : " + t[i].getYear());
			System.out.println(" 성별 : " + t[i].getGender());
		}

		// 입력문 포함해서 객체 생성 및 출력하기
		// 자신의 이름, 성별만 입력받은 뒤 이에 관한 객체를 생성하고 위와 같은 양식으로 출력
		System.out.println("나의 정보");

		Scanner s = new Scanner(System.in);
		Teacher[] me = new Teacher[1];

		me[0] = new Teacher(s.next(), s.nextInt(), s.next());

		for (int i = 0; i < 1; i++) {
			System.out.println("이름 : " + me[0].getName());
			System.out.println("경력 : " + me[0].getYear());
			System.out.println("성별 : " + me[0].getGender());
		}

	}
}