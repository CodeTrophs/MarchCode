#include <iostream>
using namespace std;
int main()
{
    long long n;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
    while(n){
        n=n/10;
        count++;
    }
    cout<<"Number of digits in the given number are:"<<count;

    return 0;
}