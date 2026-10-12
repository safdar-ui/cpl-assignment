#include <iostream>
using namespace std;

int main() {
    int age;
    double salary, existingDebt;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 21 && age <= 60) {
        cout << "Enter monthly salary: ";
        cin >> salary;
        if (salary >= 50000) {
            cout << "Enter monthly debt payments: ";
            cin >> existingDebt;
            if (existingDebt <= salary * 0.30) {
                cout << "Meets these sample loan criteria.";
            } else {
                cout << "Existing debt is too high.";
            }
        } else {
            cout << "Salary requirement not met.";
        }
    } else {
        cout << "Age requirement not met.";
    }

    return 0;
}
