#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }

    cout << "GCD = " << m << endl;
    return 0;
}
