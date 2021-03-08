#include <iostream>
using namespace std;
int main()
{
 int num;
 int count = 0;
 cout << "\nEnter a Number: ";
 cin >> num;

 while( num != 0)
 {
  num = num/10;
  ++count;
 }
cout << " \nNumber of digits: " << count << endl;
return 0;
}