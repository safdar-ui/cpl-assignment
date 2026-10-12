#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three side lengths: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Equilateral triangle";
        } else if (a == b || a == c || b == c) {
            cout << "Isosceles triangle";
        } else {
            cout << "Scalene triangle";
        }
    } else {
        cout << "Invalid triangle";
    }

    return 0;
}
