/*
Input -> 10 35
Output -> 
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int second=scan.nextInt();
        int i,j,mul=1;
        for(i=1;i<=first && i<=second;i++)
        {
            if(first%i==0 && second%i==0)
            mul=i;
        }
        System.out.println(mul);
    }
}