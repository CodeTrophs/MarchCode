import java.util.*;
public class sum {
  public static void main(String[] args) {
        
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the range");
    int n=sc.nextInt();
    int m=sc.nextInt();
    int nat=0,even=0;
    for(int i=n;i<=m;i++)
     {
         nat=nat+i;
         if(i%2==0)
         even=even+i;
     }
     System.out.println("sum of natural numbers between "+n+" and "+m+" is "+nat);
     System.out.println("sum of even numbers between "+n+" and "+m+" is "+even);
    }
}

     
