import java.util.*;

class Phone {
	private String name;
	private String num;
	// 멤버 변수 : name, num
	
	// 생성자엔 어떤 명령문이든 쓸 수 있지만 주로 변수 초기화에 많이 사용
	public Phone(String name, String num) {
		this.name = name;
		this.num = num;
	}
	
	public String getName() {return this.name;}
	public String getNum() {return this.num;}
	
	public void print() {
		System.out.println("휴대폰 name : " + name);
		System.out.println("휴대폰 num : " + num);
	}
	
}

class SmartPhone extends Phone {
	
	private String ios;
	private String account;
	// 멤버 변수 : ios, account + phone : name, num
	
	// 부모 클래스에 생성자가 만들어지면 자식 클래스에서도 해당 생성자를 만들어야 함
	// 이를 위해서, super()를 주로 사용 함
	public SmartPhone(String name, String num, String ac) {
		super(name, num);  // 부모 클래스에 있는 name, num 초기화
		this.ios = "ios15";
		this.account = ac;
			
	}
	public void print() {
		System.out.println("스마트폰 정보");
		System.out.println("휴대폰 기종 : " + this.getName());
		System.out.println("휴대폰 번호 : " + this.getNum());
		System.out.println("휴대폰 버전 : " + this.ios);
		System.out.println("휴대폰 계정 : " + this.account);
	}
}

public class MainClass {
	public static void main(String[] args) {
		Phone p = new Phone("아이폰 8", "010-1234-5678");
		SmartPhone sp = new SmartPhone("아이폰12", "010-9876-5432", "orbitasj");
		
		p.print(); 
		System.out.println();
		sp.print();
		
	}
}