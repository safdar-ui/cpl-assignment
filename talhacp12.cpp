#include <iostream>
using namespace std;

int main() {
    float t;
    cout << "Enter temperature in Celsius: ";
    cin >> t;

    if (t >= 35) {
        cout << "Hot";
    } else if (t >= 25) {
        cout << "Warm";
    } else if (t >= 15) {
        cout << "Pleasant";
    } else {
        cout << "Cold";
    }

    return 0;
}

