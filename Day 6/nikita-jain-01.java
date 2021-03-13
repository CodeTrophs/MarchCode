/*
Input -> 1 5
Output -> 15
          6
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int second=scan.nextInt();
        int i,sum=0,even=0;
        for(i=first;i<=second;i++)
        {
            sum=sum+i;
            if(i%2==0)
                even=even+i;
        }
        System.out.println("Sum of all numbers: "+sum);
        System.out.println("Sum of all even numbers: "+even);
    }
}