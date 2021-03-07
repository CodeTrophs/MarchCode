#include<iostream>
using namespace std;

int main()
{
   int n,m;
   cout<<"enter the starting index(>0): "; cin>>n;
   cout<<"enter the ending index(>0): "; cin>>m;

   cout<<"Natural numbers between entered range is: \n";
   for (int i=n; i<m; i++)
   {
       cout<<i<<endl;
   }
   return 0;
}
