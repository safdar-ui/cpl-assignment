#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0) {
        if (n % 2 == 0) {
            cout << "Positive and even.";
        } else {
            cout << "Positive and odd.";
        }
    } else {
        cout << "Number is not positive.";
    }

    return 0;
}
