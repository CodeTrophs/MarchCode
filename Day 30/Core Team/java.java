import java.util.Scanner;

public class DayThirty {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a String: ");
		String str = sc.nextLine();
		
		char[] charArray = str.toCharArray();
		
		charArray[0] = Character.toUpperCase(charArray[0]);
		
		
		for(int i = 0 ; i<charArray.length-1; i++) {
			if(Character.isLetter(charArray[i+1]) && charArray[i] == ' ' ) {
				charArray[i+1] = Character.toUpperCase(charArray[i+1]);
			}
		}
		
		System.out.println(String.valueOf(charArray));
		
		sc.close();
	}
}