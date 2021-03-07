#include<iostream.h>
#include<conio.h>

void checkleap()
{ int y,flag=0;
  cout<<"Enter the year";
  cin>>y;
  if(y%100==0)   //given year is leap year or not
    if(y%400==0)
      flag=1;
  else if(y%4==0)
     flag=1;
  else
    flag=0;
  if(flag!=0)
  cout<<"No of days in 2nd month are 29";
  else
  cout<<"No of days in 2nd month are 28";

}

void main()
{
 int mm;
 clrscr();
 cout<<"Enter the month to be checked :";
 cin>>n;
 switch(n){
  case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : cout<<"No of days in"<<n<<"month are 31";
  break;
  case 4 : case 6 : case 9 : case 11 : cout<<"No of days in"<<n<<"month are 30";
  break;
  case 2 : checkleap();
  break;
  deafault:cout<<"Invalid Month";
}
 getch();
}
