#include <iostream>
using namespace std;

int main() {
    double balance, amount;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0) {
        if (amount <= balance) {
            cout << "Withdrawal approved. Remaining balance = "
                 << balance - amount;
        } else {
            cout << "Insufficient balance.";
        }
    } else {
        cout << "Withdrawal amount must be positive.";
    }

    return 0;
}
