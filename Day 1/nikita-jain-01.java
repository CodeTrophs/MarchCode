/*
Input -> 6
Output -> 6 is even
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        if(first%2==0)
            System.out.print(first+" is even");
        else
            System.out.print(first+" is odd");
    }
}