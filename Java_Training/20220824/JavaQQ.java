import java.util.Scanner;

class Point { 
	// 위치 정보(x, y)
	 private int x;
	 private int y;
	 
	 // x좌표 y좌표의 값을 반환하는 get() 함수
	 public int getX() {return this.x;}
	 public int getY() {return this.y;}
	 
	 
	 public Point(int a, int b) {
		 this.x = a;
		 this.y = b;
	 }
	 public void print() {
		 System.out.println("Point의 x 값 " + this.x);
		 System.out.println("Point의 y 값 " + this.y);
	 }
}


class ColorPoint extends Point { 
	// 위치 정보, 색상 정보 (x,y / color)
	private String color;
	public ColorPoint(int a, int b, String s) {
		super(a, b); // 부모 클래스의 생성자를 통해 위치 정보르 초기화
		this.color = s;
	}
	public void print() {
		// ColorPoint 클래스의 객체에 의해 호출될 때 실행됨
		// < 오버라이딩 발생 >
		// 부모 클래스의 함수 중 형태가 같은 함수가 있을 시 자신의 클래스에 있는 함수를 우선시하여 실행
		System.out.println("ColorPoint의 x " + this.getX());
		System.out.println("ColorPoint의 y " + this.getY());
		System.out.println("ColorPoint의 color " + this.color);
	}
}

public class JavaQQ {
	public static void main (String args[]) {
	Scanner s = new Scanner(System.in);
	int x1 = s.nextInt();
	int y1 = s.nextInt();
	Point p1 = new Point(x1, y1);
	
	int x2 = s.nextInt();
	int y2 = s.nextInt();
	String color = s.next();
	ColorPoint p2 = new ColorPoint(x2, y2, color);

	p1.print();
	System.out.println("");
	p2.print();
	
	}
}