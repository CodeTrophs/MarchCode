#include<iostream>
using namespace std;

int main()
{
    int n,m,num_sum=0,evennum_sum=0;
    cout<<"enter lower limit ";
    cin>>n;
    cout<<"enter upper limit ";
    cin>>m;

    for(int i=n;i<m;i++)
    {
        num_sum+=i;
        if(i%2==0)
            evennum_sum+=i;
    }

    cout<<"\nSum of all the numbers between n and m = \n"<<num_sum;
    cout<<"\nSum of all the even numbers between n and m = \n"<<evennum_sum;
    return 0;
}
