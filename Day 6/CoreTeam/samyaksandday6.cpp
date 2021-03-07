#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter Lower limit and Upper limit : ";
    cin >> num1 >> num2;
    int sum=0,even=0;

    for(int i=num1+1; i<num2; i++)
    {
        sum=sum+1;
        
        if(i%2==0)
            even=even+1;
    }

    cout<<"\nSum of all the numbers = "<<sum;
    cout<<endl;
    cout<<"Sum of all the even numbers = "<<even;
    return 0;
}

