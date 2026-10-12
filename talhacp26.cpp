#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter day and month: ";
    cin >> day >> month;

    if (month >= 1 && month <= 12) {
        int maxDays;
        if (month == 2) {
            maxDays = 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else {
            maxDays = 31;
        }

        if (day >= 1 && day <= maxDays) {
            cout << "Valid date in a non-leap year.";
        } else {
            cout << "Invalid day for this month.";
        }
    } else {
        cout << "Invalid month.";
    }

    return 0;
}
