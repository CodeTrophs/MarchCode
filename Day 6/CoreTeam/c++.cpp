#include <stdio.h>

int main ()
{
    int n , m , sum_all , sum_even ;
    cout<<"Enter the upper limit ";
    cin >> m;
    cout<<"Enter the lower limit ";
    cin>>n;
    for (int i = n ; i<m; i++){
        sum_all = sum_all+i;
        if (i%2==0){
            sum_even = sum_even + i ;
        }
    }

    cout<<"The sum of all the number is " << sum_all<<"\n";
    cout<<"The sum of all the even number is "<<sum_even <<"\n";
    return 0 ;
}
