#include<iostream>
#include<string>
using namespace std;

int main()
{
   int num;
   cout<<"enter any number character to check its ascii value: ";
   cin>>num;

   cout<<"Ascii value of "<<num<<" is "<<(num+'0')<<endl;
   return 0;
}
