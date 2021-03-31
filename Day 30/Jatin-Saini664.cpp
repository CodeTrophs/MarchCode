#include<bits/stdc++.h>

using namespace std;

string convertFirstLetter(string s){
    s = ' '+s;
    string ans="";
    int i=0, a=0;
    while(i<s.size()){
        if(s[i]==' '){
            ans+=s[i];
            a=0;
        }
        else if(s[i]!=' '){
            if(a==0&&s[i]>='a'&&s[i]<='z'){
                ans+=(char)(s[i]-32);
                a++;
            }else{
                ans+=s[i];
                a++;
            }
        }
        i++;
    }
    return ans.substr(1, ans.size()-1);
}

int main(){
    string s;
    getline(cin, s);
    cout<<convertFirstLetter(s)<<"\n";
}