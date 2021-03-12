#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. to find odd or even = ";
    cin>>n;
    
    if(n%2==0){
        cout<<"Entered number "<<n<<" is even number"<<endl;
    }
    else{
        cout<<"Entered number "<<n<<" is odd number";
    }
}
