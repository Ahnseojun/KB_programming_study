package my.hello.javastudy;
import java.util.*;

public class Student {
		private String name;
		private int age;
		private double score;

		// 만약 속성들이랑  getter setter만 적었다면
		// 암묵적으로 아래와 같이 아무 것도 없는 생성자가 자동 생성
		public Student() {
			
		}
		
		// 생성자
		// 매개 변수가 있는 생성자
		public Student(String name, int age, int score) {
			this.name = name;
			this.age = age;
			this.score = score;
		}
		

		public Student(String name) {
			this.name = name;
		}

		
		// alt shift s r
		// getter setter 생성
		
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
