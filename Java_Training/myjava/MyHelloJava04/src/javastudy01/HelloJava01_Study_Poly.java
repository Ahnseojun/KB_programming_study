package javastudy01;

import java.util.ArrayList;

public class HelloJava01_Study_Poly {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal a = new Animal();
		Dog d = new Dog();
		Cat c = new Cat();
		
		// ������
		// ������ ����, �������� new �ڼ�()
		Animal a1 = new Dog();
		Animal a2 = new Cat();
		
		// �������� ������ ��
		// ����Ŭ���� Ÿ������ �� �迭�̳� ArrayList�� 
		// �ڼ�Ŭ���� Ÿ���� ��ü���� ��
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
		ah1.setName("�� ��");
		ah1.setAge(29);
		((Dog)ah1).setHairColor("����");
		
		Animal ah2 = new Cat();
		ah2.setName("������");
		ah2.setAge(24);
		((Cat)ah2).setEyeColor("�ݺ�");
		
		
		animalHospital.add(ah1);
		animalHospital.add(ah2);

	
	
	}
}
