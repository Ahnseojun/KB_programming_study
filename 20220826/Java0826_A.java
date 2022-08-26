// 다중 상속
// java에서는 다중 상속을 지원하고 있지 않음
// 이중 상속 같은 경우엔 예외 : 추상 클래스 사용할 때

// 추상 클래스 Phone 생성
// 추상 클래스나 추상 메소드를 만들 때에는 abstract 키워드 사용
abstract class Phone {
	// 추상 메소드 3개 만들기
	abstract public String getNum();
	abstract public String getName();
	abstract public void print();
}
// 추상 클래스로는 객체 생성할 수 없음
// 반드시 다른 클래스에 상속받아져서 구체적으로 구현이 되어야 함 (=구체화)
// 

class CellPhone extends Phone {
	private String num;
	private String name;
	
	public CellPhone(String name, String num) {
		this.num = num;
		this.name = name;
	}
	
	// 추상 메소드 정의 및 구현 (오버라이딩하여 구현)
	public String getNum() {return this.num;}
	public String getName() {return this.name;}
	
	public void print() {
		// 각 객체의 멤버 변수 정보 출력하기
		System.out.println("CellPhone 정보");
		System.out.println("번호 : " + this.num);
		System.out.println("이름 : " + this.name);
	}
}

// 이중 상속 수행 (phone(추상) - CellPhone - SmartPhone)
class SmartPhone extends CellPhone {
	private String ios;
	private String account;
	
	public SmartPhone(String num, String name, String ios, String ac) {
		// super() 사용해서 num, name에 대하여 초기화 수행
		// *부모 클래스의 생성자에 매개변수가 없다면 굳이 super() 사용하지 않아도 됨
		super(num, name);
		this.ios = ios;
		this.account = ac;
	}
	
	public void print() {
		// CellPhone에 있는 print() 오버라이딩
		// SmartPhone 클래스 통해 만들어진 객체는 이 함수를 실행
		
		System.out.println("이름 : " + getName());
		System.out.println("번호 : " + getNum());
		System.out.println(ios);
		System.out.println(account);
	}
	
}

public class Java0826_A {

	public static void main(String[] args) {
		CellPhone c1 = new CellPhone("안서준", "000");
		SmartPhone s1 = new SmartPhone("안서준", "0000", "ios", "orbitasj");
		
		c1.print();
		System.out.println();
		s1.print();
		
	}
}