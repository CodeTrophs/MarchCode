#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter Upper limit and lower limit : ";
    cin >> num1 >> num2;

    int i = num1 + 1;
    while (i < num2) {
        cout << i << endl;
        i += 1;
    }
    return 0;
}