import java.util.Scanner;

public class DayFive {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter two integers n and m ( n > 0 , m > 0 ) : ");
		int n = sc.nextInt();
		int m = sc.nextInt();

		if(n<0 || m<0) {
			System.out.println("Enter valid numbers");
		}else {
			for(int i = n ; i <= m ; i++) {
				System.out.print(i+", ");
			}
		}
		sc.close();
	}
}
