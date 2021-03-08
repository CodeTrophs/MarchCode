#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m;
    cin>>n>>m;
    long long int sum=0LL, evenSum=0LL;
    for(long long int i=n;i<=m;i++){
        sum+=(long long int)i;
        if(i%(long long int)2==0)
            evenSum+=(long long int)i;
    }
    cout<<sum<<"\n"<<evenSum<<"\n";
}