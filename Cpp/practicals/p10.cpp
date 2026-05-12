#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:

    Triangle(double x, double y, double z) {
        if (x <= 0 || y <= 0 || z <= 0) {
            throw "All sides must be greater than 0!";
        }
        if (x + y <= z || x + z <= y || y + z <= x) {
            throw "Sum of any two sides must be greater than the third side!";
        }
        a = x; b = y; c = z;
    }


    double area(double base, double height) {
        if (base <= 0 || height <= 0) {
            throw "Base and height must be positive!";
        }
        return 0.5 * base * height;
    }

    double area() {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void displaySides() {
        cout << "Sides: " << a << ", " << b << ", " << c << endl;
    }
};

int main() {
    try {
        double x, y, z;
        cout << "Enter three sides of the triangle: ";
        cin >> x >> y >> z;

        Triangle t(x, y, z);
        t.displaySides();

        cout << "Area using Heron's formula: " << t.area() << endl;

        double base, height;
        cout << "\nEnter base and height for right-angled triangle: ";
        cin >> base >> height;
        cout << "Area of right-angled triangle: " << t.area(base, height) << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
