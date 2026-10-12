#include <iostream>
using namespace std;

int main() {
    float marks, attendance, familyIncome;
    cout << "Enter marks percentage: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Enter attendance percentage: ";
        cin >> attendance;
        if (attendance >= 90) {
            cout << "Enter monthly family income: ";
            cin >> familyIncome;
            if (familyIncome <= 100000) {
                cout << "Eligible for the sample scholarship.";
            } else {
                cout << "Income exceeds the scholarship limit.";
            }
        } else {
            cout << "Attendance requirement not met.";
        }
    } else {
        cout << "Marks requirement not met.";
    }

    return 0;
}
