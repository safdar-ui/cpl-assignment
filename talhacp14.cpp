#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;
    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = 100 * 10.0 + (units - 100) * 15.0;
    } else {
        bill = 100 * 10.0 + 100 * 15.0 + (units - 200) * 20.0;
    }

    cout << "Estimated bill = Rs. " << bill;
    return 0;
}
