// 클래스와 상속의 내용 정리
// 클래스를 보통 객체를 생성하는데 사용
// 객체를 왜 만드는가? - 자바 자체가 객체지향이라
// 클래스의 구성 요소 : 필드(멤버 변수), 메소드 (멤버 함수), 생성자

class AA {
	private int n1; // 멤버 변수 선언
	
	// 생성자는 객체를 생성하는 데에 자동적으로 실행되는 메소드()
	// 생성자의 이름은 클래스의 이름과 동일해야함
	public AA(int n) {
		System.out.println("-- A() --");
		this.n1 = n;
	}

	public void setN1(int a) { // 변수 n1의 값을 "변경"
		this.n1 = a;
	}
	public int getN() {return this.n1;} // 변수 n1의 값을 "반환"
	
	
	// 오버로딩 : 함수명이 같아도 매개변수의 수와 종류가 다르면 함께 사용할 수 있음
	public int Sum() {
		System.out.println("매개변수 없는 Sum 함수 사용");
		return 1;
	}
	public int Sum(int a, int b) {
		System.out.println("매개변수 있는 Sum 함수 사용");
		return a + b;
	}
	
}

// 상속 -> 부모 클래스(상위 클래스), 자식 클래스(하위 클래스) 개념
// 부모 클래스의 멤버를 자식 클래스가 복붙하여 자신의 것으로 만듦

// 상속을 할 때, extends 키워드 사용
class BB extends AA {	// AA : 부모 클래스, BB : 자식 클래스

	private int n2;  // 멤버 변수
	// BB에 대한 멤버 변수 : n1, n2
	
	// AA클래스에서 생성자를 만든 상태
	// 그렇기 때문에 해당 클래스에서 AA 클래스의 생성자를 반드시 실행
	// 상속을 걸게 되면, 생성자 간에는 종석적인 관계가 생성
	public BB(int a, int b) {
		super(a); // AA 클래스 생성자의 n1 값, // super() 함수 : 부모 클래스의 생성자를 불러와 실행, int a,b 중에 하나
		this.n2 = b;
	}
	
	public int getN2() {return this.n2;}

	// 오버라이딩 : 부모 클래스의 멤버와 자기 자신의 클래스의 멤버 중
	// 동일한 멤버가 있을 시, 자기 자신(자식 클래스)의 것을 우선시하여 사용
	
	
	public void setN1(int a) { // 변수 n1의 값을 "변경"
		this.n2 = a;
	}
	
	public int getN() {
		return this.n2;
	}
	

}



public class Re_Main {
	public static void main(String args[]) {
		// 객체 생성
		// 객체 생성을 할 때 생성자의 매개변수에 따라 값을 전송해야함
		// 클래스를 통해서 여러 개의 객체 생성 가능
		AA a = new AA(2);
		AA aaa = new AA(5);
		
		BB b = new BB(10, 20);
		
		System.out.println("a의 n1 값은 " + a.getN());
		System.out.println("aaa 의 n1 값은 " + a.getN());

		
		System.out.println("b의 b 값 " + b.getN2());
		
		
		// 오버로딩 적용
		a.Sum();
		a.Sum(2, 4);
		
		// 오버라이딩 적용
		System.out.println("a 객체의 n1 값 : " + a.getN());
		System.out.println("b 객체의 n2 값 : " + b.getN());
	
	}
}
