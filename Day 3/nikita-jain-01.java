/*
Input -> 7
Output -> 31
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        if(first==1 || first==3 || first==5 || first==7 || first==8 || first==10 || first==12)
            System.out.print("31");
        else if(first==2)
            System.out.print("29");
        else
            System.out.print("30");
    }
}