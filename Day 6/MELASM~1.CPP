#include<iostream.h>
#include<conio.h>

void main()
{
 int m,n,sum=0,sum2=0;
 clrscr();
 cout<<"Day 6";
 cout<<"\nEnter the upper limit :";
 cin>>m;
 cout<<"\nEnter the lower limit :";
 cin>>n;
 for( ;n<=m;n++)
  {sum+=n;
   if(n%2==0)
    sum2+=n;
  }
 cout<<"\nSum of all numbers :"<<sum;
 cout<<"\nSum of even no is numbers :"<<sum2;
 getch();

}
