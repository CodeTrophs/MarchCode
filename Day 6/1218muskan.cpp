#include<iostream>
using namespace std;

int main()
{
    int n,m,sum=0,even_sum=0;
    cout<<"enter lower limit: ";
    cin>>n;
    cout<<"enter upper limit: ";
    cin>>m;

    for(int i=n;i<m;i++)
    {
        sum+=i;
        if(i%2==0)
            even_sum+=i;
    }

    cout<<"\n sum of all the numbers between n and m = "<<sum;
    cout<<"\n sum of all the even numbers between n and m = "<<even_sum;
    return 0;
}
