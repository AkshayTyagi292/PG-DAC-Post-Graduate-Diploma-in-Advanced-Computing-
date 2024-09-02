#include <iostream>
#include <cmath> // For sqrt() function

using namespace std;

// Function to find and display the roots
void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots of the equation are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = root2 = -b / (2 * a);
        cout << "The root of the equation is " << root1 << endl;
    } else {
        // No real roots
        cout << "The equation has no real roots." << endl;
    }
}

int main() {
    double a, b, c;

    // Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Call function to find roots
    findRoots(a, b, c);

    return 0;
}
