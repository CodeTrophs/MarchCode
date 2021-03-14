/*
Input -> 153
Output -> 153 is armstrong
*/



import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int no=scan.nextInt();
        int i,j,sum=0,mul=1,count=0;
        int n=no;
        int nn=no;
        while(n!=0)
        {
            count++;
            n=n/10;
        }
        while(no!=0)
        {
            mul=1;
            j=no%10;
            for(i=1;i<=count;i++)
                mul=mul*j;
            sum=sum+mul;
            no=no/10;
        }
        if(sum==nn)
            System.out.println(nn+" is Armstrong");
        else
            System.out.println(nn+" is not armstrong");
    }
}