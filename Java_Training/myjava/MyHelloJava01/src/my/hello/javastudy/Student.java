package my.hello.javastudy;
import java.util.*;

public class Student {
		private String name;
		private int age;
		private double score;

		// ���� �Ӽ����̶�  getter setter�� �����ٸ�
		// �Ϲ������� �Ʒ��� ���� �ƹ� �͵� ���� �����ڰ� �ڵ� ����
		public Student() {
			
		}
		
		// ������
		// �Ű� ������ �ִ� ������
		public Student(String name, int age, int score) {
			this.name = name;
			this.age = age;
			this.score = score;
		}
		

		public Student(String name) {
			this.name = name;
		}

		
		// alt shift s r
		// getter setter ����
		
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

		public double getScore() {
			return score;
		}

		public void setScore(double score) {
			this.score = score;
		}
		
}
