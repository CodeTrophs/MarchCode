import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");

        int n = sc.nextInt();
        int a=0;
        while(n>0)
        {
            a++;
            n/=10;
        }
 System.out.println(a);
}
}