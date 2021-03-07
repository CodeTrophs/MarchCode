//Day1 - Write a program to check whether a number is odd or even.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    // using if-else statement
    if(num%2==0)
    {
        cout<<num<<" is an even number."<<endl;
    }
    else
    {
        cout<<num<<" is an odd number."<<endl;
    }
    
    // using ternary operator
    (num%2==0) ? cout<<num<<" is an even number."<<endl : cout<<num<<" is an odd number."<<endl;
}