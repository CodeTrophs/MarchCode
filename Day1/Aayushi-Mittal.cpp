//Day1 - Write a program to check whether a number is odd or even.

#include <iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter a number to check weather it is even or odd : ";
  cin>>num;
  (num%2==0) ? cout<<num<<" is even." : cout<<num<<" is odd.";  //Ternary operator
  return 0;
}
