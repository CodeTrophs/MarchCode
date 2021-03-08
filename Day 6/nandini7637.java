import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter range n and m");
        int n = sc.nextInt();
        int m = sc.nextInt();
        int sum=0;
       int  esum=0;
        for(int i=n+1;i<m;i++)
        {     
            sum+=i;
            if(i%2==0)
            esum+=i;
        }
        System.out.println("Sum of Natural nos between n and m=" + sum);
        System.out.println("Sum of Natural nos between n and m=" +esum);

}
}