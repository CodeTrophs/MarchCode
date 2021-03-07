#include <iostream>
using namespace std;

int main() {
long n, m;
cout<<"Enter range n and m separated by a space"<<endl;
cin>>n>>m;

long se=0, so=0;

for(long i=n;i<=m;i++) {
if(i%2==0) se+=i;
else so+=i;
}

cout<<"sum of even numbers is "<<se<<endl;
cout<<" sum of odd numbers is "<<so<<endl;

return 0;
}
