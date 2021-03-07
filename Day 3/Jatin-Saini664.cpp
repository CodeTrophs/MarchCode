#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string a[] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};

    for(int i=1;i<=s.size();i++){
        if(a[i-1].compare(s)==0){
            if(i==2)
                cout<<28<<"\n";
            else if(i%2==0)
                cout<<30<<"\n";
            else
                cout<<31<<"\n";
            break;
        }
    }
}