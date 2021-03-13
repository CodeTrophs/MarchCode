/*
Input -> 10 30
Output -> 11 13 17 19 23 29
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int first=scan.nextInt();
        int last=scan.nextInt();
        int i,j,count=0;
        for(i=first;i<=last;i++)
        {
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count==2)
                System.out.print(i+" ");
        }
    }
}