#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int num;
    cin >> num;
    (num % 5 == 0 && num % 11 == 0) ? (cout << num <<" is divisible by both 5 and 11.") : (cout << num <<" is not divisible by both 5 and 11.");
    return 0;
}
