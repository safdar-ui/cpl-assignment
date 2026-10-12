#include <iostream>
using namespace std;

int main() {
    double income, tax;
    cout << "Enter monthly income: ";
    cin >> income;

    if (income <= 50000) {
        tax = 0;
    } else if (income <= 100000) {
        tax = (income - 50000) * 0.05;
    } else if (income <= 200000) {
        tax = 2500 + (income - 100000) * 0.10;
    } else {
        tax = 12500 + (income - 200000) * 0.15;
    }

    cout << "Illustrative tax = Rs. " << tax;
    return 0;
}
