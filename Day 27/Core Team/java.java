import java.util.Scanner;

public class DayTwentySeven {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int n = sc.nextInt();
		
		System.out.println("Factorial of the number "+n+" is "+factorial(n));
		 
	}
	
	public static int factorial(int n) {
		if(n == 0) {
			return 1;
		}
		return n*factorial(n-1);
	}
}