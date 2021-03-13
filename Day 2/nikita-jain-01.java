/*
Input -> 5
Output -> 5 is divisible by both 5 and 11
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        if(first%5==0 && first%11==0)
            System.out.print(first+" is divisible by both 5 and 11");
        else
            System.out.print(first+" is not divisible by both 5 and 11");
    }
}