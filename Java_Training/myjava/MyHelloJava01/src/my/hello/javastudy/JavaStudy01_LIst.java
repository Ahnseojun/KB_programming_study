package my.hello.javastudy;

import java.util.*;

public class JavaStudy01_LIst {
	public static void main(String[] args) {

		//�迭.
	      //����� ���ÿ� ũ�Ⱑ ������
	      int[] numbers=new int[5];
	      
	      //ArrayList
	      
	      ArrayList<Integer> nums = new ArrayList<Integer>();
	      
	      // ���� �Ҵ�(�迭)
	      numbers[0]=10;
	      numbers[1]=30;
	      System.out.println("ù��° �� : "+numbers[0]);
	      
	      //���� �߰��ϴ� ��
	      nums.add(10);
	      nums.add(30);
	      
	      //Ư�� ��°�� �� �����ϱ�
	      nums.set(0, 20);  // 0��° �� 20 ���� ����
	      System.out.println(nums.get(0)); // ù��° �� ����(get)
	      
	      // foreach ���� ctrl space �ϸ� ����� �ڵ�
	      // �迭�� ���̸�ŭ �ݺ����� �����ϰ�
	      // Ŭ��(:) �տ� �ִ� �� �迭 ���� �ִ� ������ҵ�
	      for (Integer integer : numbers) {
	         System.out.println(integer);
	      } // �迭�� ���̰� 5�̰�, 2,3,4��°�� �⺻���� 0�� ����
	      for (Integer integer : nums) {
	         System.out.println(integer);
	      }

	      nums.remove(0);
	      nums.add(100);
	      nums.add(30);
	      nums.add(30);
	      
	
	}
	}