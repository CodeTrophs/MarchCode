/*
Input -> hello

Output -> Hello
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        String st1=scan.nextLine();
        String st2="";
        String st3="";
        int i;
        for(i=0;i<st1.length();i++)
        {
            if(st1.charAt(i)==' ')
            {
                st3=st3+st2.substring(0, 1).toUpperCase()+"";
                st3=st3+st2.substring(1,st2.length());
                st3=st3+" ";
                st2="";
            }
            else
            st2=st2+st1.charAt(i)+"";
        }
        System.out.println(st3);
    }
}