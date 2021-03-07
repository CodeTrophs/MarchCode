#include<iostream>

using namespace std;
int AsciiValue(char ch){
    int ascii = ch;
    return ascii;
}

int main(){
    char ch;
    cin >> ch;

    cout << "The ASCII value of the " << ch << " is " << AsciiValue(ch);   
    return 0;
}