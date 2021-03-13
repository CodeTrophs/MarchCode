/*
Input -> 6574
Output -> 4
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int i,sum=0;
        while(first!=0)
        {
            i=first%10;
            sum++;
            first=first/10;
        }
        System.out.println(sum);
    }
}