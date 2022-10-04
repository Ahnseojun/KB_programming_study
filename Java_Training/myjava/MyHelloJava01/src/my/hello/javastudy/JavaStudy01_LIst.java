package my.hello.javastudy;

import java.util.*;

public class JavaStudy01_LIst {
	public static void main(String[] args) {

		//배열.
	      //선언과 동시에 크기가 정해짐
	      int[] numbers=new int[5];
	      
	      //ArrayList
	      
	      ArrayList<Integer> nums = new ArrayList<Integer>();
	      
	      // 값을 할당(배열)
	      numbers[0]=10;
	      numbers[1]=30;
	      System.out.println("첫번째 값 : "+numbers[0]);
	      
	      //값을 추가하는 것
	      nums.add(10);
	      nums.add(30);
	      
	      //특정 번째의 값 수정하기
	      nums.set(0, 20);  // 0번째 값 20 으로 수정
	      System.out.println(nums.get(0)); // 첫번째 값 읽음(get)
	      
	      // foreach 적고 ctrl space 하면 생기는 코드
	      // 배열의 길이만큼 반복문을 수행하고
	      // 클론(:) 앞에 있는 건 배열 안의 있는 구성요소들
	      for (Integer integer : numbers) {
	         System.out.println(integer);
	      } // 배열의 길이가 5이고, 2,3,4번째는 기본값인 0이 있음
	      for (Integer integer : nums) {
	         System.out.println(integer);
	      }

	      nums.remove(0);
	      nums.add(100);
	      nums.add(30);
	      nums.add(30);
	      
	
	}
	}