/*
Input -> 6
Output -> 720
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int i,mul=1;
        for(i=1;i<=first;i++)
        mul=mul*i;
        System.out.println(mul);
    }
}