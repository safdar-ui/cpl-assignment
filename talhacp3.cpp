#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 5000) {
        cout << "You qualify for a bonus gift.";
    }

    return 0;
}
