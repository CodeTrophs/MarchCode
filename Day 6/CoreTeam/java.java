import java.util.Scanner;

public class DaySix {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of n and m : ");
		int n = sc.nextInt();
		int m = sc.nextInt();

		int sumOfAllNumbers = 0;
		int sumOfEvenNumbers = 0;

		for(int i = n ; i<=m ; i++) {
			if(i%2 == 0) {
				sumOfEvenNumbers+= i;
			}
			sumOfAllNumbers += i;
		}
		System.out.println("Sum of the numbers betweeen n and m is : "+sumOfAllNumbers);
		System.out.println("Sum of the even numbers between n and m is : "+sumOfEvenNumbers);
		sc.close();
	}
}
