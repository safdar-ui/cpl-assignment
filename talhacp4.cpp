#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 5 == 0) {
        cout << "The number is divisible by 5.";
    }

    return 0;
}
