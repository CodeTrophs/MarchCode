// Write a program to print the sum of all the numbers and also the sum of all the even numbers between ( n and m ).

#include<iostream>
using namespaces std;
int main()
{
  int n, m, sum=0, even_sum=0;
  cin>>n>>m;
  cout<<"PRINTING NUMBERS FROM "<<n<<" TO "<<m<<endl;
  for(int i=0; i<=m; i++)
  {
    cout<<i<<endl;
    sum+=i;
    if(i%2==0)
      even_sum+=i;
  }
  cout<<"> Sum of numbers from " << n << " to " << m << " : " <<sum<<endl;
  cout<<"> Sum of even numbers from " << n << " to " << m << " : " <<even_sum;
}
