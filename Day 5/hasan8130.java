import java.util.*;
public class natural {
    
    
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter two positive integers for the range");
        int n=sc.nextInt();
        int m=sc.nextInt();
        if(n>0&&m>0)
        {
            for(int i=n;i<=m;i++)
            System.out.print(i+" ");
        }
        else
        System.out.print("invalid input");
    }
}
