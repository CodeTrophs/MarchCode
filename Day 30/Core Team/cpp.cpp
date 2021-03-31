#include<bits/stdc++.h>

using namespace std;

string convertFirstLetter(string strings){
    strings = ' '+strings;
    string ans="";
    int i=0, a=0;
    while(i<strings.size()){
        if(strings[i]==' '){
            ans+=strings[i];
            a=0;
        }
        else if(strings[i]!=' '){
            if(a==0&&strings[i]>='a'&&strings[i]<='z'){
                ans+=(char)(strings[i]-32);
                a++;
            }else{
                ans+=strings[i];
                a++;
            }
        }
        i++;
    }
    return ans.substr(1, ans.size()-1);
}

int main(){
    string strings;
    cout<<"Enter the  string you want :";
    getline(cin, strings);
    cout<<"The new string is :";
    cout<<convertFirstLetter(strings)<<"\n";
}
