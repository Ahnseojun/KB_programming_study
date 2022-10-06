package javastudy01;

import java.util.ArrayList;

public class HelloJava01_Study_Poly {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal a = new Animal();
		Dog d = new Dog();
		Cat c = new Cat();
		
		// 다형성
		// 왼쪽은 조상, 오른쪽은 new 자손()
		Animal a1 = new Dog();
		Animal a2 = new Cat();
		
		// 다형성을 응용한 것
		// 조상클래스 타입으로 된 배열이나 ArrayList에 
		// 자손클래스 타입의 객체들이 들어감
		ArrayList<Animal> zoo = new ArrayList<Animal>();
		zoo.add(a);
		zoo.add(d);
		zoo.add(c);
		zoo.add(a1);
		zoo.add(a2);
		zoo.add(new Animal());
		zoo.add(new Dog());
		zoo.add(new Cat());
	
		ArrayList<Animal> animalHospital = new ArrayList<Animal>();
		
		Animal ah1 = new Dog();
		ah1.setName("김 개");
		ah1.setAge(29);
		((Dog)ah1).setHairColor("눈썹");
		
		Animal ah2 = new Cat();
		ah2.setName("길고양이");
		ah2.setAge(24);
		((Cat)ah2).setEyeColor("금빛");
		
		
		animalHospital.add(ah1);
		animalHospital.add(ah2);

	
	
	}
}
