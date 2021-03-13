/*
Input -> 1 5
Output -> 1 2 3 4 5
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int second=scan.nextInt();
        for(int i=first;i<=second;i++)
            System.out.print(i+" ");
    }
}