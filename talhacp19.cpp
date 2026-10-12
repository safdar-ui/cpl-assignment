#include <iostream>
using namespace std;

int main() {
    int choice;
    double x, y;
    cout << "1. Square  2. Rectangle  3. Triangle\n";
    cout << "Choose shape: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter side: ";
            cin >> x;
            cout << "Area = " << x * x;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> x >> y;
            cout << "Area = " << x * y;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> x >> y;
            cout << "Area = " << 0.5 * x * y;
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}

