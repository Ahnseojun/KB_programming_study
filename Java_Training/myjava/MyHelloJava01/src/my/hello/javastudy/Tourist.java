package my.hello.javastudy;

public class Tourist {
	private String name;
	private int age;
	private int beonho;
	private String sNum; // 소셜넘버
	// 주민번호 앞자리가 0인 경우도 있어서 String으로 함

	
	// alt shift s o
	// 마우스 오른쪽  > Source > Generate > Constructor
	
	// * 여기서 생성자 하나도 안 만들면 암묵적으로
	// public Tourist() { } 이렇게 아무것도 안 하는 빈 생성자가 하나 만들어짐
	
	
	public Tourist() {
		//super(); //조상객체(부모객체)의 생성자
	}
	
	public Tourist(String name, int age, int beonho, String sNum) {
		this.name = name;
		this.age = age;
		this.beonho = beonho;
		this.sNum = sNum;
	}
	public Tourist(String name) {
		this.name = name;
	}

	//alt shift s r
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public int getBeonho() {
		return beonho;
	}
	public void setBeonho(int beonho) {
		this.beonho = beonho;
	}
	public String getsNum() {
		return sNum;
	}
	public void setsNum(String sNum) {
		this.sNum = sNum;
	}
	
	
	
	
}

