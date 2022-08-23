// 부모 클래스
class Person1 {
	private String name;
	private int age;
	
	public String getName() {return this.name;}
	public int getAge() {return this.age;}
	
	//Person 맴버 : 이름, 나이
	public Person1(String n, int a) {
		this.name = n;
		this.age = a;
	}
}

// 자식 클래스
// 이중 상속을 지원하지 않음
class Student1 extends Person1 {
	//Student 맴버 : 학교이름, 이름, 나이
	private String school;
	

	
	public Student1 (String n, int a, String s) {
		// super() : 이를 통해서 부모(상위) 클래스의 생성자 호출
		super(n, a); // 여기서 이름과 나이가 초기화
		this.school = s;
	}
	public void print() { // 학생 클래스
		System.out.println("학생 정보");
		System.out.println("이름 : " + this.getName());
		System.out.println("나이 : " + this.getAge());
		System.out.println("학교 이름 : "+ this.school);
	}
	
}

class Teacher1 extends Person1 {
	private String company;
	//Teacher 멤버 : 소속, 이름, 나이
	

	public Teacher1 (String n, int a, String c) {
		// super() : 이를 통해서 부모(상위) 클래스의 생성자 호출
		super(n, a);	   // 여기에 이름과 나이가 초기화
		this.company = c;  // 소속 값 초기화
	}
	public void print() { // 교사 클래스
		System.out.println("교사 정보");
		System.out.println("이름 : " + this.getName());
		System.out.println("나이 : " + this.getAge());
		System.out.println("소속 : " + this.company);
	}
	
}


public class Ex_Stu {
	public static void main (String argsp[]) {
		// 학생과 교사의 객체를 하나씩 생성
		Student1 stu = new Student1("안서준", 27, "KMU");
		Teacher1 t = new Teacher1("안서준", 27, "MIS");
		
		stu.print();
		System.out.println();
		t.print();
		
		
	}
}
