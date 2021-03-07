#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the value of n(n>0):";
    cin>>n;
    cout<<"Enter the value of m(m>n):";
    cin>>m;
    cout<<"Numbers between n and m are:";
    for(int i=n+1;i<m;i++){
        cout<<i<<' ';
    }
    return 0;
}