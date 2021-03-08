// To count the number of digits in a number.

#include <iostream>
using namespace std;
int main()
{
  long num, n, count = 0;
  cin>>num;
  n = num;
  for(n = num; n!=0; n/=10)
    count++;
  cout<<"> Number of digits in "<< num <<" are : "<< count;
}
