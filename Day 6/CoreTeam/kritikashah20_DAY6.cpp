//Day6 - To print the sum of all the numbers and sum of all the even number between ( n and m )

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter 2 numbers: ";
    cin>>n>>m;
    
    int sum_all = 0;
    int sum_even = 0;
    for(int i=n;i<=m;i++)
    {
        sum_all += i;
        
        if(i%2==0)
            sum_even += i;
    }
    
    cout<<"Sum of all the numbers between "<<n<<" and "<<m<<" is: "<<sum_all<<endl;
    cout<<"Sum of all the even numbers between "<<n<<" and "<<m<<" is: "<<sum_even<<endl;
}