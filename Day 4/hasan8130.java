import java.util.*;
public class ascii {
    public static void main(String[]args)
    {Scanner sc=new Scanner(System.in);
        System.out.println("enter a number character");
        char ch=sc.next().charAt(0);
        int n=(int)ch;
        System.out.println("ascii value of "+ch+" is "+n);
    }
}
