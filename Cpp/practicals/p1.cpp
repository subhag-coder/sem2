#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[]) {
    int n;
    if (argc > 1) {
        n = stoi(argv[1]);
    } 
    else {
        cout << "Enter the number of terms (n): ";
        cin >> n;
    }
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    cout << "Sum of first " << n << " terms = " << sum << endl;
    return 0;
}
