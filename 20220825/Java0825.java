// extends를 이용한 송속을 배움
// 추상 클래스가 이 상속을 더 적극적으로 이용
// 추상 클래스 :: "추상적인 클래스", 구체적으로 정의되지 않은 클래스
// 추상 클래스는 추상 메소드를 하나라도 포함하고 있어야함

// 추상 클래스는 반드시 상속받아져서 구체화가 필요함 (상속 사용)
// 추상 메소드 :: "추상적인 메소드", 구체적으로 정의되지 않은 메소드

abstract class Person {  // 추상 클래스로 만들기
	// 추상 클래스로 만들기 위해서는 abstract 키워드 필요
	// 추상 메소드 또한 abstract 필요
	abstract public void printName();
	abstract public void print();

}


class Me extends Person {
	// 추상 클래스를 상속받고 난 뒤로 빨간줄이 생기는 이유는
	// 추상 클래스를 구체화하지 않았기 때문
	// 메소드를 구체화한다 = 뜻은 중괄호를 열어서 명령문을 작성
	private String name;  // 자신의 이름 저장
	
	public Me(String n) {
		this.name= n;
	}
	
	public void printName() {
		//추상 메소드 printName()을 상속받아 구체화
		System.out.println("제 이름은 " + this.name +"입니다");
	}
	public void print() {
		System.out.println("추상 메소드 print()를 상속받아 구체화");
	}	
	
}

public class Java0825 {
	public static void main(String[] args) {
		// Person p = new Person();
		// 추상 클래스는 객체 생성 불가능
		Me m = new Me("안서준");
		
		m.printName();
		m.print();

	}

}
