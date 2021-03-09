#include<iostream.h>
#include<conio.h>

void main()
{
 long long int fac=1,n,i;
 clrscr();
 cout<<"Day 7";
 cout<<"\nEnter the number(<20): ";
 cin>>n;
 for(i=1;i<=n;i++)
    fac*=i;
  cout<<"Factorial of "<<n<<" is "<<fac;
 getch();
}
