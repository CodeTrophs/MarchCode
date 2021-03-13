/*
Input -> 15 35
Output -> 105
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
        for(i=2;i<=first || i<=second;i++)
        {
            if(first%i==0 && second%i==0)
            {
                first=first/i;
                second=second/i;
                mul=mul*i;
            }
            else if(first%i==0 || second%i==0)
            {
                if(first%i==0)
                    first=first/i;
                else if(second%i==0)
                    second=second/i;
                mul=mul*i;
            }
        }
        System.out.println(mul);
    }
}