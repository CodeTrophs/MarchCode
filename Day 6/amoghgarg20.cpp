#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter first number(n):";
    cin>>n;
    cout<<"Enter second number(m):";
    cin>>m;
    int sum=0,sum_even=0;
    for(int i=n+1;i<m;i++){
        sum=sum+i;
        if(i%2==0){
            sum_even=sum_even+i;
        }
    }
    cout<<"Sum of numbers between n and m:"<<sum<<endl;
    cout<<"Sum of even numbers between n and m:"<<sum_even<<endl;
    return 0;
    
}