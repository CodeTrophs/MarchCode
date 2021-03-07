// Write a program to print all the natural numbers between n and m (n and m are user input) ( n > 0 , m > 0 ).

#include<iostream>
using namespace std;
int main()
{
  int n, m;
  cin>>n>>m;
  for(int i=n; i<=m; i++)
  {
    cout<<i;
  }
}
