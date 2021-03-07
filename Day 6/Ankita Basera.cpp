#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m, SumOfEven = 0, sum = 0;
    cin >> n >> m;
    for(int i = n+1; i < m; i++)
    {
        sum += i;
        if(i % 2 == 0)
            SumOfEven += i;
    }
    cout << "Sum of all numbers is " << sum << "\n";
    cout << "Sum of even numbers is " << SumOfEven << "\n";
    return 0;
}
