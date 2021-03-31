#include<iostream>
using namespace std;

int countWords(string s){
    int words=0, i=0;
    while(i<s.size()){
        if(s[i]==' '){
            words++;
        }
        i++;
    }
    if(s[i-1]!=' ')
        words++;
    return words;
}

int main(){
    string s;
    cout << "Enter String : ";
    getline(cin, s);
    cout<<"No . of words in the string is : " << countWords(s) << " ";
}
