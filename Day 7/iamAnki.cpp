#include <iostream>
using namespace std;
int main()
{
    int n, m , num = 0;
    cout << " Enter a positive integer :  ";
    cin >> n;
    m = n;
    while (n != 0)
    {
        n /= 10;
        num++;
    }
    cout << "\n\nThe number of digits in the entered number: " << m << " is " << num;
    cout << "\n\n\n";
   return 0;
}
