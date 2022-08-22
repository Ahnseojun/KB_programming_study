import java.util.Scanner;

class Clock {
	private int hour;
	private int minute;
	private int second;

	// 생성자
	// 객체 생성할때만 사용
	public Clock(int h, int m, int s) {
		this.hour = h;
		this.minute = m;
		this.second = s;
	}

	// 함수 만들기
	// 함수가 호출되면 얼마든지 값을 변경 가능
	public void setTime(int h, int m, int s) {
		this.hour = h;
		this.minute = m;
		this.second = s;
	}

	public int getHour() {
		return this.hour;
	}

	public int getMinute() {
		return this.minute;
	}

	public int getSecond() {
		return this.second;
	}

}

public class Main2 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);

		System.out.println("현재 시간");
		int hour = s.nextInt();
		int minute = s.nextInt();
		int second = s.nextInt();

		Clock c1 = new Clock(hour, minute, second);
		Clock c2 = new Clock(12, 40, 00);

		// c2 객체의 시분초 값을 점심시간으로 변경 -> 함수 만들기
		// c2.setTime(12, 40, 00);
		// c1, c2간 시간 차이 계산

		int diff_h = c2.getHour() - c1.getHour();
		int diff_m = c2.getMinute() - c1.getMinute();
		int diff_s = c2.getSecond() - c1.getSecond();

		if (diff_m < 0) {
			diff_h -= 1;
			diff_m += 60;
		}
		if (diff_s < 0) {
			diff_m -= 1;
			diff_s += 60;
		}
		if (diff_h < 0) {
			diff_h += 24;
		}

		System.out.println("현재 시간은 " + c1.getHour() + "시" + c1.getMinute() + "분 " + c1.getSecond() + "초");
		System.out.println("점심 시간은 " + c2.getHour() + "시" + c2.getMinute() + "분 " + c2.getSecond() + "초");
		System.out.println("점심 시간까지 남은 시간은" + diff_h + "시" + diff_m + "분 " + diff_s + "초");
	}
}