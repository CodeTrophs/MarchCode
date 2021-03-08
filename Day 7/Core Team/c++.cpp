#include <iostream>

using namespace std;

int main()
{
    int number,  number_of_digits; 
    cout<<"Enter the number you want ";
    cin>> number;
    while (number> 0 ){
        number = number /10; 
        number_of_digits++;
    }
    cout<<"The number digits in the number is "<<number_of_digits;
    return 0 ; 
}