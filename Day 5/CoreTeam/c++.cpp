#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter lower and upper limit : ";
    cin >> n >> m;

    int i = n + 1;
    while (i < m) {
        cout << i << endl;
        i += 1;
    }
    return 0;
}
›
