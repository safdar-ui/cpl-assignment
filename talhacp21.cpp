#include <iostream>
using namespace std;

int main() {
    int userCode, pin;
    cout << "Enter user code (1001): ";
    cin >> userCode;

    if (userCode == 1001) {
        cout << "Enter PIN (2468): ";
        cin >> pin;
        if (pin == 2468) {
            cout << "Login successful.";
        } else {
            cout << "Incorrect PIN.";
        }
    } else {
        cout << "User code not found.";
    }

    return 0;
}
