  
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number =  ";
    cin>>n;

    if(n%5==0 && n%11==0)
        cout<<n<<" is divisible by 5 and 11";
    else
        cout<<n<<" is not divisible by 5 and 11";

    return 0;
}