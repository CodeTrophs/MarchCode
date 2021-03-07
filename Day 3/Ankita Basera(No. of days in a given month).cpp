#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int months[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    cout << "Enter month in number format: ";
    cin >> month;
    (month < 13) ? ((month == 2) ? (cout << "Number of days in " << month << " are " << "28/29") : (cout << "Number of days in " << month << " are " << months[month-1])) : (cout << "Invalid Month");
    return 0;
}
