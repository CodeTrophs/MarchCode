#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a;
    cin>>a;
    int b=0;
    while(a>0){
        a=a/(long long int)10;
        b++;
    }

    cout<<b<<"\n";
}