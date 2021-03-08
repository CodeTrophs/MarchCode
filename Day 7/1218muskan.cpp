#include<iostream>
using namespace std;

int main()
{
    int n,count_digits=0,r;
    cout<<"enter any number: "; cin>>n;
    while(n!=0)
    {
       r=n%10;
       count_digits+=1;
       n=n/10;
    }

    cout<<"no. of digits in entered number are: "<<count_digits;
    return 0;
}
