#include<iostream.h>
#include<conio.h>

void main()
{
 int n,s=0;
 clrscr();
 cout<<"Enter the number to be checked :";
 cin>>n;
 if( n%5 == 0)
  { for (i=1;n>0;i++,n/10) {
     if(i%2==0)
      s-=n%10;
     else
      s+=n%10;  }
    if(s%11==0)
     cout<<"No is divisible by both 11 and 5";
     else
      cout<<"No is only divisible by 5";
  }
  else
      cout<<"No is not divisible by both 11 and 5";

 getch();

}
