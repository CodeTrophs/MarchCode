import java.util.Scanner;

public class DaySeven {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number :");
		int n = sc.nextInt();
		
		int count = 0; 
		
		while(n != 0) {
			n /=10;
			
			count++;
		}
		System.out.println("Number of digits in the number is: "+count);
		sc.close();
	}
}