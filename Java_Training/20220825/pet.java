abstract class Animal {
	// 추상 메소드 2개
	abstract String getName();
	abstract void cry();
	
}

class Cat extends Animal {
	private String name;
	
	public Cat() {
	this.name = "고양이";
	}
	
	public String getName() {
		return this.name;
	}
	public void cry() {
		System.out.println("야오오옹");
	}
	
}

class Dog extends Animal {
	private String name;
	
	public Dog() {
		this.name = "강아지";
	}
	
	public String getName() {
		return this.name;
	}
	public void cry() {
		System.out.println("월월월");
	}
}

public class pet {
	public static void main (String argsp[]) {
		Cat c1 = new Cat();
		Dog d1 = new Dog();
		
		System.out.print(c1.getName() +"의 울음소리는 ");
		c1.cry();
		System.out.print(d1.getName() +"의 울음소리는 ");
		d1.cry();
		
	}
}