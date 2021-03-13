/*
Input -> c
Output -> 99
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        char first=scan.next().charAt(0);
        int n=(int)first;
        System.out.print(n);
    }
}