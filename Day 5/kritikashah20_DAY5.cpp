//Day5 - To print all the natural number between n and m (n and m are user input) ( n > 0 , m > 0 )

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter 2 numbers: ";
    cin>>n>>m;
    
    if(n<=0 || m<=0)
    {
        cout<<"Enter valid numbers";
    }
    else
    {
        for(int i=n;i<=m;i++)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}